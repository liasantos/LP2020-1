/*
Escreva um programa em C que receba 3 valores reais correspondentes
às medidas dos lados de um triângulo informe se é um triângulo EQUILÁTERO (três lados iguais), ISÓSCELES (dois lados iguais) ou ESCALENO (3 lados diferentes), ou ainda informe NÃO FORMA caso as medidas não formem triângulo. A condição para formação de um triângulo é que a soma das medidas menores tem que ser maior que a maior medida
*/

/*
//preambulo
#include <stdio.h>

int main() {
  //declaração de variaveis
  double lado1, lado2, lado3;

  //exibe mensagem solicitando três números reais
  printf("Digite as três medidas do triângulo:\n");

  //lê as medidas inseridas
  scanf("%lf %lf %lf", &lado1, &lado2, &lado3);
  //condicional
  //verifica se é triangulo
  if(lado1+lado2>lado3 && lado1+lado3>lado2 && lado3+lado2>lado1){
    //verifica se é equilatero
    if(lado1==lado2&&lado2==lado3){ 
    printf("\nEQUILÁTERO");
    }
    //verifica se é isósceles
    if((lado1==lado2 && lado2!=lado3) || (lado1!=lado2 && lado2==lado3) || (lado1==lado3 && lado2!=lado3)){
      printf("\nISÓSCELES");
    }
    //verifica se é escaleno
    if(lado1!=lado2 && lado2!=lado3){
      printf("\nESCALENO");
    }    
  }
  else{
    printf("\nNÃO FORMA");
  }
  return 0;
  }
  */