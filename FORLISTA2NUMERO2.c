/*02) Uma empresa deseja calcular o novo preço de venda de seus 150 produtos. Para isso, faça um programa que leia o
código e o preço de custo dos produtos e calcule o novo preço de venda, acrescentando 20% sobre o preço de custo*/

#include<stdio.h>

main(){

 int precoc,i,codigo;
 float npreco;

for(i=0;i<2;i++){

  printf("Digite o codigo: ");
  scanf("%d",&codigo);

  printf("Digite o preco de custo: ");
  scanf("%d",&precoc);

  npreco= precoc * 1.2;

  printf("O novo preco de custo e: %f\n\n", npreco);

}








}
