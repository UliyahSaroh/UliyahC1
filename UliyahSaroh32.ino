//Uliyah Saroh
//XI TKJ 1

void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(11,HIGH);//Pada pin 11, LED menyala
  delay(3000)
  digitalWrite(11,LOW);//Pada pin 11, LED mati
  delay(3000);//Tunda 3 sec pada saat mati
}
