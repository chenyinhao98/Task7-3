  int PIRsensor1 = 1;
  int PIRsensor2 = 2;
  int PIRsensor3 = 3;
  int Alarm = 4;
void setup()
{ 
  
 // put your setup code here, to run once: 
Serial.begin(9600); 
 pinMode(LED_BUILTIN, OUTPUT);
 pinMode(PIRsensor1, INPUT); 
 pinMode(PIRsensor2, INPUT); 
 pinMode(PIRsensor3, INPUT); 
 pinMode(Alarm, INPUT); 
}  
 
void loop() 
{ 
// put your main code here, to run repeatedly:
Serial.println("Alarm off");  
if (digitalRead(PIRsensor1) == HIGH, digitalRead(PIRsensor2) == HIGH, digitalRead(PIRsensor3) == HIGH) 
{ 
Serial.println("Alarm on");
digitalWrite(Alarm) == HIGH;
digitalWrite(LED_BUILTIN, HIGH);
} 

delay(1000); 
} 
