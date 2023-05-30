#include<stdio.h>

main(){

int contador,n,soma=0;

printf("Entre com o numero final: ");
scanf("%d",&n);

for(contador=3;contador<n;contador++)
{
   soma=soma+(5*contador+2);

}
  printf("\nA soma final e: %d",soma);


}
