/* Entrada: um nome completo de até 1024 caracteres, grafado apenas com letras minúsculas e espaços em branco separando cada parte. Não há acentuação ou qualquer outro símbolo na entrada. // Saída: Um nome completo com cada letra inicial grafada com letra maiúscula, incluido os conectivos. */

// #include<stdio.h>
// int main(){
//   char nome[1024];
//   int iniciais;
//   gets(nome);
//   nome[0] -=32;
//   for (iniciais=1; iniciais<1024; iniciais++){
//     if(nome[iniciais-1] == 32){
//       nome[iniciais]-=32;
//     }
//   }
//   printf("%s\n", nome);
//   return 0;
// }