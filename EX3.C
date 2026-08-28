#include<stdio.h>

int main (){

     char nome[50];
     float trabalho , somatrabalhos = 0;
     float prova , media ;
     int i;

     printf("Digite o nome do aluno:");
      scanf("%f" ,nome );

      for(i =1; i <= 5; i++){

        printf("Digite a nota do trabalho do aluno %d:",i );
        scanf ("%f", &trabalho);
        somatrabalhos= somatrabalhos + trabalho;

      }
       
      printf("Digite a nota da prova do aluno:");
      scanf("%f , &prova");


       media= (somatrabalhos + prova/ 2.0); 


       printf("\n aluno %s\n" , nome);
       printf("\n media: % 1.f \n", media); 


       if (media >= 6.0){
         
        printf ("\n situacao : aprovado\n");

       }else if (media >= 4.0 ){

        printf ("\n situacao : recuperacao\n");
       } else{
         printf ("\n situacao : reprovado\n");
         
       }





























    return 0; 
}

