#include <Servo.h>
Servo servo;
#define soil 5
#define rain 6
#define pumpled 7
#define pump 10
#define led2 8
#define light A0
#define humidity A1
int pos=0;
int i=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(soil,INPUT);
  pinMode(pumpled,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(rain,INPUT);
  servo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x=digitalRead(soil);
  int y=digitalRead(rain);
  int lightoutput=analogRead(light);
  int humidityoutput=analogRead(humidity);
  
  // put your main code here, to run repeatedly:
  if ((x==0)&&(y==0))
  {
    if(i<=1)
    {
     digitalWrite(led2,1);
     delay(50);
      digitalWrite(led2,0);
      delay(50);
       digitalWrite(led2,1);
       delay(50);
        digitalWrite(led2,0);
        delay(50);
        digitalWrite(led2,1);
     delay(50);
      digitalWrite(led2,0);
      delay(50);
       digitalWrite(led2,1);
       delay(50);
        digitalWrite(led2,0);
        delay(50);
       digitalWrite(led2,1);
       delay(50);
        digitalWrite(led2,0);
        delay(50);
        digitalWrite(led2,1);
     delay(50);
      digitalWrite(led2,0);
      delay(50);
       digitalWrite(led2,1);
       delay(50);
        digitalWrite(led2,0);
        delay(50);
       digitalWrite(led2,1);
       delay(50);
        digitalWrite(led2,0);
        delay(50);
        digitalWrite(led2,1);
     delay(50);
      digitalWrite(led2,0);
      delay(50);
       digitalWrite(led2,1);
       delay(50);
        digitalWrite(led2,0);
    }
    i++;
    
    Serial.println("\nSoil Wet and Rain");
    Serial.print("\nHUMIDITY VALUE: ");
    Serial.println(humidityoutput);
    digitalWrite(pumpled,0);
    digitalWrite(pump,0);
    delay(1000);
    while(pos!=130)
    {
      servo.write(pos);
      pos+=1; 
      delay(20);
    }   
  }
  else if(y==0)
  {
    i=0;
    Serial.println("\nRainfall \t");
    Serial.print("\nHUMIDITY VALUE: ");
    Serial.println(humidityoutput);
    digitalWrite(pumpled,0);
    digitalWrite(pump,0);
    delay(1000);
    while(pos!=0)
    {
      servo.write(pos);
      pos-=1; 
      delay(20);
    }   
  }
   else if (lightoutput<300)
  {
    Serial.println("\nlight<300");
    Serial.print("\nHUMIDITY VALUE: ");
    Serial.println(humidityoutput);
    delay(1000);
    if(i<=1)
    {
     digitalWrite(led2,1);
     delay(50);
      digitalWrite(led2,0);
      delay(50);
       digitalWrite(led2,1);
       delay(50);
        digitalWrite(led2,0);
        delay(50);
        digitalWrite(led2,1);
     delay(50);
      digitalWrite(led2,0);
      delay(50);
       digitalWrite(led2,1);
       delay(50);
        digitalWrite(led2,0);
        delay(50);
       digitalWrite(led2,1);
       delay(50);
        digitalWrite(led2,0);
        delay(50);
        digitalWrite(led2,1);
     delay(50);
      digitalWrite(led2,0);
      delay(50);
       digitalWrite(led2,1);
       delay(50);
        digitalWrite(led2,0);
        delay(50);
       digitalWrite(led2,1);
       delay(50);
        digitalWrite(led2,0);
        delay(50);
        digitalWrite(led2,1);
     delay(50);
      digitalWrite(led2,0);
      delay(50);
       digitalWrite(led2,1);
       delay(50);
        digitalWrite(led2,0);
    }
    i++;
       while(pos!=130)
    {
     
      servo.write(pos);
      pos+=1; 
      delay(20);
    }   
  } 
    else if (x==0)
  {
    i=0;
    Serial.println("\nSoil Wet ");
    Serial.print("\nHUMIDITY VALUE: ");
    Serial.println(humidityoutput);
    delay(1000);
    digitalWrite(pumpled,0);
    digitalWrite(pump,0);
    while(pos!=0)
    {
      servo.write(pos);
      pos-=1; 
      delay(20);
    }   
    
  }
  else 
  {
    i=0;
    Serial.println("\nneither Soil Wet nor rain nor light<300 \t");
    Serial.print("\nHUMIDITY VALUE: ");
    Serial.println(humidityoutput);
    digitalWrite(pumpled,1);
    digitalWrite(pump,1);
    delay(1000);
    while(pos!=0)
    {
      servo.write(pos);
      pos-=1; 
      delay(20);
    }   
  }
 
  
}

