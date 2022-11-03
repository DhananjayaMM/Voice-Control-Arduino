String voice;
#define led 13

void setup() {
  
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {                    
  while (Serial.available()){  
  delay(10);
  char c = Serial.read(); 
  if (c == '#') {break;}
  voice += c;
  } 
  if (voice.length() > 0) {
    Serial.println(voice);

       if(voice == "light on") {digitalWrite(led,HIGH);
       '\n';}
  else if(voice == "light off"){digitalWrite(led,LOW);
  '\n';}
         if(voice == "light on") {digitalWrite(led,HIGH);
       '\n';}
  else if(voice == "light off"){digitalWrite(led,LOW);
  '\n';}
voice=""; 
}
}
