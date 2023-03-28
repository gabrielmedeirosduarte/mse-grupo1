#define ledAND 2 //Define o led da AND na porta 2
#define ledOR 3 //Define o led da OR na porta 3
#define ledXOR 4 //Define o led da XOR na porta 4

#define but1 6 //Define o botão 1 na porta 6
#define but2 7 //Define o botão 2 na porta 7

int stateBut1 = 0;
int stateBut2 = 0;

void setup()
{
  //Define os LEDs como saída e os botões como entrada
  pinMode(ledAND, OUTPUT); 
  pinMode(ledOR, OUTPUT); 
  pinMode(ledXOR, OUTPUT); 
  pinMode(but1, INPUT); 
  pinMode(but2, INPUT); 
}
  
void loop()
{
  //Lê o estado dos botões
  stateBut1 = digitalRead(but1);
  stateBut2 = digitalRead(but2);
  
  //Com base nas operações lógicas, acende ou apaga os LEDs
  digitalWrite(ledAND, stateBut1 & stateBut2);
  digitalWrite(ledOR, stateBut1 | stateBut2);
  digitalWrite(ledXOR, stateBut1 ^ stateBut2);
}