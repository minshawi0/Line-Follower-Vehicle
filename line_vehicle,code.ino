// name : omar ashraf mohamed salama 
// name : Mohmmed ahmed mohmmed abdulhakim 

#define IR_SENSOR_RIGHT_l A1
#define IR_SENSOR_RIGHT_c A0
#define IR_SENSOR_RIGHT_r A2           //DEFINE THE THE RIGHT AND THE LEFT SENSOR 
#define IR_SENSOR_LEFT_l A5
#define IR_SENSOR_LEFT_c A4
#define IR_SENSOR_LEFT_r A3


#define m2Speed 6
#define m2p1 9                         //Right motor == m2
#define m2p2 8

#define m1Speed 3
#define m1p1 10                        //Left motor == m1
#define m1p2 11

// cases of motion :

void Forward() {
  digitalWrite (m1p1, 0);
  digitalWrite (m1p2, 1);
  digitalWrite (m2p1, 1);       //case forward//
  digitalWrite (m2p2, 0);
  analogWrite(m1Speed, 100);
  analogWrite(m2Speed, 100);
}

void Backward() {
  digitalWrite(m1p1,1);
  digitalWrite(m1p2,0);
  digitalWrite(m2p1,0);         //case backward//
  digitalWrite(m2p2,1);
  analogWrite(m1Speed,100);
  analogWrite(m2Speed,100);
}
void left() {
  digitalWrite(m1p1,0);
  digitalWrite(m1p2,1);
  digitalWrite(m2p1,1);
  digitalWrite(m2p2,0);        //case left//
  analogWrite(m1Speed,30);
  analogWrite(m2Speed,100);
}
void right() {
  digitalWrite(m1p1,0);
  digitalWrite(m1p2,1);
  digitalWrite(m2p1,1);
  digitalWrite(m2p2,0);        //case right//
  analogWrite(m1Speed,100);
  analogWrite(m2Speed,30);
}
void stop() {
 digitalWrite(m1p1,0);
 digitalWrite(m1p2,0);
 digitalWrite(m2p1,0);         //case stop//
 digitalWrite(m2p2,0);
 analogWrite(m1Speed,0);
 analogWrite(m2Speed,0);
}
void setup() { 
  pinMode(IR_SENSOR_RIGHT_l, INPUT);
  pinMode(IR_SENSOR_RIGHT_c, INPUT);
  pinMode(IR_SENSOR_RIGHT_r, INPUT);
  pinMode(IR_SENSOR_LEFT_l, INPUT);
  pinMode(IR_SENSOR_LEFT_c, INPUT);
  pinMode(IR_SENSOR_LEFT_r, INPUT);                // THE SETUP OF THE SENSORS AND MOTORS 
  pinMode(m1p1, OUTPUT);
  pinMode(m1p2, OUTPUT);
  pinMode(m2p1, OUTPUT);
  pinMode(m2p2, OUTPUT);
  pinMode(m1Speed, OUTPUT);
  pinMode(m2Speed, OUTPUT);
}
void loop() {
  byte sens1 = digitalRead(IR_SENSOR_RIGHT_l);
  byte sens2 = digitalRead(IR_SENSOR_RIGHT_r);
  byte sens3 = digitalRead(IR_SENSOR_RIGHT_c);     //storing the signals of the IR
  byte sens4 = digitalRead(IR_SENSOR_LEFT_l);
  byte sens5 = digitalRead(IR_SENSOR_LEFT_r);
  byte sens6 = digitalRead(IR_SENSOR_LEFT_c);

  // THE CONDITIONS OF THE SENSOR TO MOVE ON THE TRACK
 if ( sens1 == LOW && sens2 ==HIGH && sens3 ==HIGH && sens4 == HIGH && sens5 == LOW && sens6 == HIGH )
  {
    Forward();        // THE CONDITION TO MOVE FORWARD IS THAT THE TWO SENSOR ON THE MIDDLE READ LOW 
    delay(0);
  }
  else if  (sens1 ==HIGH && sens2 ==HIGH && sens3 ==HIGH && sens4 == HIGH && sens5 ==LOW && sens6 == LOW)
  {

    left();           // THE CONDITION TO MOVE LEFT IS THAT THE FIRST TWO SENSOR ON THE RIGHT SENSOR READ LOW 
    delay(0);

  }
  else if  (sens1 ==LOW && sens2 ==HIGH && sens3 ==HIGH && sens4 == HIGH && sens5 ==LOW && sens6 == LOW)
  {

    left();           // THE CONDITION TO MOVE LEFT IS THAT THE FIRST TWO SENSOR ON THE RIGHT SENSOR READ LOW AND AND THE FIRST SENSOR ON THE LEFT READ LOW 
    delay(0);                               

  }
  else if (sens1 ==HIGH && sens2 ==HIGH && sens3 ==HIGH && sens4 == LOW && sens5 ==HIGH && sens6 == LOW)
  {
    left();          // THE CONDITION TO MOVE LEFT IS THAT THE FIRST TWO SENSOR ON THE RIGHT SENSOR READ LOW AND AND THE FIRST SENSOR ON THE LEFT READ LOW 
    delay(0);
  }
  else if (sens1 ==LOW && sens2 ==HIGH && sens3 ==HIGH && sens4 == HIGH && sens5 ==HIGH && sens6 == HIGH)
  {
    left();          // THE CONDITION TO MOVE LEFT IS THAT THE FIRST TWO SENSOR ON THE RIGHT SENSOR READ LOW AND AND THE FIRST SENSOR ON THE LEFT READ LOW 
    delay(0);
  }
  else if (sens1 ==HIGH && sens2 ==HIGH && sens3 ==HIGH && sens4 == HIGH && sens5 ==HIGH && sens6 == LOW)
  {
    left();          // THE CONDITION TO MOVE LEFT IS THAT THE FIRST TWO SENSOR ON THE RIGHT SENSOR READ LOW AND AND THE FIRST SENSOR ON THE LEFT READ LOW 
    delay(0);
  }
  else if  (sens1 ==LOW && sens2 ==HIGH && sens3 ==HIGH && sens4 == LOW && sens5 ==LOW && sens6 == LOW)
  {

    left();           // THE CONDITION TO MOVE LEFT IS THAT THE FIRST TWO SENSOR ON THE RIGHT SENSOR READ LOW AND AND THE FIRST SENSOR ON THE LEFT READ LOW 
    delay(0);                               

  }
   else if  (sens1 ==LOW && sens2 ==HIGH && sens3 ==LOW && sens4 == LOW && sens5 ==LOW && sens6 == LOW)
  {

    left();           // THE CONDITION TO MOVE LEFT IS THAT THE FIRST TWO SENSOR ON THE RIGHT SENSOR READ LOW AND AND THE FIRST SENSOR ON THE LEFT READ LOW 
    delay(0);                               

  }
else if ( sens1==HIGH && sens2 ==HIGH && sens3 ==HIGH && sens4 ==LOW && sens5 ==HIGH && sens6  == HIGH ){

    right();          // THE CONDITION TO MOVE RIGHT IS THAT THE FIRST TWO SENSOR ON THE LEFT SENSOR READ LOW  
    delay(0);               
}
else if ( sens1==LOW && sens2 ==HIGH && sens3 ==LOW && sens4 ==HIGH && sens5 ==HIGH && sens6  == HIGH ){

    right();          // THE CONDITION TO MOVE RIGHT IS THAT THE FIRST TWO SENSOR ON THE LEFT SENSOR READ LOW  
    delay(0);               
}
else if  (sens1 ==HIGH && sens2 ==LOW && sens3 ==LOW && sens4 == HIGH && sens5 ==HIGH && sens6 == HIGH)
  {

    right();           // THE CONDITION TO MOVE RIGHT IS THAT THE FIRST TWO SENSOR ON THE RIGHT SENSOR READ LOW AND AND THE FIRST SENSOR ON THE LEFT READ LOW 
    delay(0);                               

  
  }
else if  (sens1 ==HIGH && sens2 ==HIGH && sens3 ==HIGH && sens4 == HIGH && sens5 ==LOW && sens6 == HIGH)
  {

    right();           // THE CONDITION TO MOVE RIGHT IS THAT THE FIRST TWO SENSOR ON THE RIGHT SENSOR READ LOW AND AND THE FIRST SENSOR ON THE LEFT READ LOW 
    delay(0);                               
  }

  else if ( sens1==LOW && sens2 ==HIGH && sens3 ==LOW && sens4 ==HIGH && sens5 ==LOW && sens6  == HIGH ){

    right();         // THE CONDITION TO MOVE RIGHT THE FIRST TWO SENSOR ON THE LEFT SENSOR READ LOW AND AND THE FIRST SENSOR ON THE RIGHT READ LOW  
    delay(0);
}
  else if ( sens1==HIGH && sens2 ==HIGH && sens3 ==LOW && sens4 ==HIGH && sens5 ==HIGH && sens6  == HIGH )
  {
    right();         // THE CONDITION TO MOVE RIGHT THE FIRST TWO SENSOR ON THE LEFT SENSOR READ LOW AND AND THE FIRST SENSOR ON THE RIGHT READ LOW  
    delay(0);
    }
    else if(sens1==LOW && sens2==LOW && sens3==LOW && sens4==HIGH && sens5==LOW && sens6==HIGH)
    {
      right();
      delay(0);
    }
    else if(sens1==LOW && sens2==LOW && sens3==LOW && sens4==HIGH && sens5==LOW && sens6==LOW)
    {
      right();
      delay(0);
    }
    else if(sens1==HIGH && sens2==LOW && sens3==HIGH && sens4==HIGH && sens5==HIGH && sens6==HIGH)
    {
      left();
      delay(0);
    }
    else if(sens1==HIGH && sens2==LOW && sens3==HIGH && sens4==HIGH && sens5==HIGH && sens6==HIGH)
    {
      left();
      delay(0);
    }
    else if(sens1==LOW && sens2==LOW && sens3==LOW && sens4==HIGH && sens5==HIGH && sens6==HIGH)
    {
      right();
      delay(0);
    }
    else if(sens1==HIGH && sens2==HIGH && sens3==HIGH && sens4==LOW && sens5==LOW && sens6==LOW)
    {
      left();
      delay(0);
    }
    else if(sens1==LOW && sens2==HIGH && sens3==LOW && sens4==HIGH && sens5==HIGH && sens6==LOW)
    {
      right();
      delay(0);
    }
    else if (sens1==LOW && sens2==HIGH && sens3==LOW && sens4==HIGH && sens5==HIGH  && sens6==HIGH)
    {
      left();
      delay(0);
    }
    else if (sens1==HIGH && sens2==HIGH && sens3==HIGH && sens4==HIGH && sens5==LOW && sens6==LOW)
    {
      right();
      delay(0);
    }
    else if (sens1==HIGH && sens2==LOW && sens3==HIGH && sens4==HIGH && sens5==HIGH && sens6==LOW)
    {
      right();
      delay(0);
    }
     else if (sens1==HIGH && sens2==HIGH && sens3==LOW && sens4==LOW && sens5==HIGH && sens6==LOW)
    {
      right();
      delay(0);
    }
    else if (sens1==HIGH && sens2==LOW && sens3==HIGH && sens4==LOW && sens5==HIGH && sens6==HIGH)
    {
      right();
      delay(0);
    }
    else if (sens1==HIGH && sens2==LOW && sens3==HIGH && sens4==HIGH && sens5==LOW && sens6==LOW)
    {
      left();
      delay(0);
    }
     else if (sens1==LOW && sens2==HIGH && sens3==LOW && sens4==LOW && sens5==HIGH && sens6==HIGH)
    {
      right();
      delay(0);
    }
    
    
    
      
   else {
    stop();         // THE CONITION TO STOP THAT ALL SENSOR READ HIGH
}
}
