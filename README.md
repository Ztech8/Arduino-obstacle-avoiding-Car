# Arduino-obstacle-avoiding-Car
![Untitled Sketch_bb](https://github.com/Ztech8/Arduino-obstacle-avoiding-Car/assets/102862728/b0cb079b-13fa-4247-9749-111e64818e5e)

This Arduino code controls a car that can avoid obstacles using an ultrasonic sensor. The car has two motors connected to an H-bridge motor driver, and the ultrasonic sensor is connected to the Arduino.

The code starts by defining the pins for the ultrasonic sensor, motor driver, and some constants. It also includes the NewPing library for working with the ultrasonic sensor.

In the setup() function, the pin modes for the motor driver are set, and all the motor control pins and enable pins are initially set to low.

The moveForward() function is responsible for moving the car forward. It sets the motor control pins in a way that enables forward motion and sets the motor speeds using the enable pins. It includes a small delay to ensure the car moves forward for a brief period.

The moveRight() and moveLeft() functions are similar to moveForward(), but they control the car's movement to the right and left, respectively. They change the motor control pin states accordingly and include delays to control the duration of the turn.

The stopCar() function stops the car by setting all motor control pins to low and includes a delay.

In the loop() function, the ultrasonic sensor measures the distance to the nearest obstacle using the ping_cm() function from the NewPing library. The measured distance is printed to the serial monitor.

If an obstacle is detected within a range of 0 to 30 cm, the car stops using the stopCar() function and waits for a brief moment. Then, it randomly chooses to turn right or left using the random() function. If the random value is 0, it turns right by calling moveRight(), and if it's 1, it turns left by calling moveLeft().

If no obstacle is detected, the car moves forward by calling moveForward().

This code can be used as a starting point for building an Arduino obstacle-avoiding car. Make sure to connect the ultrasonic sensor and motor driver correctly, and adjust the pin numbers and other parameters as needed for your specific setup.
