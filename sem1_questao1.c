/*
Escreva um programa que calcule o valor final de uma compra,
considerando os descontos a serem aplicados sobre o somatório do preço dos itens:
até 100 reais = 0% ; 
acima de 100 reais e até 200 reais = 5% ; 
acima de 200 reais = 10%.
*/

/*
//preambulo
#include <stdio.h>

int main() {
  //declaração de variaveis
  double valorCompra, valorFinal;

  //exibe mensagem solicitando o valor da compra
  printf("Insira o valor total da sua compra:\n");

  //lê o valor de entrada
  scanf("%lf", &valorCompra);

  //condicional
  if(valorCompra<=100){ //se entrada menor ou igual que 100
    printf("\nR$ %.2lf", valorCompra); //imprima entrada
  } if(valorCompra>100 && valorCompra<=200){ //se entrada maior que 100 e menor ou igual a 200
    valorFinal=valorCompra-(valorCompra*0.05); //calcula 5% desconto
    printf("\nR$ %.2lf", valorFinal); //imprime valor com desconto
  } if(valorCompra>200){ //se entrada maior que 200
    valorFinal=valorCompra-(valorCompra*0.1); //calcula 10% desconto
    printf("\nR$ %.2lf", valorFinal); //imprime valor com desconto
  }

  return 0;
}
*/