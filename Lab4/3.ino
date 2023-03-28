#define ledPin 2 //Pino do LED
#define butPin 3 //Pino do botão

void setup()
{
  pinMode(ledPin, OUTPUT); //Define o pino do LED como OUT
  pinMode(butPin, INPUT); //Define o pino do botão como IN
  Serial.begin(9600); //Taxa de transmissão em bits/s
}

void loop()
{
  //Define o estado do LED em função do estado do botão
  digitalWrite(ledPin, digitalRead(butPin));
}