/*
Em uma universidade federal, o conceito final do estudante no TCC é definida por uma banca de três professores, em que prevalece o conceito atribuído pela maioria. A avaliação é considerada inconclusiva quando não é formada uma maioria entre as notas atribuídas (ou seja, em caso de empate entre os conceitos atribuídos). Os conceitos possíveis, em ordem do conceito mais alto para o mais baixo, são: A, B, C, ou D, neste último o aluno é considerado reprovado. Escreva um programa que leia três números distintos de 1 a 4, para representar respectivamente cada um dos conceitos A, B, C, e D. O programa deve informar se o aluno foi aprovado e qual o conceito obtido, se ele foi reprovado, ou apenas se o resultado da banca é inconclusivo
*/

/*
//preambulo
#include <stdio.h>

int main() {
  //declaração de variaveis
  int conceito1, conceito2, conceito3;
  //exibe mensagem solicitando os dados de entrada
  printf("Insira os três conceitos do aluno:\n");
  //lê os dados de entrada
  scanf("%i %i %i", &conceito1, &conceito2, &conceito3);
  //condicional
  if(conceito1!=conceito2 && conceito2!=conceito3 && conceito3!=conceito1){
    printf("INCONCLUSIVO");
  }
  else{
    if((conceito1==1 && conceito2==1)||(conceito1==1 && conceito3==1) || (conceito2==1 && conceito3==1)){
      printf("APROVADO COM A");
    }
    else if((conceito1==2 && conceito2==2)||(conceito1==2 && conceito3==2) || (conceito2==2 && conceito3==2)){
      printf("APROVADO COM B");
    }
    else if((conceito1==3 && conceito2==3)||(conceito1==3 && conceito3==3) || (conceito2==3 && conceito3==3)){
      printf("APROVADO COM C");
    }
    else if((conceito1==4 && conceito2==4)||(conceito1==4 && conceito3==4) || (conceito2==4 && conceito3==4)){
      printf("REPROVADO");
    }
  }
return 0;
}
*/