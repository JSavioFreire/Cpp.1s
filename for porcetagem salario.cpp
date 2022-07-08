#include <stdio.h>
int main(){
	float atual, pnovo, novo, maior;
	int cont;
	
	printf("Digite a porcentagem do reajuste do salario da empresa\n",cont);
	scanf("%f",&pnovo);
	
	for (cont=1; cont<=50; cont++){
		printf("\nDigite o salario atual do colaborador %d\n",cont);
		scanf("%f",&atual);
		novo=atual+(atual*pnovo/100);
		printf("o salario do colaborador %d sera %.2f\n\n",cont,novo);
		
		if(maior<novo){
			maior=novo;
		}
	
		}
	
	printf("\n\nO maior salario da empresa e %.2f", maior);
	
	
	
}
