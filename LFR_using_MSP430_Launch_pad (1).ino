void setup() {
  pinMode(P1_2,OUTPUT);// left motor clockwiseput your setup code here, to run once:
pinMode(P1_3,OUTPUT);// left motor
pinMode(P2_4,OUTPUT);//right motor clockwise
pinMode(P2_5,OUTPUT);//right
pinMode(P1_4,INPUT);//LEFT SENSOR
pinMode(P1_5,INPUT);//RIGHT SENSOR
}


void loop() {
  // put your main code here, to run repeatedly: 
 if ((digitalRead(P1_4)==HIGH)&&(digitalRead(P1_5)==HIGH))
  {
  digitalWrite(P1_2,HIGH);//FORWARD
digitalWrite(P1_3,LOW);
 digitalWrite(P2_4,HIGH); 
  digitalWrite(P2_5,LOW);
  }
  if ((digitalRead(P1_4)==LOW)&&(digitalRead(P1_5)==LOW))
  {
     digitalWrite(P1_2,HIGH);//STOP
digitalWrite(P1_3,LOW);
 digitalWrite(P2_4,LOW); 
  digitalWrite(P2_5,LOW); 
  }
   if ((digitalRead(P1_4)==HIGH)&&(digitalRead(P1_5)==LOW))
  {
     digitalWrite(P1_2,HIGH);//FORWARD
digitalWrite(P1_3,LOW);
 digitalWrite(P2_4,LOW); 
  digitalWrite(P2_5,HIGH); 
  }
   if ((digitalRead(P1_4)==LOW)&&(digitalRead(P1_5)==HIGH))
  {
     digitalWrite(P1_2,LOW);//FORWARD
digitalWrite(P1_3,HIGH);
 digitalWrite(P2_4,HIGH); 
  digitalWrite(P2_5,LOW); 
  }
}
