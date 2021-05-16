/* Imagine um elevador. Imagine que ele possui um dispositivo de memória que registra os números dos andares que foram digitados pelos usuários ao longo do dia. Cada vez que alguém digita um andar de destino, o sistema de controle deve também indicar no visor externo ao elevador o sentido de deslocamento, se é para cima ou para baixo, considerando a posição atual do elevador. Por exemplo, considere que o elevador encontra-se no 5o. Andar. Quando o usuário adentra, se ele digitar o andar 7 como destino, o visor externo deve indicar a seta para cima (C). Mas, se o usuário digitar o andar 2, o visor externo deve indicar a seta para baixo (B). Contudo, se o usuário digitar 5, indicando o mesmo andar em que se encontra o elevador, nenhuma das duas setas deve ser indicada pelo visor externo (-). Escreva um programa que leia a sequência de andares que foram digitados ao longo do dia, e apresente na tela a sequência de setas (C para cima, B para baixo, - para nenhuma das duas) que deveriam ter sido apresentadas ao longo do dia. Considere que o programa encerra quando um andar negativo for digitado. Considere que o elevador sempre começa o dia do andar térreo, o andar 0. // Entrada: uma sequência de números inteiros positivos ou nulo, seguidos de um número negativo. // Saídas: uma sequência de caracteres C, B, ou -, conforme especificado no enunciado. */

// #include <stdio.h>
// int main(){
//   int botao, andar=0;
//   do{
//     scanf("%i", &botao);    
//     if(botao>=0){
//       if(botao==andar){
//         printf("- ");
//         andar=botao;
//       }else if(botao>andar){
//         printf("C ");
//         andar=botao;
//       }else if(botao<andar){
//         printf("B ");
//         andar=botao;
//       }
//     }else{
//       break;
//     }
//   }while(botao>=0);
//   return 0;
// }