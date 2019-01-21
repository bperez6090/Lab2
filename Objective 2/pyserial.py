import serial
import time
from random import randint

with serial.Serial(port = "COM5", baudrate = 9600, timeout = 1) as ser:

#print(randint(1,9))

    while True:
        send = str(randint(1,9))
        send = send + "\n"
        ser.write(send.encode("utf-8"))
        time.sleep(30)
       
        
      