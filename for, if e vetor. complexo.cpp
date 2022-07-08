#include<stdio.h>
int main(){
	int vetor[50],svetor[50],posi;
	for(posi=0;posi<50;posi++){
		scanf("%d",&vetor[posi]);
		if(vetor[posi]%2==0){
			svetor[posi]=vetor[posi]+1;
		}else{
			svetor[posi]=vetor[posi]-1;
		}
	}
	for(posi=0;posi<50;posi++){
		printf("%d,",vetor[posi]);
		printf("%d,",svetor[posi]);
		
	}
	
	
	
	
}
