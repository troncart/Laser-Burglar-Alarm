/*********TACHLOG powered********
*********www.troncart.com*******
**electronics components online**
***********Laser Burglar Alarm**************
***********26-07-2019**************
*/
 
int sensorPin=A0;
int sensorValue=0; 
int piezoPin=13; 

void setup() 
  { 

    pinMode(sensorPin,INPUT); 
    pinMode(13,OUTPUT); 
    pinMode(piezoPin,OUTPUT); 
    digitalWrite(13,HIGH); 
    delay(1000);
    digitalWrite(13,LOW);
} 

  void loop() 
    { 

      sensorValue=analogRead(sensorPin); 
      if(sensorValue<=500) 
        {
          digitalWrite(piezoPin,HIGH); 
          { 
            tone(9,3047,400); 
            delay(100);
            noTone(8); 
            delay(100);
          }
          digitalWrite(13,HIGH); 
          delay(100);
        }

       else 
       { 

          digitalWrite(piezoPin,LOW); 
          digitalWrite(13,LOW); 

        } 

      sensorValue=1000; 

    }
