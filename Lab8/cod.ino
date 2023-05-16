// Variáveis

#define but_pin 11
#define pot_pin A0

int potValue = 0;
int potTime = 0;

unsigned long time_now = 0;
unsigned long alarm_led = 0;
int delay_led = 0;

int cont = 1;

int butState = LOW;
int Previous_butState = 0;
int sentido = 1;

void setup()
{
  // Modo dos componentes
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(but_pin, INPUT);
}

void loop()
{
  // Tempo atual
  time_now = millis();
  
  // Potenciômetro
  potValue = analogRead(pot_pin);
  potTime = map(potValue, 0, 1023, 50, 3000);
  delay_led = potTime/2;
  
  // Botão
  butState = digitalRead(but_pin);
  if(butState == HIGH && Previous_butState == LOW){
    sentido = !sentido;
  }
  Previous_butState = butState;

  // Delay
  if(time_now >= alarm_led)
  {
    alarm_led += delay_led;
    digitalWrite(cont, LOW);
    
    // Esquerda pra Direita
    if(sentido == 1){
      cont += 1;   
      if(cont==10)
      {
        cont = 1;
      }    
    }
      
    // Direita pra Esquerda
    if(sentido == 0){
      cont -= 1;  
      if(cont==1)
      {
        cont = 10;
      }   
    }
        
  digitalWrite(cont, HIGH);
  
  }   
    
}
