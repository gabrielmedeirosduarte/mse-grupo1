// variável cont para percorrer a lista
int cont = 0; 
// lista de sequência dos pinos
int array[14] = {0, 1, 2, 3, 4, 5, 6, 7, 6, 5, 4, 3, 2, 1};

void setup()
{
  // Define cada LED como PINO DE SAÍDA
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  cont%=14; // Calcula o resto da divisão por 14 (tamanho da lista)
  digitalWrite(array[cont],HIGH); // Liga o pino do "contador"
  delay(500); // Espera 0.5s
  digitalWrite(array[cont], LOW); // Desliga o pino do "contador"
  cont+=1; // Incrementa o contador
}
