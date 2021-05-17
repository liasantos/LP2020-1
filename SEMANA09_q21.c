/*  Escreva um programa que leia uma sequência de 100 números 0 e 1, e informe o tamanho da maior sequência contínua (de 0s ou de 1s) na entrada. // Entrada: uma sequência de 100 números inteiros 0s e 1s. //Saída: um número inteiro correspondendo ao tamanho da maior sequência contínua */

// //ainda não funciona
// //testar em cascata
// #include <stdio.h>
// int main(){
//   int num, aux, somazero, somaum, msequencia, compara, sequencia[10];
//   for(num=0; num<10; num++){
//     scanf("%i", &sequencia[num]);
//   }
//   somazero=1;
//   somaum=1;
//   msequencia=0;
//   for(num=0; num<10; num++){
//     for(aux=num+1;aux<10;aux++){
//       if(sequencia[num] == sequencia[aux] && num==0){
//         somazero+=1;
//         //continue;
//       } 
//         if(msequencia<somazero){
//          msequencia=somazero;      
//         }else{
//           somazero=1;
//         }if(sequencia[num] == sequencia[aux] && num==1){
//         somaum+=1;
//         //continue;
//       } 
//         if(msequencia<somaum){
//           msequencia=somaum;      
//         }
//         else{
//           somaum=1;
//         }
//   }} 
//   printf("maior %i\n somazero %i\n somaum %i", msequencia, somazero, somaum);
//   return 0;
// }
