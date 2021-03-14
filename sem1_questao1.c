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
  float valorCompra, valorFinal;

  //exibe mensagem solicitando o valor da compra
  printf("Insira o valor total da sua compra:\n");

  //lê o valor de entrada
  scanf("%f", &valorCompra);

  //condicional
  if(valorCompra<=100){ //se entrada menor ou igual que 100
    printf("\n R$ %.2f", valorCompra); //imprima entrada
  } if(valorCompra>100 && valorCompra<=200){ //se entrada maior que 100 e menor ou igual a 200
    valorFinal=valorCompra-(valorCompra*0.05); //calcula 5% desconto
    printf("\n R$ %.2f", valorFinal); //imprime valor com desconto
  } if(valorCompra>200){ //se entrada maior que 200
    valorFinal=valorCompra-(valorCompra*0.1); //calcula 10% desconto
    printf("\n R$ %.2f", valorFinal); //imprime valor com desconto
  }

  return 0;
}
*/