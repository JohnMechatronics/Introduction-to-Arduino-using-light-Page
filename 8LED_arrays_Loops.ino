
//LED Pin Variables

int ledPins[] = {6,7,8,9,10,11,12,13};


void setup()
{
  for (int i=0;i<7;i++){
    pinMode(ledPins[i],OUTPUT);
  }
}
 
void loop()                     
{
  //Loops turning each LED on one after another
  for(int i = 0; i <= 7; i++){
    digitalWrite(ledPins[i], HIGH);  
    delay(100);                 
  }                                  
  //Loops turning each LED off one after another
  for(int i = 7; i >= 0; i--){                             
    digitalWrite(ledPins[i], LOW);  
    delay(100);                
  }                                  
                                     
}
