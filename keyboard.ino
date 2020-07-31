int read = 1;
char chars[6][5] = {
                {'a', 'b', 'c', 'd', 'e'},
                {'f', 'g', 'h', 'i', 'j'},
                {'k', 'l', 'm', 'n', 'o'},
                {'p', 'q', 'r', 's', 't'},
                {'u', 'v', 'w', 'x', 'y'},
                {'z', 'z', 'z', 'z', 'z'}
             };


void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i <= 10; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i <= 5; i++){
    for(int j = 6; j <= 10; j++){
      digitalWrite(i, LOW);
      digitalWrite(j, HIGH);

      read = digitalRead(j);
      if(read == LOW){
        Serial.println(chars[i][j]);
        delay(1000);
      }
      
    }
  }

  

  
}
