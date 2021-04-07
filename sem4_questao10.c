/* Escreva um programa que receba um número inteiro de até 4 dígitos e o escreva por extenso. Atente-se aos exemplos, e considere outros casos de teste que não estejam contemplados. A saída deve apresentar o número por extenso seguindo a norma culta da língua portuguesa */
// #include <stdio.h>
// int main(){
//   int numero, milhar, centena, dezena, unidade, dif, imprimeE;
//   scanf("%i", &numero);
//   // desmembra o número e identifica a posição
//   milhar = numero/1000;
//   centena = numero%1000/100;
//   dezena = numero%1000%100/10;
//   unidade = numero%1000%100%10;
//   // identifica o zero
//   if(milhar == 0 && centena == 0 && dezena == 0 && unidade == 0){
//     printf("zero");
//   }
//   //milhar
//   imprimeE = (centena > 0 && dezena == 0 && unidade == 0) || (centena == 0 && dezena > 0) || (centena == 0 && unidade > 0);
//   switch(milhar){
//     case 1: printf("mil ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 2: printf("dois mil ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 3: printf("tres mil ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 4: printf("quatro mil ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 5: printf("cinco mil ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 6: printf("seis mil ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 7: printf("sete mil ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 8: printf("oito mil ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 9: printf("nove mil ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     default: break;
//   } 
//   //centena
//   imprimeE = dezena > 0 || unidade > 0;
//   switch(centena){
//     case 1: if(dezena == 0 && unidade == 0){
//         printf("cem ");
//       } else{
//         printf("cento e ");
//       }   
//     break;
//     case 2: printf("duzentos ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 3: printf("trezentos ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 4: printf("quatrocentos ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 5: printf("quinhentos ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 6: printf("seiscentos ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 7: printf("setecentos ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 8: printf("oitocentos ");
//      if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 9: printf("novecentos ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     default: break;
//   } 
//   //dezena  
//   imprimeE = unidade > 0;
//   switch(dezena){
//     case 1: if(dezena == 1 && unidade == 1){
//         printf("onze ");
//       }else if(dezena == 1 && unidade == 2){
//         printf("doze ");
//       }else if(dezena == 1 && unidade == 3){
//         printf("treze ");
//       }else if(dezena == 1 && unidade == 4){
//         printf("quatorze ");
//       }else if(dezena == 1 && unidade == 5){
//         printf("quinze ");
//       }else if(dezena == 1 && unidade == 6){
//         printf("dezesseis ");
//       }else if(dezena == 1 && unidade == 7){
//         printf("dezessete ");
//       }else if(dezena == 1 && unidade == 8){
//         printf("dezoito ");
//       }else if(dezena == 1 && unidade == 9){
//         printf("dezenove ");
//       }else {
//         printf("dez ");
//       }
//     break;
//     case 2: printf("vinte ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 3: printf("trinta ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 4: printf("quarenta ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 5: printf("cinquenta ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 6: printf("sessenta ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 7: printf("setenta ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 8: printf("oitenta ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     case 9: printf("noventa ");
//       if(imprimeE){
//         printf("e ");
//       }
//     break;
//     default: break;
//   }
//   dif = dezena != 1;
//   //unidades
//   switch(unidade){
//     case 1: if(dif){
//         printf("um ");
//       }
//     break;
//     case 2: if(dif){
//         printf("dois ");
//       }
//     break;
//     case 3: if(dif){
//         printf("tres ");
//       }      
//     break;
//     case 4: if(dif){
//         printf("quatro ");
//       }      
//     break;
//     case 5: if(dif){
//         printf("cinco ");
//       }      
//     break;
//     case 6: if(dif){
//         printf("seis ");
//       }      
//     break;
//     case 7: if(dif){
//         printf("sete ");
//       }      
//     break;
//     case 8: if(dif){
//         printf("oito ");
//       }      
//     break;
//     case 9: if(dif){
//         printf("nove ");
//       }      
//     break;
//     default: break;
//   }
//   return 0;
// }