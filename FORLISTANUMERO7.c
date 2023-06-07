/*07) Criar um algoritmo que receba a idade e o peso de 20 pessoas. Calcular e imprimir as médias dos pesos das pessoas
da mesma faixa etária. As faixas etárias são: de1 a 10 anos, de 11 a 20 anos, de 21 a 30 anos e maiores de 30 anos.*/

#include<stdio.h>

main(){

int idade,peso,f1=0,f2=0,f3=0,f4=0,np=0,np1=0,np2=0,np3=0,i;
float media1,media2,media3,media4;

for(i=0;i<5;i++){

printf("Entre com a idade: ");
scanf("%d",&idade);

printf("Entre com o peso: ");
scanf("%d",&peso);

if(idade<10){

  f1=f1+peso;
  np=np+1;
}

if((idade>10)&&(idade<=20)){

  f2=f2+peso;
  np1=np1+1;

}

if((idade>20)&&(idade<=30)){

  f3=f3+peso;
  np2=np2+1;

}

if(idade>30){

  f4=f4+peso;
  np3=np3+1;

}

}

media1=f1/np;
media2=f2/np;
media3=f3/np;
media4=f4/np;

printf("\nMedia de ate 10 anos: %f",media1);
printf("Media de 11 a 20 anos: %f",media2);
printf("Media de 21 a 30 anos: %f",media3);
printf("Media de maiores de 30 anos: %f",media4);








}
