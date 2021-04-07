// /* Existem diversos tipos de códigos de barras, mas talvez o mais famoso seja o EAN13. O código de barras EAN13 é usado para identificar produtos de consumo e é composto por um conjunto de 13 números usados para codificar, dos quais 1 número é digito verificador, posicionado mais à esquerda do código. Exemplo: 5 9 0 1 2 3 4 1 2 3 4 5 7 // O dígito verificador é usado para verificar se o código de barras foi lido corretamente, e é calculado com base nos demais dígitos, através de uma seqüência de 5 passos: 1. Some o valor de todos os dígitos em posições ímpares.; 2. Multiplique esse resultado por 3; 3. Some o valor de todos os dígitos em posições pares; 4. Some este valor ao valor no passo 2; 5. Para criar o código verificador, determine o número que, quando adicionado ao número do passo 4, seja múltiplo de 10; Escreva um programa que, dado um código de barras, determine se a leitura está correta */

// #include <stdio.h>
// int main(){
//   int digitoVerificador, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, somaPar, somaImpar, valor;
//   scanf("%i %i %i %i %i %i %i %i %i %i %i %i %i", &digitoVerificador, &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12);
//   // 1- soma todos os valores posição impar
//   somaImpar = num1 + num3 + num5 + num7 + num9 + num11;
//   // 2- multiplica somaImpar por 3 
//   valor = somaImpar * 3;
//   // 3- soma todos os vaores posição par
//   somaPar = num2 + num4 + num6 + num8 + num10 + num12;
//   // 4- soma valor com somaPar
//   valor += somaPar;
//   // 5- digito verificador
//   if((valor + digitoVerificador) % 10 == 0){
//     printf("S\n");
//   }else{
//     printf("N\n");
//   }
//   return 0;
// }
