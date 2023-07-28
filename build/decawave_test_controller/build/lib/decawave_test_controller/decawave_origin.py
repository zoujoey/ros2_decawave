import serial
import time
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd


def send_cmd(cmd):
    ser.write(cmd + b'\r\n')
    resp = ser.readline().decode().strip()
    return resp
def parse_data(s):
    print(len(s))
    if len(s)<100:
        return None
    elif len(s)>105:
        return None
    substrings = s.split()
    results = {}
    for substring in substrings:
        tag = substring[:4]
        values_str = substring.split('=')[0]
        values_str1 = values_str.split('[')[1]
        values_str1 = values_str1.strip(']')
        values_list = [float(x) for x in values_str1.split(',')]
        values_list.append(float(substring.split('=')[1]))
        results[tag] = values_list
    return (results)

def get_dist():
    try: 
        resp = ser.readline().decode().strip()
        print(resp)
        return resp
    except:
        return ''


try:
    ser = serial.Serial(port='/dev/ttyACM0', baudrate=115200, timeout=1) #COM port may be different for Linux
    print(ser)
except:
    ser = ''
# time.sleep(3)
# resp = ser.readline().decode().strip()
# print(resp)
# time.sleep(1)
# cmd = b'les'
# send_cmd(cmd)
# resp = ser.readline().decode().strip()
# print(resp)
# time.sleep(5)


#Running Function
# Set up the plot
fig, ax = plt.subplots()
n=4
# Set up the x-axis (time) to automatically update
x = []
y = [[] for i in range(n)]
lines = []
labels = ["D633","9620","919B","CC2E"] # Labels for the lines
for i in range(n):
    line, = ax.plot(x, y[i], label=labels[i])
    lines.append(line)
ax.set_autoscale_on(True)

# Add a legend to the plot
ax.legend()

anchor_ids = ["D633","9620","919B","CC2E"]
df_data = []
# Start a timer to update the plot
start_time = time.time()

try:
    while True:
        s = 'D633[4.43,0.00,0.00]=2.60 9620[5.41,5.08,0.00]=2.74 919B[2.31,4.92,0.00]=4.35 CC2E[0.00,0.00,0.00]=6.23'
        dist = parse_data(get_dist())
        if dist == None:
            dist = parse_data(s)
        print(dist)
        dist_lst = []
        for i in range(n):
            dist_lst.append(dist[anchor_ids[i]][3])
    # Get the current time and values
        current_time = time.time() - start_time
        current_values = dist_lst

        for anchor_id in anchor_ids:
            df_data.append(dict(
                anchor_id=anchor_id,
                distance=dist[anchor_id][3],
                timestamp=time.time()
            ))

        # Update the plot
        x.append(current_time)
        for i, line in enumerate(lines):
            y[i].append(current_values[i])
            line.set_xdata(x)
            line.set_ydata(y[i])
        ax.relim()
        ax.autoscale_view()

        # Pause for a short time before updating again
        plt.pause(0.01)
except KeyboardInterrupt:
    df = pd.DataFrame(df_data)
    print(df)
    df.plot()
    plt.show()
    filename = f"{time.time():0f}_uwb.pkl"
    df.to_pickle(filename)