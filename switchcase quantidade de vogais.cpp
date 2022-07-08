#include<stdio.h>
int main(){
	char let;
	int ca,ce,ci,co,cu;
	ca=ce=ci=co=cu=0;
	
	while(let!='.'){
	printf("Digite uma letra aleatoria:\n");
	scanf("%c",&let);
	switch(let){
		case 'a':
			ca++; break;
		case 'e':
			ce++;break;
		case 'i':
			ci++;break;
		case 'o':
			co++;break;
		case 'u':
			cu++;break;
		
	}
	}
	printf("\n\nDigitou um total de %d A, %d E, %d I, %d O, %d U.\n",ca,ce,ci,co,cu);
	
	
	
	
	
}
