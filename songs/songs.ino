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
  tone(buzzer, 523.25, 500);
  delay(500*1.3);
  tone(buzzer, 587.33, 500);
  delay(500*1.3);
  tone(buzzer, 392.00, 250);
  delay(250*1.3);
  tone(buzzer, 587.33, 500);
  delay(500*1.3);
  tone(buzzer, 659.25, 500);
  delay(500*1.3);
  tone(buzzer, 783.99, 125);
  delay(125*1.3);
  tone(buzzer, 698.46, 125);
  delay(125*1.3);
  tone(buzzer, 659.25, 125);
  delay(125*1.3);
  tone(buzzer, 523.25, 500);
  delay(500*1.3);
  tone(buzzer, 587.33, 500);
  delay(500*1.3);
  tone(buzzer, 392.00, 1500);
  delay(1500*1.3);
}