/*01) Criar um algoritmo que leia a idade e sexo (0-masculino, 1- feminino) de várias pessoas. Calcule e imprima a idade
média, total de pessoas do sexo feminino com idade entre 30-45 inclusive e o número total de pessoas do sexo
masculino. O algoritmo termina quando se digita 0 para a idade. */

#include<stdio.h>

main(){

int idade,sexo,i,tidade=0,msexo=0,fsexo=0,pessoasf=0;
float midade;

for(i = 0; i<2; i++){
printf("\nDigite a idade: ");
scanf("%d",&idade);

printf("0-Masculino\n1-Feminino\nDigite o sexo: ");
scanf("%d",&sexo);

tidade= tidade+idade;

switch(sexo){

case 0: msexo= msexo + 1; break;

case 1: fsexo= fsexo + 1; break;

}
if((sexo=1)&&(idade>30)&&(idade<45))
    pessoasf=pessoasf+1;
}

midade = tidade/2;

printf("\nA idade media e: %f",midade);
printf("\nPessoas do sexo feminino com idade entre 30-40: %d",pessoasf);
printf("\nPessoas do sexo masculino: %d", msexo);




}
