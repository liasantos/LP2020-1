/* Escreva um programa que receba um número inteiro de até 4 dígitos e o escreva por extenso. Atente-se aos exemplos, e considere outros casos de teste que não estejam contemplados. A saída deve apresentar o número por extenso seguindo a norma culta da língua portuguesa */
// #TODO: acrescentar os "e"s  reduzir
#include <stdio.h>
int main(){
  int numero, milhar, centena, dezena, unidade, dif;
  scanf("%i", &numero);
  // desmembra o número e identifica a posição
  milhar = numero/1000;
  centena = numero%1000/100;
  dezena = numero%1000%100/10;
  unidade = numero%1000%100%10;
  // identifica o zero
  if(milhar == 0 && centena == 0 && dezena == 0 && unidade == 0){
    printf("zero");
  }
  //milhar
  switch(milhar){
    case 1: printf("um mil ");
    break;
    case 2: printf("dois mil ");
    break;
    case 3: printf("três mil ");
    break;
    case 4: printf("quatro mil ");
    break;
    case 5: printf("cinco mil ");
    break;
    case 6: printf("seis mil ");
    break;
    case 7: printf("sete mil ");
    break;
    case 8: printf("oito mil ");
    break;
    case 9: printf("nove mil ");
    break;
    default: break;
  } 
  //centena
  switch(centena){
    case 1: if(dezena == 0 && unidade == 0){
      printf("cem ");
    } else{
      printf("cento ");
    }   
    break;
    case 2: printf("duzentos ");
    break;
    case 3: printf("trezentos ");
    break;
    case 4: printf("quatrocentos ");
    break;
    case 5: printf("quinhentos ");
    break;
    case 6: printf("seiscentos ");
    break;
    case 7: printf("setecentos ");
    break;
    case 8: printf("oitocentos ");
    break;
    case 9: printf("novecetos ");
    break;
    default: break;
  } 
  //dezena
  switch(dezena){
    case 1: if(dezena == 1 && unidade == 1){
        printf("onze ");
      }else if(dezena == 1 && unidade == 2){
        printf("doze ");
      }else if(dezena == 1 && unidade == 3){
        printf("treze ");
      }else if(dezena == 1 && unidade == 4){
        printf("quatorze ");
      }else if(dezena == 1 && unidade == 5){
        printf("quinze ");
      }else if(dezena == 1 && unidade == 6){
        printf("dezesseis ");
      }else if(dezena == 1 && unidade == 7){
        printf("dezessete ");
      }else if(dezena == 1 && unidade == 8){
        printf("dezoito ");
      }else if(dezena == 1 && unidade == 9){
        printf("dezenove ");
      }else {
        printf("dez ");
      }
    break;
    case 2: printf("vinte ");
    break;
    case 3: printf("trinta ");
    break;
    case 4: printf("quarenta ");
    break;
    case 5: printf("cinquenta ");
    break;
    case 6: printf("sessenta ");
    break;
    case 7: printf("setenta ");
    break;
    case 8: printf("oitenta ");
    break;
    case 9: printf("noventa ");
    break;
    default: break;
  }
  dif = dezena != 1;
  //unidades
  switch(unidade){
    case 1: if(dif){
        printf("um ");
      }
    break;
    case 2: if(dif){
        printf("dois ");
      }
    break;
    case 3: if(dif){
        printf("três ");
      }      
    break;
    case 4: if(dif){
        printf("quatro ");
      }      
    break;
    case 5: if(dif){
        printf("cinco ");
      }      
    break;
    case 6: if(dif){
        printf("seis ");
      }      
    break;
    case 7: if(dif){
        printf("sete ");
      }      
    break;
    case 8: if(dif){
        printf("oito ");
      }      
    break;
    case 9: if(dif){
        printf("nove ");
      }      
    break;
    default: break;
  }
  return 0;
}