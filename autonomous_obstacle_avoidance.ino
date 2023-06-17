#include <NewPing.h>

#define TRIG_PIN 7
#define ECHO_PIN 6
#define MAX_DISTANCE 200

#define IN1_PIN 2
#define IN2_PIN 3
#define IN3_PIN 4
#define IN4_PIN 5
#define ENA_PIN 11
#define ENB_PIN 10

#define CAR_SPEED 100

NewPing sonar(TRIG_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  // Set pin modes for motor control
  pinMode(IN1_PIN, OUTPUT);
  pinMode(IN2_PIN, OUTPUT);
  pinMode(IN3_PIN, OUTPUT);
  pinMode(IN4_PIN, OUTPUT);
  pinMode(ENA_PIN, OUTPUT);
  pinMode(ENB_PIN, OUTPUT);
  
  // Set initial motor control states
  digitalWrite(IN1_PIN, LOW);
  digitalWrite(IN2_PIN, LOW);
  digitalWrite(IN3_PIN, LOW);
  digitalWrite(IN4_PIN, LOW);
  digitalWrite(ENA_PIN, LOW);
  digitalWrite(ENB_PIN, LOW);
  
  // Start serial communication
  Serial.begin(9600);
}

void moveForward() {
  // Move the car forward
  analogWrite(ENA_PIN, CAR_SPEED);
  analogWrite(ENB_PIN, CAR_SPEED);
  digitalWrite(IN1_PIN, HIGH);
  digitalWrite(IN2_PIN, LOW);
  digitalWrite(IN3_PIN, HIGH);
  digitalWrite(IN4_PIN, LOW);
  delay(100);
}

void moveRight() {
  // Turn the car right
  digitalWrite(IN1_PIN, LOW);
  digitalWrite(IN2_PIN, HIGH);
  digitalWrite(IN3_PIN, LOW);
  digitalWrite(IN4_PIN, LOW);
  analogWrite(ENA_PIN, CAR_SPEED);
  analogWrite(ENB_PIN, CAR_SPEED);
  delay(500);
}

void moveLeft() {
  // Turn the car left
  digitalWrite(IN1_PIN, LOW);
  digitalWrite(IN2_PIN, LOW);
  digitalWrite(IN3_PIN, LOW);
  digitalWrite(IN4_PIN, HIGH);
  analogWrite(ENA_PIN, CAR_SPEED);
  analogWrite(ENB_PIN, CAR_SPEED);
  delay(500);
}

void stopCar() {
  // Stop the car
  digitalWrite(IN1_PIN, LOW);
  digitalWrite(IN2_PIN, LOW);
  digitalWrite(IN3_PIN, LOW);
  digitalWrite(IN4_PIN, LOW);
  delay(500);
}

void loop() {
  // Measure the distance using the ultrasonic sensor
  unsigned int distance = sonar.ping_cm();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance <= 30) {
    // Obstacle detected, stop the car and turn around
    Serial.println("Obstacle detected!");
    stopCar();
    delay(500);
    if (random(0, 2) == 0) {
      // Turn right
      Serial.println("Turn right");
      moveRight();
    } else {
      // Turn left
      Serial.println("Turn left");
      moveLeft();
    }
  } else {
    // No obstacle detected, move forward
    Serial.println("Moving forward...");
    moveForward();
  }
}
