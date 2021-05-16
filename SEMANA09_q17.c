/* Escreva um programa que leia uma sequência de números inteiros de 0 a 9 e informe a quantidade de ocorrências de cada número. Observe os exemplos para ficar mais claro. // Entrada: uma sequência de números inteiros de 0 a 9, seguidos de um número negativo. //Saídas: a lista de números de 0 a 9 e o número de ocorrências separados pelo caractere dois pontos (:), cada um em uma linha, em ordem, desde que o número tenha aparecido ao menos uma vez. */

// #include <stdio.h>
// int main(){
//   int numero, zero=0, um=0, dois=0, tres=0, quatro=0, cinco=0, seis=0, sete=0, oito=0, nove=0;

//   while(numero>=0){
//     scanf("%i", &numero);
//     switch(numero){
//       case 0: zero++; continue;
//       case 1: um++; continue;
//       case 2: dois++; continue;
//       case 3: tres++; continue;
//       case 4: quatro++; continue;
//       case 5: cinco++; continue;
//       case 6: seis++; continue;
//       case 7: sete++; continue;
//       case 8: oito++; continue;
//       case 9: nove++; continue;
//     }
//   }

//   if(zero!=0){
//     printf("0:%i\n", zero);
//   }
//   if(um!=0){
//     printf("1:%i\n", um);
//   }
//   if(dois!=0){
//     printf("2:%i\n", dois);
//   }
//   if(tres!=0){
//     printf("3:%i\n", tres);
//   }
//   if(quatro!=0){
//     printf("4:%i\n", quatro);
//   }
//   if(cinco!=0){
//     printf("5:%i\n", cinco);
//   }
//   if(seis!=0){
//     printf("6:%i\n", seis);
//   }
//   if(sete!=0){
//     printf("7:%i\n", sete);
//   }
//   if(oito!=0){
//     printf("8:%i\n", oito);
//   }
//   if(nove!=0){
//     printf("9:%i\n", nove);
//   }

//   return 0;
// }