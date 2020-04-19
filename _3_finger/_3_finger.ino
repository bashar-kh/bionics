#include <Servo.h>

 // pushbutton pin
 const int buttonPin1 = 2;
 const int buttonPin2 = 3;
 const int buttonPin3 = 4;
 // servo pin
 const int servoPin1 = 8;
 const int servoPin2 = 9;
 const int servoPin3 = 10;
 Servo servo1,servo2,servo3;
 boolean state1 = true;
 boolean state2 = true;
 boolean state3 = true;
//create a variable to store a counter and set it to 
void setup()
{
  servo1.attach (servoPin1);
  servo2.attach (servoPin2);
  servo3.attach (servoPin3);
  
  // Set up the pushbutton pins to be an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}
void loop()
{
 // local variable to hold the pushbutton states
  int buttonState1;    
  int buttonState2;
  int buttonState3;  
  //read the digital state of buttonPin with digitalRead() function and store the           //value in buttonState variable
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  //if the button is pressed increment counter and wait a tiny bit to give us some          //time to release the button
  if (buttonState1 == LOW) // light the LED
  {
    if (state1 == true)
    {
      servo1.write (0);
      state1=false;
    }
    else
    {
      servo1.write (180);
      state1=true;
    }
    delay(300);
  }
  if (buttonState2 == LOW) // light the LED
  {
    if (state2 == true)
    {
      servo2.write (0);
      state2=false;
    }
    else
    {
      servo2.write (180);
      state2=true;
    }
    delay(300);
  }
  if (buttonState3 == LOW) // light the LED
  {
    if (state3 == true)
    {
      servo3.write (0);
      state3=false;
    }
    else
    {
      servo3.write (180);
      state3=true;
    }
    delay(300);
  }
}
