#include <stdio.h>
#include <stdlib.h>

int main(){
int escolha;
printf("BANCO DE DADOS\n"
      "MOTOS(1)\n"
      "CARROS\n"
      "-----------------"
      "Escolha:");
  scanf("%d",&escolha);
  if ( escolha == 1){
    system("cls");
  printf("BANCO DE DADOS\n\nMOTOS");
    printf("\nModelos:\n");
  }
   if (escolha == 2){
     printf("BANCO DE DADOS\n\n");
    printf("CARROS"); 
    printf("\nModelos");
   }
}
