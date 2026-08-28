#include<stdio.h>

int main(){
   char nome[50] raca[50]; 

   printf("Digite o nome do animal:  ");
   scanf("%s", nome);
   printf("Digite a raca do animal:");
   scanf("%s", raca);


   for (int i = 1; i <= 15; i++){
    printf("%d - o nome do animal e: %s\n", i, nome);
   }

   
  printf("o nome do animal e: %s\n", nome);
   printf("a raca do animal e: %s\n" ,raca);


   return 0;
}