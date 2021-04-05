/* Considere que o diâmetro da bola de futebol é de 22cm. Escreva um programa que receba 2 números reais indicando as coordenadas X e Y do centro da bola medida pelos sensores no momento em que ela cruza a linha de fundo do campo de futebol. Escreva um programa que informe: GOLACO se a bola passar exatamente dentro da região dos angulos superiores, apenas GOL se a bola entrou entre as traves mas fora do ângulo, ou UHHH se a bola tiver ido pra fora. Para simplificar, considere que bola na trave, por menor que seja o toque, é bola fora. */

// #include <stdio.h>
// int main (){
//   double coordX, coordY, operacaoGolacoY;
//   scanf("%lf %lf", &coordX, &coordY);
//   operacaoGolacoY = coordY - 11 > 204 && coordY + 11 < 244;
//   if(((coordX - 11 > 58 && coordX + 11 < 98) && operacaoGolacoY) || ((coordX - 11 > 750 && coordX + 11 < 790) && operacaoGolacoY)){
//     printf("GOLACO\n");
//   }else if((coordX - 11 > 58 && coordX + 11 < 790) && coordY + 11 < 244){
//     printf("GOL\n");
//   }else{
//     printf("UHHH\n");
//   }
//   return 0;
// }