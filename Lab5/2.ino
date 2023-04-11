#define ldrPin A5 //Define o pino do ldr
#define ledPin 13 //Define o pino do led
int ldr = 0; //Define a variável dos valores do ldr

void setup()
{
  pinMode(ledPin, OUTPUT); //Define o led como pino de saída
  Serial.begin(9600); //Define a velocidade em bps 
}

void loop()
{
  ldr = analogRead(ldrPin); //Lê o pino analógico
  Serial.println(ldr); //Escreve no monitor serial
  delay(100); //Delay de 100ms (10Hz)
  
  
  //Se a intensidade de luz for menor que 900, acende o LED
  if(ldr<900){
    digitalWrite(ledPin, HIGH);
  }
  //Senão, apaga o LED
  else{
    digitalWrite(ledPin, LOW);
  }
}