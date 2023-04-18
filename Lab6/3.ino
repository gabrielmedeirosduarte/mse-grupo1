#define pinLed 11 //Define pino do LED
#define pinPot A5 //Define pino do potenciômetro
int bit = 0; //Variável pros bits do led
int pot = 0; //Variável pros bits do potenciômetro

void setup()
{
  pinMode(pinLed, OUTPUT); //Define pino do LED como OUTPUT 
  Serial.begin(9600); //Taxa de comunicação em bits/s
}

void loop()
{
  pot = analogRead(pinPot); //Lê o valor do potenciômetro
  bit = map(pot, 0, 1023, 0, 255); //Converte o valor do potenciômetro numa faixa de 0 a 255
  Serial.println(bit); //Escreve os bits do LED
  analogWrite(pinLed, bit); //Aplica os bits do PWM no LED
  delay(100); //Delay
}