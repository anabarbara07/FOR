/*04) Uma empresa com X funcion�rios precisa saber a m�dia de seus sal�rios. Fa�a um algoritmo para ler a quantidade
de funcion�rios e o sal�rio de cada um e escrever a m�dia dos sal�rios.*/

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
