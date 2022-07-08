#include <stdio.h>
int main(){
	int a,b;
	printf("Aqui voce pode somar qualquer valor inteiro.\nDigite dois numeros inteiros para realizarmos a soma.\n");
	scanf("%d %d", &a, &b);
	printf("O valor da soma do numero %d com o %d e igual a %d ",a,b,a+b);
}
