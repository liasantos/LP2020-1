/* Como no meme do garotinho do mi-mi-mi, leia uma frase de até 50 caracteres e substitua toda vogal por ‘i’ ou por ‘I’, conforme a forma da vogal original. Considere que nenhuma vogal da entrada é acentuada. //Entrada: uma string de até 50 caracteres. //Saída: string com todas vogais substituidas por ‘i’ onde a orignal é minúscula, ou por ‘I’onde a original é maiúscula. */

// #include <stdio.h>
// int main(){
//   char mimimi[50];
//   int vogal=0;
//   gets(mimimi);
//   while(vogal<50){
//     if(mimimi[vogal]=='a' || mimimi[vogal]=='e' || mimimi[vogal]=='o' || mimimi[vogal]=='u'){
//       mimimi[vogal]='i';
//     }else if(mimimi[vogal]=='A' || mimimi[vogal]=='E' || mimimi[vogal]=='O' || mimimi[vogal]=='U'){
//       mimimi[vogal]='I';
//     }
//     vogal++;
//   }
//   printf("%s\n", mimimi);
//   return 0;
// }