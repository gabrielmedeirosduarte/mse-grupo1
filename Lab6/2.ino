#define pinLed 11 //Define o pino do LED
int time = 1024/256; //Calcula o tempo de delay
int bit = 0; //Variável dos bits (0 a 255)
int estado = 1; //Estado de Incrementar e Decrementar

void setup()
{
  pinMode(pinLed, OUTPUT); //Define o pino do LED como OUTPUT
  Serial.begin(9600); //Taxa de comunicação (bits/s)
}

void loop()
{
  Serial.println(bit); 
  
  //Incrementa os bits
  if(estado == 1){
    analogWrite(pinLed, bit); 
    bit +=1; 
    delay(time);
    
    //Passa pra condição de Decrementar os bits
    if(bit==256){
      estado = 2;
    }
  }
  
  //Decrementa os bits
  if(estado == 2){
    analogWrite(pinLed, bit); 
    bit -=1; 
    delay(time);
       
    //Passa pra condição de decrementar os bits
    if(bit==0){
      estado = 1;
    }  
  }

}