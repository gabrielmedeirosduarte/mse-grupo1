#define ledPin 8

float freq = 2.0; // Frequência do blink do LED
float period = (1/freq)*1000; // Cálculo do Período

unsigned long time_now = 0; // Variável que recebe o tempo atual
unsigned long alarm_1 = 0; // Variável que será atribuída igual ao tempo atual, de tempo em tempo ("period" em "period")
int delay_time = period; // Delay desejado

boolean led_status = HIGH; // Status do LED

unsigned long cont = 0; // Contador para imprimir o número de vezes que a loop() é executada
unsigned long alarm_2 = 0; // Variável que será atribuída igual ao tempo atual, de tempo em tempo (1s em 1s)

void setup() {
  pinMode(ledPin, OUTPUT); // Define o pino do LED como saída
  Serial.begin(9600); // Taxa de comunicação em bits/s
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

  // De "period" em "period", pisca o LED
  if(time_now >= alarm_1){
    alarm_1 += delay_time;
    digitalWrite(ledPin, led_status);
    led_status = !led_status;  
  }
  
}
