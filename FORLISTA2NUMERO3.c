/*03) Entrar com nome e salário bruto de 10 pessoas. Imprimir nome e o valor da alíquota do imposto de renda:
salário menor R$ 600,00 - isento
salário >= R$ 600,00 e < R$ 1.500,00 - 10% do salário bruto
salário >= R$ 1.500,00 - 15% do salário bruto
*/

#include<stdio.h>

main(){

int i,sbruto;
char nome;
float irenda;

for(i=0;i<10;i++){
printf("Entre com a inicial do nome: ");
scanf("\n%c",&nome);

printf("Entre com o salario bruto: ");
scanf("%d",&sbruto);

if(sbruto<600){

    printf("Inicial do nome: %c  Isento de imposto de renda.\n\n");

}

if((sbruto>=600)&&(sbruto<1500)){

    irenda=sbruto*0.10;
    printf("Inicial do nome: %c  Imposto de renda: %f\n\n",nome,irenda);
}

if(sbruto>=1500){

    irenda=sbruto*0.15;
    printf("Inicial do nome: %c  Imposto de renda: %f\n\n",nome,irenda);

}
}
}
