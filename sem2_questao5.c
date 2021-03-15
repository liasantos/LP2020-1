/*
Escreva um programa que receba 2 números inteiros distintos e
apresente na tela uma lista ordenada contendo os números e seus respectivos antecessores e sucessores, sem repetição.
*/

//preambulo
// #include <stdio.h>
//declaração de variaveis
// int main() {	
// 	int num1, num2, menor, maior;	
// 	printf("Digite dois numeros inteiros e distintos entre si:\n");
// 	scanf("%i %i", &num1, &num2);	
//coloca em ordem
// 	if(num1 > num2){
// 		menor = num2;
// 		maior = num1;
// 	}else{
// 		menor = num1;
// 		maior = num2;
// 	}	
//condicional
// 	if( (maior - menor) == 3) {
// 		printf("%i %i %i %i %i %i", (menor-1),(menor),(menor+1),(menor+2),(menor+3),(menor+4));
// 	}	
// 	else if( (maior - menor) == 2) {
// 		printf("%i %i %i %i %i", (menor-1),(menor),(menor+1),(menor+2),(menor+3));
// 	}	
// 	else if( (maior - menor) == 1) {
// 		printf("%i %i %i %i", (menor-1),(menor),(menor+1),(menor+2));
// 	}
// 	else{
// 		printf("%i %i %i %i %i %i", (menor-1),(menor),(menor+1), (maior-1),(maior),(maior+1));
// 	}
	
// 	return 0;
// }