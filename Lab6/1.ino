#define pinLed 11 //Define o pino do LED
int time = 1024/256; //Calcula o tempo de delay
int bit = 0; //Variável dos bits (0 a 255)

void setup()
{
  pinMode(pinLed, OUTPUT); //Define o pino do LED como OUTPUT
  Serial.begin(9600); //Taxa de comunicação (bits/s)
}

void loop()
{ 
  Serial.println(bit); //Escreve os bits no monitor serial
  analogWrite(pinLed, bit); //Aplica o valor do bit no LED
  bit +=1; //Incrementa o bit
  delay(time); //Delay em relação à variável tempo
  
  //Se o bit chegar a 256, o define de volta pra 0
  if(bit==256){
     bit = 0;
  }
}