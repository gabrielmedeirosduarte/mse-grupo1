// ####################
// 0. Bibliotecas
// ####################

// Incluir a biblioteca TimerOne
#include <TimerOne.h>

// ####################
// 1. Variaveis
// ####################

// 1.1 Pino do LED <- 3
#define pinLed 3
// 1.2 Estado do LED <- HIGH
volatile bool stateLed = HIGH;

// ####################
// 2. Função Setup
// ####################

void setup() 
{
  // 2.1 Definir a taxa de comunicação em bits/s
  Serial.begin(9600);
  // 2.2 Inicializar o Timer1 com o delay desejado
  Timer1.initialize(1000000);
  // 2.3 Associar a Função Pisca()
  Timer1.attachInterrupt(piscaLed);
}

// ####################
// 3. Função Loop
// ####################

void loop() 
{

}

// ####################
// 4. Função Pisca()
// ####################

void piscaLed(){
  // 4.1 Acende ou Apaga o LED (dependendo do estado)
  digitalWrite(pinLed, stateLed);
  // 4.2 Inverte o valor do estado
  stateLed = !stateLed;
}

