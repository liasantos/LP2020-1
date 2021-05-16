/* O termo “média móvel” tem sido bastante utilizado nos últimos meses (vocês sabem porque). Mas trata-se de um conceito aplicável em diversas áreas, e serve para mascarar oscilações abruptas numa série de dados observados. Na situação hipotética da caldeira, por exemplo, eventualmente a leitura do sensor pode ser afetada pelos vapores liberados por ela de forma aleatória, que podem incidir diretamente sobre o sensor, resultando num pico momentâneo de leitura da temperatura que não condiz com a temperatura real da caldeira. Se essa leitura fosse levada em consideração sozinha, poderia implicar em um alarme falso. Para evitar isso, geralmente é considerada a média dos últimos dados lidos. Escreva um programa que informe DEU RUIM caso a média dos 5 últimos valores lidos seja maior que 1000ºC, ou escreva TURNO TRANQUILO se, ao final da leitura das temperaturas, a média móvel não tiver em momento algum ultrapassado 1000ºC. Novamente, um valor negativo indica o final dos dados. // Entrada: Uma sequência de números inteiros seguido por um valor negativo. // Saída: DEU RUIM ou TURNO TRANQUILO, conforme as regras especificadas no enunciado. */

// #include <stdio.h>
// int main(){
//   int temperatura=-1, media=0, temp1=-1, temp2=-1, temp3=-1, temp4=-1, temp5=-1;

//   do{
//     scanf("%i", &temperatura);
//     if(temperatura>=0){
//       temp5=temp4;
//       temp4=temp3;
//       temp3=temp2;
//       temp2=temp1;
//       temp1=temperatura;
//     }
//   }while(temperatura>=0);
//   media=(temp1+temp2+temp3+temp4+temp5)/5;
//   if(media>1000){
//     printf("DEU RUIM");
//   }else{
//     printf("TURNO TRANQUILO");
//   }
//   return 0;
// }