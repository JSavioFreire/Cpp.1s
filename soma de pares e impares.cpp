#include<stdio.h>
int main(){
	int numero, impar, par, cont;
	impar=par=0;
	for(cont=1;cont<=10;cont++){
		printf("Digite 10 numeros:\n");
		scanf("%d",&numero);
if(0==numero%2){
	par=par+numero;
}
else 
	impar=impar+numero;
	}
	printf("A soma de todos os numeros pares e %d\n E impar e %d",par,impar);
	
}
