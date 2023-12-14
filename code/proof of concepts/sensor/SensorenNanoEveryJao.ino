const int sensorPins[8] = {A7, A6, A5, A4, A3, A2, A1, A0};
const int numSensors = 8;
int sensorValues;

const int IRledPin = 13;

void setup() {
  Serial.begin(9600);

  pinMode(IRledPin, OUTPUT);
  digitalWrite(IRledPin, HIGH);
}

void loop() {
  Serial.print("Sensorwaarden: ");

  for (int i = 0; i < numSensors; i++) {
    sensorValues = analogRead(sensorPins[i]);
    Serial.print(sensorValues);
    Serial.print(" ");
  }
  Serial.println();
}