/* Escreva um programa que leia uma sequência de 10 números inteiros e os imprima na tela em ordem crescente em uma linha e em ordem descrescente na linha seguinte. // Entrada: uma sequência de 10 números inteiros. //Saídas: Uma lista de 10 números inteiros em ordem crescentes escritos em uma linha e separados por espaço, seguido de uma segunda linha com os mesmos números escritos em ordem decrescente separados por espaço */

#include <stdio.h>
int main(){
  int i=0, j=0, auxiliar=0, tamanho=10, ordena[tamanho];

  for(i=0; i<tamanho; i++){
  scanf("%i", &ordena[i]);
}

//teste desordenado
//for(i=0; i<tam; i++){
//  printf("ordena[%i] = %i\n", i, ordena[i]);
//}

//ordena crescente
for(i=0; i<tamanho-1; i++){
  for(j=i+1; j<tamanho; j++){
    if(ordena[i] > ordena[j]){
      auxiliar=ordena[i];
      ordena[i]=ordena[j];
      ordena[j]=auxiliar;
      }
  }
}
//imprime crescente
  for(i=0; i<tamanho; i++){
  printf("%i ",ordena[i]);
}
//pula linha
printf("\n");
//ordena e imprime descrescente
tamanho-=1;
for(i=tamanho; i>=0; i--){
printf("%i ", ordena[i]);
}
return 0;
}