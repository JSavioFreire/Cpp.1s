#include <stdio.h>
int main(){
	float n1, n2, n3, media;
	int cont;
	for (cont=1;cont<=40;cont++){
		printf("Digite as 3 notas do aluno %d:\n", cont);
		scanf("%f%f%f",&n1,&n2,&n3);
		media=(n1+n2+n3)/3;
		
		if(media>=7){
			printf("Aluno %d aprovado, media: %.2f\n\n",cont, media);
		}
		else
			printf("Aluno %d reprovado, media: %.2f\n\n",cont, media);
		
	
		
		
		
	}
	
	
	
	
}
