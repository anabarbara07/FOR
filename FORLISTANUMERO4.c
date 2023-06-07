/*04) Uma empresa com X funcionários precisa saber a média de seus salários. Faça um algoritmo para ler a quantidade
de funcionários e o salário de cada um e escrever a média dos salários.*/

#include<stdio.h>

main(){

int i,nf,salario,salariot=0;
float ms;

printf("Entre com o numero de funcionarios: ");
scanf("%d",&nf);

for(i=0;i<nf;i++){

printf("Digite o salario: ");
scanf("%d",&salario);

salariot=salariot+salario;

}

ms=salariot/nf;
printf("A media dos salarios: %f",ms);


}
