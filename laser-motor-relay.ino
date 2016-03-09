int motor = 8;
int sensor = A0;
int sensor2 = A1;
int Buzzer = 7;

String motorState = "OFF";

void setup() {

     Serial.begin(9600);

  pinMode(motor, OUTPUT);
  pinMode(sensor, INPUT);
  pinMode(sensor, INPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop() {
 Serial.println(analogRead(sensor));
 Serial.println(analogRead(sensor2));
 

  if(analogRead(sensor) > 950) {
   
      digitalWrite(motor, HIGH);
      motorState = "ON"; 
      
      tone(Buzzer, 400); // play 400 Hz tone for 500 ms
delay(500);
tone(Buzzer, 800); // play 800Hz tone for 500ms
delay(500);
tone(Buzzer, 400); // play 400 Hz tone for 500 ms
delay(500);
tone(Buzzer, 800); // play 800Hz tone for 500ms
delay(500);
tone(Buzzer, 400); // play 400 Hz tone for 500 ms
delay(500);
tone(Buzzer, 800); // play 800Hz tone for 500ms
delay(500);
noTone(Buzzer);

delay(300);
  }

  else if (analogRead(sensor2) > 950) {  
    
      digitalWrite(motor, LOW);
      motorState = "OFF";  
  }
  
  
}
