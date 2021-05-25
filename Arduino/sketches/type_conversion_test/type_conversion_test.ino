int64_t a = pow(2, 31) - 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  double b = a/100.0;
  Serial.println(b);
  while(true);
}
