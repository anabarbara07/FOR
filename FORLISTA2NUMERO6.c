/*06) Entrar com 20 números e imprimir a soma dos positivos e o total de números negativos.*/

#include<stdio.h>

main(){

int i,n,tpositivo=0,tnegativo=0;

for(i=0;i<5;i++){

printf("Digite um numero: ");
scanf("%d",&n);

if(n>0){

tpositivo=n+tpositivo;

}

if(n<0){

tnegativo=tnegativo+1;

}
}

printf("Soma dos positivos: %d",tpositivo);
printf("Total de negativos: %d",tnegativo);

}
