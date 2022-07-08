#include<stdio.h>
int main(){
	int num;
	
	do{
	printf("Digite um numero:\n");
	scanf("%d",&num);
	if(0==num%2){
		printf("\n\nO numero digitado e par, e seu sucesso e %d\n",num+1);
	}
	else{
		printf("\n\nO numero digitado e impar, e seu antecessor e %d\n",num-1);
	}
	}
	while(num!=0 && num!=9);
	
	
	
}
