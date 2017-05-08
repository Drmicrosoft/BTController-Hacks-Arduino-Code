/*
  Mega multple serial test
 
 Receives from the main serial port, sends to the others. 
 Receives from serial port 1, sends to the main serial (Serial 0).
 
 This example works only on the Arduino Mega
 
 The circuit: 
 * Any serial device attached to Serial port 1
 * Serial monitor open on Serial port 0:
 
 created 30 Dec. 2008
 modified 20 May 2012
 by Tom Igoe & Jed Roach
 
 This example code is in the public domain.
 
 */


void setup() {
  // initialize both serial ports:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
      pinMode(4,OUTPUT);
        pinMode(5,OUTPUT);
          pinMode(6,OUTPUT);
            pinMode(7,OUTPUT);
              pinMode(8,OUTPUT);
                            pinMode(9,OUTPUT);
              
}
char omar [6];
char p1 [8][6]={{'6','3','D','6','3','U'},{'6','0','D','6','0','U'},{'1','E','D','1','E','U'},{'6','4','D','6','4','U'},{'1','3','D','1','3','U'},{'1','5','D','1','5','U'},{'1','4','D','1','5','U'},{'1','6','D','1','6','U'}};
char omar1 [8]={0,0,0,0,0,0,0,0};
int i=0;

int c = 0 ;
void loop() {
  // read from port 1, send to port 0:
  
  // read from port 0, send to port 1:
  if (Serial.available()) {
    int inByte = Serial.read();
    Serial.write(inByte); 
        Serial.write(char(inByte)); 
                Serial.print(char(inByte)); 
                Serial.print(inByte); 
                
  omar [i] = char(inByte);
 i++; 
       Serial.write("\n");        
  }


if(i==6)
{
     Serial.write("Omar Was Here\n");          
     int j = 0 ;
for(j=0;j<8;j++)

  {
         Serial.write("start"); 
    for(i=0;i<6;i++)
  {
         
                 Serial.print(i); 
  if(omar[i] == p1[j][i])
  {
    c=1;
    
    
  }
  else 
  {
    c=0;
    break;
  }
  
  
  }
  if(i==6)
    break;
  
  
  
  
  }
  
  if(c==1)
  {
        i=0;
    if(j==0)
    {
      if(omar1[0]==0)
{         Serial.write("LED 0  is On\n");          
    digitalWrite(2,HIGH);
    omar1[0]=1;
}
else 
{
          Serial.write("LED 0  is OFF\n");          
    digitalWrite(2,LOW);
      omar1[0]=0;

  
}
    
    
    }
     else   if(j==1)
    {

      if(omar1[1]==0)
{         Serial.write("LED 1  is On\n");          
    digitalWrite(3,HIGH);
    omar1[1]=1;
}
else 
{
          Serial.write("LED 1  is OFF\n");          
    digitalWrite(3,LOW);
      omar1[1]=0;

  
}
    }
         else   if(j==2)
    {

          if(omar1[2]==0)
{         Serial.write("LED 2  is On\n");          
    digitalWrite(4,HIGH);
    omar1[2]=1;
}
else 
{
          Serial.write("LED 2  is OFF\n");          
    digitalWrite(4,LOW);
      omar1[2]=0;

  
}

    }
         else   if(j==3)
    {

        if(omar1[3]==0)
{         Serial.write("LED 3  is On\n");          
    digitalWrite(5,HIGH);
    omar1[3]=1;
}
else 
{
          Serial.write("LED 3  is OFF\n");          
    digitalWrite(5,LOW);
      omar1[3]=0;

  
}

    }
         else   if(j==4)
    {

          if(omar1[4]==0)
{         Serial.write("LED 4  is On\n");          
    digitalWrite(6,HIGH);
    omar1[4]=1;
}
else 
{
          Serial.write("LED 4  is OFF\n");          
    digitalWrite(6,LOW);
      omar1[4]=0;

  
}

    }
         else   if(j==5)
    {

            if(omar1[5]==0)
{         Serial.write("LED 5  is On\n");          
    digitalWrite(7,HIGH);
    omar1[5]=1;
}
else 
{
          Serial.write("LED 5  is OFF\n");          
    digitalWrite(7,LOW);
      omar1[5]=0;

  
}

    }
         else   if(j==6)
    {

             if(omar1[6]==0)
{         Serial.write("LED 6  is On\n");          
    digitalWrite(8,HIGH);
    omar1[6]=1;
}
else 
{
          Serial.write("LED 6  is OFF\n");          
    digitalWrite(8,LOW);
      omar1[6]=0;

  
}

    }
         else   if(j==7)
    {

              if(omar1[7]==0)
{         Serial.write("LED 7 is On\n");          
    digitalWrite(9,HIGH);
    omar1[7]=1;
}
else 
{
          Serial.write("LED 7 is OFF\n");          
    digitalWrite(9,LOW);
      omar1[7]=0;

  
}

    }
  }
  else 
  {
    i=0;
  }
  
}
}
