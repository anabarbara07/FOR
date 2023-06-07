/*05) Entrar com nome, nota da PR1 e nota da PR2 de 15 alunos. Imprimir uma listagem, contendo: nome, nota da PR1,
nota da PR2 e média de cada aluno. Ao final, calcule a média geral da turma.*/

#include<stdio.h>

main(){

float p1,p2,media,mediat=0,mediag;
char nome;
int i;

for(i=0;i<15;i++){

printf("Entre com a inicial do nome: ");
scanf("\n%c",&nome);

printf("Entre com a nota da prova 1: ");
scanf("%f",&p1);

printf("Entre com a nota da prova 2: ");
scanf("%f",&p2);

media = (p1 +p2)/2;
mediat= mediat + media;

printf("\nNome: %c", nome);
printf("\nNota prova 1: %f", p1);
printf("\nNota prova 2: %f", p2);
printf("\nMedia: %f\n\n", media);

}

mediag= mediat/15;
printf("A media geral e: %f",mediag);


}
