
int flameSensorPin = 0; //  a0 
int flameSensorReading; 
int buzzerPin=8; 
void setup(void) 
{  
  Serial.begin(9600);
  pinMode(buzzerPin,OUTPUT);
} 
void loop(void) 
{ 
  flameSensorReading = analogRead(flameSensorPin);  
  if(flameSensorReading<1023)
{
  digitalWrite(buzzerPin,HIGH);
}
else
{
  digitalWrite(buzzerPin,LOW);
}
 Serial.print("Analog reading = "); 
 Serial.println(flameSensorReading); // the raw analog reading delay(1000); 
 delay(500);
}
