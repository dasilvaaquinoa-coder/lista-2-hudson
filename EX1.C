 #include<stdio.h>

 int main(){

     char nome[50];
   float nomeFuncionario;
   float  salarioBruto , valordoimposto;
   float salarioLiquido , valorEmprestimo= 0.0;
   float salariofinal;
   
    printf("\nDigite o nome do funcionario");
    scanf ("%5", &nomeFuncionario);

    printf("\nDigite o salario Bruto(R$):");
    scanf("%5", &salarioBruto);

    printf ("\nDigite o valor do imposto(R$):");
    scanf("%5" , &valordoimposto);

    printf("\nDigite o salario liquido(R$):");
    scanf ("%5" , &salarioLiquido);

    printf ("\nDigite o valor do emprestimo(R$):");
    scanf("%5" , &valorEmprestimo);

    salarioLiquido= salarioBruto - valordoimposto - valorEmprestimo;


    if ( salarioLiquido> 0){
    
         valorEmprestimo= salarioLiquido * 0.30;

    } else{
         valorEmprestimo=0.0;

    }

    printf("\n--- resultado----/n");
    printf("funcionario: %\n", nome);
    printf("salario bruto: R$ % 2.f\n",salarioBruto);
    printf("valor Impostos :R$ % 2.F/n",valordoimposto);
    printf("salario Liquido : R$ "salarioLiquido);
    printf("valor Eprestimo:R$" valorEmprestimo);
    printf("salario final : R$" salariofinal);
    

         return 0; 
    
 }