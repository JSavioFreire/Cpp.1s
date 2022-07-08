#include<stdio.h>
int main(){
	int vet[5]{0,0,0,0,0}, posi;
	char letra;
	while(letra!='z'){
		printf("Digite uma letra aleatoria\n");
			scanf("%c",&letra);
			printf("uhuul");
	switch(letra){
		case 'a': vet[0]++;
		break;
		case 'e': vet[1]++;
		break;
		case 'i': vet[2]++;
		break;
		case 'o': vet[3]++;
		break;
		case 'u': vet[4]++;
	}
}
	printf("Foram digitados %d a, %d e, %d i, %d o, %d u.",vet[0],vet[1],vet[2],vet[3],vet[4]);
	
	
	
	
}
