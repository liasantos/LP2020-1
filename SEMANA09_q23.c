/* Um dos jogos mais tradicionais nos cassinos pelo mundo é o 21. No jogo de cartas, dois jogadores jogam, e uma sequencia alternada de cartas é sorteada alternadamente para cada jogador, quando requisitado. A cada sorteio, o valor da carta é acumulado na pontuação do jogador. Ganha o jogador que fechar a soma de 21 pontos. O jogo só acaba quando ambos os jogadores decidem parar de pedir cartas. Quando um jogador para, as demais cartas da sequência devem ser distribuídas para o outro jogador. Quando um jogador atinge 21 pontos é natural que esse decida parar, e duas opções restam ao segundo jogador: seguir pedindo cartas a fim de tentar empatar o jogo, ou parar, admitindo a derrota. O empate ocorre quando ambos os jogadores atingem 21 pontos. O primeiro a estourar os 21 pontos, perde. As cartas numéricas valem seu valor respectivo, e as demais cartas Ás (A), Valete (J), Dama (Q) e Rei (K) valem, respectivamente, 1, 11, 12 e 13 pontos. Considere que o baralho tem infinitas cartas. //Entrada: Uma sequencia composta de valores numéricos de 2 a 10, caracteres maiúsculos A, J, Q, K, além do caractere S para informar quando o jogador decide parar de pedir cartas. O primeiro caractere sempre corresponde uma carta sorteada para o Jogador 1. //Saídas: O programa deve apresentar “JOGADOR 1 VENCEU” caso o jogador 1 vença, “JOGADOR 2 VENCEU” caso o jogador 2 vença, ou “EMPATE” caso ambos os jogadores completem exatamente 21 pontos ou caso ambos ultrapassem. */

// #include <stdio.h>
// int main(){
//   int vez, pts1, pts2, cartas;
//   char jogadas[999];
//   char stop1='f', stop2='f';

//   gets(jogadas);

//   for(cartas=0; cartas<999; cartas++){
//     if(jogadas[cartas]!='\0'){
//       if(stop1 != 'v' && vez==1){
//         switch(jogadas[cartas]){
//           case 'S': stop1 = 'v';
//             break;
//           case '2': pts1+=2;
//             break;
//           case '3': pts1+=3;
//             break;
//           case '4': pts1+=4;
//             break;
//           case '5': pts1+=5;
//             break;
//           case '6': pts1+=6;
//             break;
//           case '7': pts1+=7;
//             break;
//           case '8': pts1+=8;
//             break;
//           case '9': pts1+=9;
//             break;
//           case '1': pts1+=10;
//             break;
//           case 'A': pts1+=1;
//             break;
//           case 'J': pts1+=11;
//             break;
//           case 'Q': pts1+=12;
//             break;
//           case 'K': pts1+=13;
//             break;
//         }
//         if(stop2 != 'v' ){
//           vez = 2;
//         } 
//       }else if(stop2 != 'v' && vez==2){
//         switch(jogadas[cartas]){
//           case 'S': stop2 = 'v';
//             break;
//           case '2': pts2+=2;
//             break;
//           case '3': pts2+=3;
//             break;
//           case '4': pts2+=4;
//             break;
//           case '5': pts2+=5;
//             break;
//           case '6': pts2+=6;
//             break;
//           case '7': pts2+=7;
//             break;
//           case '8': pts2+=8;
//             break;
//           case '9': pts2+=9;
//             break;
//           case '1': pts2+=10;
//             break;
//           case 'A': pts2+=1;
//             break;
//           case 'J': pts2+=11;
//             break;
//           case 'Q': pts2+=12;
//             break;
//           case 'K': pts2+=13;
//             break;
//         }
//         if(stop1 != 'v' ){
//           vez = 1;
//         } 

//       }
//       if(stop1=='v' && stop2=='v'){
//         break;
//       }
//     }
//   }

//   if(pts1==pts2){
//     printf("\nEMPATE");
//   }else if(pts1>21 && pts2>21){
//     printf("\nEMPATE");
//   }else if(pts1<=21 && pts1<pts2){
//     printf("\nJOGADOR 1 VENCEU");
//   }else if(pts2<=21 && pts1>pts2){
//     printf("\nJOGADOR 2 VENCEU");
//   }
//  return 0;
// }