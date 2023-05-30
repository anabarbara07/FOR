/*Desenvolver algoritmo que dado um conjunto de N números, calcular a média
aritmética dos mesmos.*/

main(){

int contador,n1,n;
float media,soma;

printf("Digite a quantidade de numeros: ");
scanf("%d",&n);

for(contador=0;contador<n;contador++){

printf("Entre com um numero: ");
scanf("%d",&n1);

  soma=soma+n1;

}

media=(soma/contador);

printf("A media e: %f",media);


}
