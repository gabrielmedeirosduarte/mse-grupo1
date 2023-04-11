#define potPin A5 //Define o pino do potenciômetro
int pot = 0; //Define a variável dos valores do potenciômetro

void setup()
{
  pinMode(potPin, INPUT); //Define o pino como entrada
  Serial.begin(9600); //Define a velocidade em bps 
}

void loop()
{
  pot = analogRead(potPin); //Lê o pino analógico
  Serial.println(pot); //Escreve no monitor serial
  delay(100); //Delay de 100ms (10Hz)
}