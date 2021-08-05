#include <stdio.h>

int main(){

  printf(".--------- Escolha uma Opcao ---------.\n");
    printf("| [1] Codificar mensagem              |\n");
    printf("| [2] Decodificar mensagem            |\n");
    printf("'-------------------------------------'\n\n");

  int escolha = -1;
  char palavra[30], aux[30];
  int chave=4, i;

  while(escolha!=0){

    printf("Sua escolha: ");
    scanf("%d", &escolha);

    switch(escolha){
      case 1:
        printf("Codifique sua mensagem: ");
        scanf("%s", palavra);
 
        if(chave == 4){
          i = 0;
         while(palavra[i] != '\0'){
            aux[i] = palavra[i] + chave;
            if((palavra[i] + chave) > 122)
            {
                aux[i] -=26;
            }
            if((palavra[i] + chave) < 97)
            {
                aux[i] += 26;
            }
            i++;
          }
          aux[i] = '\0';
          printf("Codificacao da mensagem: %s\n\n", aux);       
          }
          break;
      case 2:
        printf("Decodifique sua mensagem: ");
        scanf("%s", palavra);
        chave=-4;
        if(chave == -4){
         i = 0;
         while(palavra[i] != '\0')
          {
            aux[i] = palavra[i] + chave;
            if((palavra[i] + chave) > 122)
            {
                aux[i] -=26;
            }
            if((palavra[i] + chave) < 97)
            {
                aux[i] += 26;
            }
            i++;
           }
          aux[i] = '\0';
          printf("Decodificacao da mensagem: %s\n\n", aux);       
          }
          break;
      }

    }
}