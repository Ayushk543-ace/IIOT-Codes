#define LED_R_PIN 5
#define LED_G_PIN 6
#define LED_B_PIN 3
#define POTENTIOMETER_PIN A1
int potentiometerValue;
int brightness;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_R_PIN, OUTPUT);
  pinMode(LED_G_PIN, OUTPUT);
  pinMode(LED_B_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potentiometerValue = analogRead(A1);
  brightness = map(potentiometerValue, 0, 1023, 0, 255);
  analogWrite(LED_R_PIN, brightness);
  analogWrite(LED_G_PIN, brightness*2);
  analogWrite(LED_B_PIN, brightness*7);
}
