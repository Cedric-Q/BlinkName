int led = D7; // Instead of writing D7 over and over again, we'll write led2
// This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.

// Having declared these variables, let's move on to the setup function.
// The setup function is a standard part of any microcontroller program.
// It runs only once when the device boots up or is reset.

void setup() {

  // We are going to tell our device that D0 and D7 (which we named led1 and led2 respectively) are going to be output
  // (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)

  // It's important you do this here, inside the setup() function rather than outside it or in the loop function.

//   pinMode(led1, OUTPUT);
  pinMode(led, OUTPUT);

}


void dash() {
  digitalWrite(led, HIGH);
  delay(4000);
  digitalWrite(led, LOW);
  delay(500);
}

void dot() {
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(500);
}

// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible, after the setup function is called.
// Note: Code that blocks for too long (like more than 5 seconds), can make weird things happen (like dropping the network connection).  The built-in delay function shown below safely interleaves required background activity, so arbitrarily long delays can safely be done if you need them.

void loop() {
  // To blink the LED, first we'll turn it on...
  // digitalWrite(led1, HIGH);

  // C
  dash();
  dot();
  dash();
  dot();
  delay(1000);
  
  // é
  dot();
  dot();
  dash();
  dot();
  dot();
  delay(1000);

  // D
  dash();
  dot();
  dot();
  delay(1000);
  
  // R 
  dot();
  dash();
  dot();
  delay(1000);
  
  // I
  dot();
  dot();
  delay(1000);
  
  // C
  dash();
  dot();
  dash();
  dot();
  delay(1000);
}