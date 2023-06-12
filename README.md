# Arduino-obstacle-avoiding-Car
![Untitled Sketch_bb](https://github.com/Ztech8/Arduino-obstacle-avoiding-Car/assets/102862728/b0cb079b-13fa-4247-9749-111e64818e5e)

This project involves building an autonomous car using an Arduino board and an ultrasonic sensor. The car is programmed to move forward until it detects an obstacle in front of it. Upon detecting an obstacle, it stops, turns either left or right randomly, and then continues moving forward. The ultrasonic sensor is used to measure the distance between the car and the obstacle.

## Hardware Requirements

To replicate this project, you will need the following hardware components:

- Arduino board (e.g., Arduino Uno)
- Ultrasonic sensor (e.g., HC-SR04)
- L293D motor driver module
- DC motors (2)
- Wheels (2)
- Breadboard
- Jumper wires
- Power source (e.g., 9V battery)

## Software Requirements

The project requires the following software:

- Arduino IDE: You can download it from the official Arduino website (https://www.arduino.cc/en/software).

## Circuit Setup

1. Connect the ultrasonic sensor to the Arduino board as follows:
   - Connect the Trig pin of the sensor to pin 7 of the Arduino.
   - Connect the Echo pin of the sensor to pin 6 of the Arduino.
   - Connect the VCC and GND pins of the sensor to the 5V and GND pins of the Arduino, respectively.

2. Connect the L293D motor driver module to the Arduino board as follows:
   - Connect IN1, IN2, IN3, and IN4 pins of the module to pins 2, 3, 4, and 5 of the Arduino, respectively.
   - Connect ENA and ENB pins of the module to pins 11 and 10 of the Arduino, respectively.
   - Connect the input pins of the two DC motors to the output pins of the module.

3. Connect the power source (9V battery) to the motor driver module.

## Uploading the Code

1. Open the Arduino IDE on your computer.

2. Create a new sketch and copy the code from the provided script into the IDE.

3. Verify that the code compiles without any errors.

4. Connect the Arduino board to your computer using a USB cable.

5. Select the appropriate board and port from the Tools menu in the Arduino IDE.

6. Click on the "Upload" button to upload the code to the Arduino board.

## Running the Project

1. Open the Serial Monitor in the Arduino IDE to view the output from the car.

2. Make sure the car is placed in an open area without any obstacles nearby.

3. Power on the car and the Arduino board.

4. The car will start moving forward until it detects an obstacle within 30 cm.

5. If an obstacle is detected, the car will stop, turn either left or right randomly, and then continue moving forward.

6. The distance between the car and the obstacle will be displayed in the Serial Monitor.

7. Observe the car's behavior and the distance readings in the Serial Monitor.

8. To stop the car, power off the Arduino board.

## Customization

You can customize various aspects of the project according to your requirements:

- Adjust the values in the code to modify the maximum distance for obstacle detection (`MAX_DISTANCE`) and the car's speed (`CAR_SPEED`).

- Modify the delays in the `moveRight()`, `moveLeft()`, and `stopCar()` functions to change the duration of each action.

- Experiment with different algorithms to control the car's movements and obstacle avoidance behavior.

## Troubleshooting

If you encounter any issues while setting up or running the project, consider the following:

- Double-check

 the wiring connections to ensure they are correct.

- Verify that you have selected the correct board and port in the Arduino IDE.

- Make sure you have installed the necessary libraries, such as the NewPing library, in the Arduino IDE.

- Check for any error messages or warnings in the Arduino IDE's console.

- Ensure that the power source provides sufficient voltage and current to drive the motors.

## Conclusion

By following the instructions in this README file, you can build an autonomous car using an Arduino board and an ultrasonic sensor. The car will detect obstacles and navigate around them, providing an interesting demonstration of basic autonomous behavior. Feel free to modify and expand upon this project to explore more advanced robotics concepts.
