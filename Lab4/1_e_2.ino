#define ledPin 2 //Pino do LED
#define butPin 3 //Pino do botão

int state = 0; //Variável para o estado do botão

void setup()
{
  pinMode(ledPin, OUTPUT); //Define o pino do LED como OUT
  pinMode(butPin, INPUT); //Define o pino do botão como IN
  Serial.begin(9600); //Taxa de transmissão em bits/s
}

void loop()
{
  state = digitalRead(butPin); //Lê o estado do botão
  Serial.println(state); //Imprime o estado do botão
  
  //Verifica se o estado do botão é 1 ou 0
  //Se for 1 (não pressionado), acende o LED
  //Se for 0 (pressionado), desliga o LED
  if(state==1){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
}