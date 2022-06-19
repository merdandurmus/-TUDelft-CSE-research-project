/*
  Calibration of LED for course VLCS
*/

// Define 3 LEDs
int led1 = 38; //Red
int led2 = 42; //Green
int led3 = 34; //Blue
int i = 0;
int brightness = 0; //Lower values represent brighter

int fadeAmount = 5;
int seed;
int Tx = 0; // 0 represent only red LED is activated; 1 represent only green LED is activated; 2 represent only green LED is activated; 3 represent all LEDs are activated




/*Transmitter color set up*/
void setColor(int red, int green, int blue)
{
  analogWrite(led1, red);
  analogWrite(led2, green);
  analogWrite(led3, blue);
  //delayMicroseconds(250);
  //delay(5);
}

void setup() {

  Serial.begin(115200);
  while (Serial.available() > 0)
    Serial.read();

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  //analogWriteResolution(12);

}

void loop() {

  // Common cathode
  //setColor(brightness, 0, 0); while(1){}//R
  //setColor(0, brightness, 0); while(1){}//G
  //setColor(0, 0, brightness); while(1){}//B
  //setColor(4085, 1500, 0); while(1){} //it's used for high resolution
  //while(1){}
  
  //  brightness = brightness - fadeAmount;
  //  if (brightness==0)
  //  {
  //  brightness=255;
  //  }
  //  delay(1000);
  
  

  // Common Anode
  switch (Tx)
  {
    case 0: setColor(brightness, 255, 255); break;
    case 1: setColor(255, brightness, 255); break;
    case 2: setColor(255, 255, brightness); break;
    case 3: setColor(brightness, brightness, brightness); break;
  }
  //setColor(brightness, 255, 255); while(1){}//R
  //setColor(255, brightness, 255); while(1){}//G
  //setColor(255, 255, brightness); while(1){}//B
  //setColor(0, 0, 0); while(1){}
  //setColor(brightness, brightness, brightness);while(1){}

  brightness = brightness + fadeAmount;
  if (brightness==255)
  {
  brightness=0;
  }
  delay(1000);
  

  /*
  switch (Tx)
  {
    case 0: setColor(brightness, 0, 0); break;
    case 1: setColor(0, brightness, 0); break;
    case 2: setColor(0, 0, brightness); break;
    case 3: setColor(brightness, brightness, brightness); break;
  }
  */
  //delayMicroseconds(250);
  //delay(5000);
  /*
  Tx++;
  if (Tx > 3) {
    Tx = 0;
  }
  */
  




}
