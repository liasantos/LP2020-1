/*  Escreva um programa que leia uma sequência de 100 números 0 e 1, e informe o tamanho da maior sequência contínua (de 0s ou de 1s) na entrada. // Entrada: uma sequência de 100 números inteiros 0s e 1s. //Saída: um número inteiro correspondendo ao tamanho da maior sequência contínua */

// //passou no teste do exercicio
// //porem não consigo fazer parar de contar a seq.
// //portanto funciona pela metade :(

// #include <stdio.h>
// int main(){
//   int num, soma=1, msequencia=-1, sequencia[100];

//   for(num=0; num<100; num++){
//     scanf("%i", &sequencia[num]);
//   }
//     for(num=1; num<100; num++){    
//       if(sequencia[num] == sequencia[num+1]){
//         soma+=1;
//         //printf("%i\n", soma); //teste      
//         if(msequencia<soma){
//           msequencia=soma;
//         }else{
//         soma=0;  
//         }                 
//         //printf("soma\n%i\n", soma);//teste
//       }
//     }
//   printf("\n%i",msequencia);      
//   //printf("maior %i\n soma %i\n", msequencia, soma);//teste
//   return 0;
// }