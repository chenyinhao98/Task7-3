
void setup()
{ 
  
 // put your setup code here, to run once: 
Serial.begin(9600); 
 pinMode(LED_BUILTIN, OUTPUT);
 pinMode(1, INPUT); 
 pinMode(2, INPUT); 
 pinMode(3, INPUT); 
}  
 
void loop() 
{ 
// put your main code here, to run repeatedly:
bool PIRsensor1 = digitalread(1);
bool PIRsensor2 = digitalread(2);
bool PIRsensor3 = digitalread(3);
bool alram_on = false;
 
if (PIRsensor == HIGH)
{
  Serial.println("Alarm");
  alarm_on = true; 
  digitalWrite(LED_BUILTIN, HIGH);
}

if (alarm_on == false)
{
  if (sensor2 == HIGH)
  {
    Serial.println("Alarm");
    alarm_on = true;
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else if (sensor3 == HIGH)
  {
    Serial.println("Alarm");
    alarm_on = true;
    digitalWrite(LED_BUILTIN, HIGH);
  }

} 
