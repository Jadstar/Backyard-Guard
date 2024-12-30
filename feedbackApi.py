import serial
import time

PORT = "COM12"  # Replace with your Arduino's port
BAUD = 9600
TIMEOUT = 1

arduino = serial.Serial(port=PORT, baudrate=BAUD, timeout=TIMEOUT)

def send_command(command):
    arduino.write(bytes(command + '\n', 'utf-8'))  # Send the command
    time.sleep(0.1)  # Wait for Arduino to process
    response = arduino.readline().decode('utf-8').strip()  # Read Arduino's response
    return response

while True:
    try:
        yaw_deg = int(input("Enter yaw adjustment (e.g., -10 for left, 10 for right): "))
        pitch_deg = int(input("Enter pitch adjustment (e.g., -5 for down, 5 for up): "))

        yaw_response = send_command(f"moveYaw{yaw_deg}")
        print(f"Arduino yaw response: {yaw_response}")

        pitch_response = send_command(f"movePitch{pitch_deg}")
        print(f"Arduino pitch response: {pitch_response}")

    except ValueError:
        print("Invalid input. Please enter integers for yaw and pitch adjustments.")
