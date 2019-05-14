

void setup() {

  Serial.begin(9600);
  }

void loop() {
  
char leitura;
leitura = Serial.read();
                              
    if (leitura == '1') // USE MODO CENTRAL (ATU-C)
  {
    Serial.println("Digitou 1"); 
  }
   else
   if (leitura == '2') // DESBILITA TODOS RELES (EXCETO RELE K)
  {
    Serial.println("Digitou 2"); 
  }
   else
   if (leitura == '3') // DESBILITA TODOS RELES
  {
    Serial.println("Digitou 3"); 
  } 

}
