//Miniprojeto 1
//Elabore um codigo utilizando os comandos if e while que faca aparecer na Serial Monitor
//os numeros pares de 1 a 100:

#include <stdio.h>
#include <stdlib.h>

void setup() {
}

void loop() {
  int i=0;
  while(i<=100){ // verificando se o numero é menor que 100
    if (i%2==0){ //verificando se o numero é par
      Serial.print(i); //Aparece apenas os pares na Serial Monitor
      }
     i++;
    }
 }
