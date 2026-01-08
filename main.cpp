#define trigPin 2
#define echoPin 3
#define motorPin 4  // Transistor control pin

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  long duration;
  int distance;

  // Trigger the Sensor
  digitalWrite(trigPin, LOW); delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read Echo
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // Show Distance
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Activate motor if object is close
  if (distance > 0 && distance <= 30) {
    digitalWrite(motorPin, HIGH); // Turn on vibration
  } else {
    digitalWrite(motorPin, LOW);  // Turn off vibration
  }

  delay(200); // Small delay for stability
}
