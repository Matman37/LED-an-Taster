#define LED 2
#define Taster 10

boolean eingabe = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(250000);

  pinMode (LED, OUTPUT);
  pinMode (Taster, INPUT);
}

void loop() {
  eingabe = digitalRead(Taster);
  digitalWrite (LED, eingabe);
  if (eingabe == 1)
  {
    Serial.println("LED an");
  }
  else {
    Serial.println("LED aus");
  }
}
