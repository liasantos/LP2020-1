/* Escreva um programa que leia um número inteiro N e um caractere C, e imprima na tela a matriz correspondente a opção indicada por C com dimensão NxN. As opções possívels são T de matriz tabuleiro, D de matriz diagonal, S de matriz triangular superior e I de matriz triangular inferior. Note que as matrizes são binárias, e diagonal principal são sempre com todos os dígitos 1, conforme exemplo para dimensão 8x8. // Entrada: Um número inteiro N seguido de um caractere C. //Saída: uma matriz de números binários com dimensão NxN e forma especificada por C, conforme especificado no enunciado. */

// #include <stdio.h>
// int main(){
//   int num, linha, coluna, matriz[999][999];
//   char c;

//   scanf("%i %c", &num, &c);
//   for(linha=0;linha<num;linha++){
//     for(coluna=0;coluna<num;coluna++){
//       if(c=='T'||c=='t'){
//         if(
//           (linha+coluna)%2==0||
//           (linha+coluna == 0) 
//           ){
//           matriz[linha][coluna]=1;
//         }else{
//           matriz[linha][coluna]=0;
//         }
//       }else if(c=='D'||c=='d'){
//         if(linha!=coluna){
//             matriz[linha][coluna]=0;            
//           }else{
//             matriz[linha][coluna]=1;
//           }        
//       }else if(c=='S'||c=='s'){
//         if(coluna>=linha){
//           matriz[linha][coluna]=1;
//         }else{
//           matriz[linha][coluna]=0;
//         }
//       }else if(c=='I'||c=='i'){
//         if(coluna<=linha){
//           matriz[linha][coluna]=1;
//         }else{
//           matriz[linha][coluna]=0;
//         }
//       }
//     }
//   }
  
//     for(linha=0;linha<num;linha++){
//       for(coluna=0;coluna<num;coluna++){
//         printf("%i", matriz[linha][coluna]);
//       }
//       printf("\n");
//     }
//   return 0;
// }