#include<stdio.h>
int main(){
	float n1,n2,n3,media;
	int aluno;
	printf("Plataforma de notas.\n\n");
	
	for(aluno=1;aluno<=40;aluno++){
			printf("Digite a nota da avaliacao 1 do aluno %d\n",aluno);
			scanf("%f",&n1);
		
			printf("\nDigite a nota da avaliacao 2 do aluno %d\n",aluno);
			scanf("%f",&n2);
			
			printf("\nDigite a nota da avaliacao 3 do aluno %d\n",aluno);
			scanf("%f",&n3);
			
			media=(n1+n2+n3)/3;
			if(media>=7){
				printf("\n\nMedia:%.2f.O aluno %d foi aprovado!\n\n",media, aluno);
			}
			else{
				printf("Media:%.2f. O aluno %d foi reprovado\n\n",media, aluno);
			}
			
			
	
		
		
		
			}
}
	

