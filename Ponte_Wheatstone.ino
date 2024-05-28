void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  float va0 = analogRead(A0) * 5 / 1024.;
  float va1 = analogRead(A1) * 5 / 1024.;

  float tensione_ponte = va0 - va1;
  float corrente_ponte = tensione_ponte / 1e3;

  //calcolo valore potenziometro
  float i0 = (va1/330.) + (va0/220.);
  float i1 = (5-va0) / 2e3;
  float i2 = i0 - i1;
  float rpot = (5 - va1)/ i2;

  Serial.print(tensione_ponte);
  Serial.println(" v");
  Serial.print(corrente_ponte*1e3);
  Serial.println(" ma");
  Serial.print(rpot);
  Serial.println(" ohm");
  Serial.println(" ");

  delay(1000);
  }
