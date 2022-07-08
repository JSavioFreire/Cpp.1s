#include<stdio.h>
int main(){
	const int constante=5, scontante=3; //facilita caso precise mudar a quantidades de vezes que vou repetir o for
	int posi,vet[posi], achou, verificar,sposi,pesquisa;
		printf("\nDigite %d numeros inteiros:\n",constante); //caso mude a quantidade de vezes para repetir o for, tmb muda o printf
			for(posi=0;posi<constante;posi++){
				scanf("%d",&vet[posi]);
				}
	
	for(sposi=0;sposi<=scontante;sposi++){
	achou=0;
	verificar=0;
		printf("\n\nDigite um numero que deseja encontrar:\n");
		scanf("%d",&pesquisa);
		while(verificar<=constante && achou==0){
			if (pesquisa==vet[posi]){
				achou++;
				if(achou!=0){
				printf("Numero encontrado na posicao %d",verificar);
			}
			else{
				printf("Numero nao encontrado");
			}
			}
			else{
				verificar++;
			}
		
			
			
		}
		
	
		
	}
		
	
	
	
	
}
