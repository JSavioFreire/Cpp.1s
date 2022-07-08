#include<stdio.h>
int main(){
	float nota[20],total,media;
	int posi;
	total=media=0;
	printf("RELATORIO DE NOTAS\n\n");
		for(posi=0;posi<20;posi++){
			printf("\nDigite a nota do aluno %d:",posi+1);
			scanf("%f",&nota[posi]);
			total=total+nota[posi];
			}
	media=total/20;
	printf("\n\nA media da turma e: %.2f\n",media);
		for(posi=0;posi<20;posi++){
			if(nota[posi]>media){
				printf("aluno %d acima da media da turma, nota %.2f\n",posi+1,nota[posi]);
			}else{
				printf("aluno %d abaixo da media da turma, nota %.2f\n",posi+1,nota[posi]);
			}
			
		}
	
		
		
		
	}
	
	
	
	

