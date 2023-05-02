#include <neotimer.h>

#define ledPin 8
#define ledPin_1 9
#define ledPin_2 10
#define ledPin_3 11
Neotimer timer1;
Neotimer timer2;
Neotimer timer3;
Neotimer timer4;

unsigned long time_now = 0; // Variável que recebe o tempo atual

boolean led_status = HIGH; // Status do LED

unsigned long cont = 0; // Contador para imprimir o número de vezes que a loop() é executada
unsigned long alarm_2 = 0; // Variável que será atribuída igual ao tempo atual, de tempo em tempo (1s em 1s)

void setup() {
  pinMode(ledPin, OUTPUT); // Define o pino do LED como saída
  pinMode(ledPin_1, OUTPUT);
  pinMode(ledPin_2, OUTPUT);
  pinMode(ledPin_3, OUTPUT);
  Serial.begin(9600); // Taxa de comunicação em bits/s 
  
   // definição do delay de cada led
  timer1.set(333);  
  timer2.set(200);
  timer3.set(142);
  timer4.set(90);
}

void loop() {

 time_now = millis(); // Tempo atual
  cont+=1; // Incrementa o contador

  // De 1000ms em 1000ms, imprime o número de vezes que a loop() é executada
  if(time_now >= alarm_2){
    alarm_2 += 1000;
    Serial.println(cont);
    cont = 0; 
  }

// Pisca o LED pelos periodos a cima definidos 
if(timer1.repeat()){
    digitalWrite(ledPin,!digitalRead(ledPin));
  }
  if(timer2.repeat()){
    digitalWrite(ledPin_1,!digitalRead(ledPin_1));
  }
  if(timer3.repeat()){
    digitalWrite(ledPin_2,!digitalRead(ledPin_2));
  }
  if(timer4.repeat()){
    digitalWrite(ledPin_3,!digitalRead(ledPin_3));
  }

  
}
