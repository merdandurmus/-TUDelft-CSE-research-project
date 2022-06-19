/*
  Calibration of LED for course VLCS
  High frequency PWM version
*/

#include "pwm_lib.h"
#include "tc_lib.h"

using namespace arduino_due::pwm_lib;

#define PWM_PERIOD_PIN_38 100 // hundredth of usecs (1e-8 secs)
#define PWM_DUTY_PIN_38 0 //configure the brightness of red LED: 0 represents the lowest brightness; 100 represents the highest brightness
#define PWM_PERIOD_PIN_42 100 // 100 usecs in hundredth of usecs (1e-8 secs)
#define PWM_DUTY_PIN_42 0 //configure the brightness of green LED: 0 represents the lowest brightness; 100 represents the highest brightness
#define PWM_PERIOD_PIN_34 100 // 100 usecs in hundredth of usecs (1e-8 secs)
#define PWM_DUTY_PIN_34 0 //configure the brightness of blue LED: 0 represents the lowest brightness; 100 represents the highest brightness

#define CAPTURE_TIME_WINDOW 15000000 // usecs
#define DUTY_KEEPING_TIME 1000 // msecs 

// Define 3 LEDs
int led1 = 38;
int led2 = 42;
int led3 = 34;
int brightness = 255;
int fadeAmount = 5;


/*Transmitter color set up*/
void setColor(int red, int green, int blue)
{
  analogWrite(led1, red);
  analogWrite(led2, green);
  analogWrite(led3, blue);
  //delay(5);
}

// defining pwm object using pin 38, pin PC6 mapped to pin 38 on the DUE
// this object uses PWM channel 0
pwm<pwm_pin::PWML2_PC6> pwm_pin38;

// defining pwm objetc using pin 42, pin PA19 mapped to pin 42 on the DUE
// this object used PWM channel 1
pwm<pwm_pin::PWMH1_PA19> pwm_pin42;

// defining pwm objetc using pin 42, pin PC2 mapped to pin 42 on the DUE
// this object used PWM channel 1
pwm<pwm_pin::PWML0_PC2> pwm_pin34;

// To measure PWM signals generated by the previous pwm objects, we will use
// capture objects of tc_lib library as "oscilloscopes" probes. We will need
// a different capture object for measuring each signal: capture_tc0 and
// capture_tc1, respectively.
// IMPORTANT: Take into account that for TC0 (TC0 and channel 0) the TIOA0 is
// PB25, which is pin 2 for Arduino DUE, so capture_tc0's capture pin is pin
// 2. For capture_tc1 (TC0 and channel 1), TIOA1 is PA2 which is pin A7
// (ANALOG IN 7). For the correspondence between all TIOA inputs for the 
// different TC module channels, you should consult uC Atmel ATSAM3X8E 
// datasheet in section "36. Timer Counter (TC)"), and the Arduino pin mapping 
// for the DUE.
// All in all, to meausure pwm outputs in this example you should connect the 
// PWM output of pin 38 to capture_tc0 object pin 2, and pwm output pin 42 to 
// capture_tc1's pin A7.

capture_tc0_declaration(); // TC0 and channel 0
auto& capture_pin2=capture_tc0;

capture_tc1_declaration(); // TC0 and channel 1
auto& capture_pinA7=capture_tc1;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  // initialization of capture objects
  capture_pin2.config(CAPTURE_TIME_WINDOW);
  capture_pinA7.config(CAPTURE_TIME_WINDOW);

  // starting PWM signals
  pwm_pin38.start(PWM_PERIOD_PIN_38,PWM_DUTY_PIN_38);
  pwm_pin42.start(PWM_PERIOD_PIN_42,PWM_DUTY_PIN_42);
  pwm_pin34.start(PWM_PERIOD_PIN_34,PWM_DUTY_PIN_34);


  Serial.println("================================================");
  Serial.println("============= pwm_lib - basic_test =============");
  Serial.println("================================================");
  for(size_t i=0; i<=pwm_core::max_clocks;i++) 
  {
    Serial.print("maximum period - clock "); Serial.print(i); Serial.print(": ");
    Serial.print(pwm_core::max_period(i),12); Serial.println(" s."); 
  }
  Serial.println("================================================");

//  pinMode(led1, OUTPUT);
//  pinMode(led2, OUTPUT);
//  pinMode(led3, OUTPUT);
}

//pwm_obj.set_duty(pwm_duty); \

/*
uint32_t duty=pwm_obj.get_duty()+1; \
  if(duty>pwm_period) duty=pwm_duty; \
  pwm_obj.set_duty(duty); \
*/

// FIX: function template change_duty is defined in
// #define to avoid it to be considered a function
// prototype when integrating all .ino files in one
// whole .cpp file. Without this trick the compiler
// complains about the definition of the template
// function.
#define change_duty_definition \
template<typename pwm_type> void change_duty( \
  pwm_type& pwm_obj, \
  uint32_t pwm_duty, \
  uint32_t pwm_period \
) \
{ \
  pwm_obj.set_duty(pwm_duty); \
}
// FIX: here we instantiate the template definition
// of change_duty
change_duty_definition;

void loop() {
  // put your main code here,to run repeatedly:

  delay(DUTY_KEEPING_TIME);

  uint32_t status,duty,period;

  Serial.println("================================================");
  status=capture_pin2.get_duty_and_period(duty,period);
  Serial.print("[PIN 38 -> PIN 2] duty: "); 
  Serial.print(
    static_cast<double>(duty)/
    static_cast<double>(capture_pin2.ticks_per_usec()),
    3
  );
  Serial.print(" usecs. period: ");
  Serial.print(period/capture_pin2.ticks_per_usec());
  Serial.println(" usecs.");

  status=capture_pinA7.get_duty_and_period(duty,period);
  Serial.print("[PIN 42 -> PIN A7] duty: "); 
  Serial.print(
    static_cast<double>(duty)/
    static_cast<double>(capture_pinA7.ticks_per_usec()),
    3
  );
  Serial.print(" usecs. period: ");
  Serial.print(period/capture_pinA7.ticks_per_usec());
  Serial.println(" usecs.");
  Serial.println("================================================");

  // changing duty in pwm output pin 38 
  change_duty(pwm_pin38,PWM_DUTY_PIN_38,PWM_PERIOD_PIN_38);

  // changing duty in pwm output pin 42 
  change_duty(pwm_pin42,PWM_DUTY_PIN_42,PWM_PERIOD_PIN_42);

  // changing duty in pwm output pin 34 
  change_duty(pwm_pin34,PWM_DUTY_PIN_34,PWM_PERIOD_PIN_34);
  while(1){}

//  setColor(brightness, brightness, brightness); //while(1){}//G
//
//  brightness = brightness - fadeAmount;
//  if (brightness==0)
//  {
//  brightness=255;
//  }
}
