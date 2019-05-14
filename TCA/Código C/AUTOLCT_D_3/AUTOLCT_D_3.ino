

int porta4 = 4;
int porta7 = 7;

String readString;

void setup() {

  Serial.begin(9600);

pinMode (porta4, OUTPUT);
pinMode (porta7, OUTPUT);
  //pinMode (rele_v, OUTPUT); // k2
  //pinMode (rele_x, OUTPUT); // k3
  }

void loop() {
  
  while (Serial.available()) {
    delay(3);  
    char c = Serial.read();
    readString += c; 
  }
  if (readString.length() >0) {
    
      if (readString == "1") {
             
      Serial.print("habilitado");
      digitalWrite(porta4,HIGH);
      digitalWrite(porta7,HIGH);
      //delay(700);
      //digitalWrite(porta4,LOW);
      //digitalWrite(porta7,LOW);
      
  }
    
      if (readString == "2") {
             
      Serial.print("desabilitado");
      digitalWrite(porta4,LOW);
      digitalWrite(porta7,LOW);
      //delay(700);
      //digitalWrite(porta4,LOW);
      //digitalWrite(porta7,LOW);
      
  }



     readString="";
  } 
}
