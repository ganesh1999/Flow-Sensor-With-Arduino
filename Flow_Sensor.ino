int flowPin = 2;
double flowRate;
volatile int count;

void setup() {
  pinMode(flowPin, INPUT);         
  attachInterrupt(0, Flow, RISING); 
  Serial.begin(9600); 
}
void loop() {
  count = 0;      
  interrupts();  
  delay (1000);   
  noInterrupts(); 
  flowRate = (count / 7.75);  
  Serial.println(String(flowRate)+"L/min");      
  
}
 
void Flow()
{
   count++; 
}
