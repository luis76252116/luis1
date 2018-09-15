int ldr=A4;
int salida=3;
int rele=8;
int ldrValue=0;
void setup() {
  pinMode (ldr,INPUT);
  pinMode (salida,OUTPUT);
  pinMode (rele,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldr);
  Serial.println(ldrValue,DEC);
 if(analogRead(ldr)<=200)
 {
  digitalWrite(salida,HIGH);
  digitalWrite(rele,HIGH);
 }
 else
 {
  digitalWrite(salida,LOW);
  digitalWrite(rele,LOW);
 }
}

