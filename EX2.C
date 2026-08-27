#include<stdio.h>
int main(){

     float salario , porcentagem = 0.0, valorBonus = 0.0;


    printf("Digite o valor do salario (R$):");
    scanf("%lf" ,&salario);

    if (salario >= 0.0 &&  salario <= 1500.00){
       printf("\n Cargo: Entregador\n");
       porcentagem = 0.10;
    } else if (salario >= 1501.00 && salari<= 3800.00){
        printf("\n Cargo: Vendedor/n");
         porcentagem = 0.08;
    }else if ("salario >= 3801.00 && salario <= 5500.00"){
        printf("\nCargo: supervisor\n");
       porcentage = 0.06;
    }else if("salario >= 5501.00 && salario <= 8700.00 "){
        printf("\n cargo: gerente/n");
        porcentagem = 0.05;
    } else if ("salario >= 8701.00 && salario <= 15000.00"){
        printf("\n cargo: dono\n");
        porcentagem = 0.03;
    }else{
        printf("\nsalario fora das faixas cadastradas./n");


      salarioBonus = salario * porcentage;

      printf("Salario: R$ %.2f\n", salario);
    printf("Porcentagem: %.0f%%\n", porcentagem * 100);
    printf("Valor do Bonus: R$ %.2f\n", valorBonus);
    printf("Salario Total com Bonus: R$ %.2f\n", salario + valorBonus);




        return 0;
    }
 
}