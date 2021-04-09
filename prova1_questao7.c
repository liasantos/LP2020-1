/*Escreva um programa que leia dois registros distintos de horário (hora e minuto), a primeira indicando o horário de início e a segunda indicando o horário de fim de uma partida, e indique o tempo decorrido. Quando um horário inválido for fornecido, o programa deve informar HORARIO INVALIDO. Para simplificar o problema, considere que ninguém é capaz de completar 24 horas seguidas jogando, e considere que as entradas são fornecidas de modo que nenhuma partida passa da meia noite. //Entrada: 4 inteiros indicando a hora de início, minuto de inicio, hora de fim, minuto de fim da partida, respectivamente. //Saída: dois inteiros separados pelo caractere dois pontos (:) indicando o tempo total decorrido, ou a mensagem HORARIO INVALIDO caso um dos horários fornecidos seja inválido. Importante: não precisa se preocupar em imprimir o tempo (minuto ou segundo) com dois dígitos.*/

// #include <stdio.h>
// int main(){
//   int horaIn, minIn, horaFin, minFin, opIn, opFin, opTempo, horas, minutos;
//   scanf("%i %i %i %i", &horaIn, &minIn, &horaFin, &minFin);
//   // 24 horas = 1440 minutos
//   if(horaIn < 24 && minIn < 60 && horaFin < 24 && minFin < 60){
//     horaIn *= 60;
//     horaFin *= 60;    
//     if(horaFin > horaIn){
//       opTempo = (horaFin + minFin) - (horaIn + minIn);
//     }else{
//       opIn = 1440 - (horaIn + minIn);
//       opFin = horaFin + minFin;
//       opTempo = opIn + opFin;
//     }
//     horas = opTempo / 60;
//     minutos = opTempo % 60;
//     printf("%i:%i\n", horas, minutos);
//   }
//   else{
//     printf("HORARIO INVALIDO\n");
//   }
//   return 0;
// }