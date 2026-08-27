 #include<stdio.h>

 int main(){

     char nome[50];
   float nomeFuncionario;
   float  salarioBruto , valordoimposto;
   float salarioLiquido , valorEmprestimo= 0.0;

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



         return 0; 
    
 }