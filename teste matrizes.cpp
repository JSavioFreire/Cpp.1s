#include<stdio.h>
int main(){
	int coluna,linha,matriz[coluna][linha],par,impar;
	par=impar=0;
	printf("Testando matrizes.\n\n");
	for(coluna=0;coluna<2;coluna++){
		for(linha=0;linha<3;linha++){
				printf("Digite a linha %d da coluna %d da matriz\n",coluna,linha);
			scanf("%d",&matriz[coluna][linha]);
		}
	}
for(coluna=0;coluna<3;coluna++){
	for(linha=0;linha<4;linha++){
		if(linha%2==0){
			par=par+1;
			printf("\nO numero da coluna %d e linha %d e par\n",coluna,linha);
			printf("O numero e %d\n",matriz[coluna][linha]);
		}
		else{impar=impar+1;
			printf("\nO numero da coluna %d e linha %d e impar\n",coluna,linha);
			printf("O numero e %d\n",matriz[coluna][linha]);
		}
		
		
	}
		
}
	
	printf("Total de %d numeros pares e %d impares",par,impar);

	
}
