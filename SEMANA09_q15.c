/* Imagine que em uma fábrica qualquer exista uma caldeira onde fluidos de alta temperatura são armazenados. Nela está acoplado um sensor que mede sua temperatura periodicamente. Escreva um programa que leia uma sequência de valores de temperatura lidos pelo sensor até que um valor negativo seja fornecido. O programa deve informar a mensagem “DEU RUIM” se em algum momento um valor de temperatura lido for maior que 1000º C, indicando uma condição perigosa de funcionamento, ou deve informar “TURNO TRANQUILO” se ao final da leitura da sequência nenhum valor lido foi maior que 1000. // Entrada: Uma sequência de números inteiros seguido por um valor negativo. // Saída: DEU RUIM ou TURNO TRANQUILO, conforme as regras especificadas no enunciado. */

// #include <stdio.h>
// int main(){
//   int temperatura=-1, ruim=0;

//   do{
//     scanf("%i", &temperatura);
//     if(temperatura>1000){
//       ruim=temperatura;
//     }
//   }while(temperatura>=0);

//   if(ruim>0){
//     printf("DEU RUIM");
//   }else{
//     printf("TURNO TRANQUILO");
//   }
//   return 0;
// }