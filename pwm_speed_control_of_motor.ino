   #include<SoftwareSerial.h>
  
  /* Create object named bt of the class SoftwareSerial */ 
  SoftwareSerial BT(12 , 14); /* (Rx,Tx) */ 
  String readdata;
  // Define the motor pin

  int m1a=2;
  int m1b=4;
  
  int m2a=6;
  int m2b=8;
  
  int buzzer = 22;
  
  
  
  void setup() {
    // put your setup code here, to run once:
    BT.begin(9600);
    Serial.begin(9600);
    Serial.println("Bluetooth Started! Ready to pair...");
  pinMode(m1a, OUTPUT);
  pinMode(m1b, OUTPUT);
  pinMode(m2a, OUTPUT);
  pinMode(m2b, OUTPUT);
  
  pinMode(buzzer , OUTPUT);
  }
  
  
 
  
  
  void loop() {
  
    // Increase the duty cycle of the PWM signal
  for (int i = 0; i < 255; i++) {
    analogWrite(m1a, i);
    analogWrite(m2a, 0);
    delay(10);
  }

  // Decrease the duty cycle of the PWM signal
  for (int i = 255; i >= 0; i--) {
    analogWrite(m2a, 0);
    analogWrite(m1a, i);
    delay(10);
  }
  
  }
   
 
