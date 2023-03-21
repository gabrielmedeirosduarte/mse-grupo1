// Define a pinagem de cada LED
#define led_1 13
#define led_2 12
#define led_3 11
#define led_4 10
#define led_5 9
#define led_6 8
#define led_7 7
#define led_8 6

void setup()
{
  // Define cada LED como PINO DE SAÍDA
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  pinMode(led_6, OUTPUT);
  pinMode(led_7, OUTPUT);
  pinMode(led_8, OUTPUT);
}

void loop()
{
  // Chama a função para os 8 LEDs
  LED(led_1);
  LED(led_2);
  LED(led_3);
  LED(led_4);
  LED(led_5);
  LED(led_6);
  LED(led_7);
  LED(led_8);
}

// Define função que acende um LED, espera 0,5s e apaga
void LED(int led_pin){
    digitalWrite(led_pin, HIGH);
    delay(500);
    digitalWrite(led_pin, LOW);
}