/* Um jogos mais tradicionais é o chamado jogo do PIN, em que o participante precisa contar de um a 40, sempre substituindo os múltiplos de 4 pela palavra PIN. Você encontra um exemplo do jogo. https://www.youtube.com/watch?v=s6PCVq_ojto Escrever um programa que imprima na tela o gabarito desse desafio, para que o Silvio Santos possa acompanhar a resposta do participante. E não vale ser só até 40, tem que ser qualquer número até 100. // Entrada: Um número inteiro indicando o valor limite da contagem. // Saída: A lista de números que devem ser mencionado, separados por vírgula, respeitando a regra do jogo. */

// #include <stdio.h>
// int main(){
//   int num, i;
//   scanf("%i", &num);
//   if(num<=100){
//     for(i=1; i<=num; i++){
//       if(i%4==0){
//         printf("PIN,");
//       } else {
//           printf("%i,", i);
//       }
//     }
//   }
//  return 0;  
// }