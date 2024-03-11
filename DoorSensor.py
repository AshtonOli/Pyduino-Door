import serial
from src.arduino import motion
PORT = "COM3"
baudrate = 9600
timeout = 0.1

serialInst = serial.Serial(
    port=PORT,
    baudrate = baudrate,
    timeout=timeout
)
# serialInst.open()

def arduinoRun():
    while True:
        data = serialInst.readline().decode().strip()
        print(data)
        if data.upper() == "Motion detected".upper():
            motion()
            pass

if __name__ == "__main__":
    arduinoRun()