// C++ code
//

int buzzer = 9; 

void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop(){
}

void songOne(){
  tone(buzzer, 277.18, 500);
  delay(500*1.3);
  tone(buzzer, 329.63, 500);
  delay(500*1.3);
  tone(buzzer, 277.18, 250);
  delay(250*1.3);
  tone(buzzer, 277.18, 500);
  delay(500*1.3);
  tone(buzzer, 329.63, 500);
  delay(500*1.3);
  tone(buzzer, 277.18, 250);
  delay(250*1.3);
  tone(buzzer, 277.18, 500);
  delay(500*1.3);
  tone(buzzer, 329.63, 500);
  delay(500*1.3);
  tone(buzzer, 277.18, 250);
  delay(250*1.3);
  tone(buzzer, 311.13, 500);
  delay(500*1.3);
  tone(buzzer, 277.18, 500);
  delay(500*1.3);
  tone(buzzer, 246.94, 500);
  delay(500*1.3);
}

void songTwo(){
  
}