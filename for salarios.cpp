#include <stdio.h>
int main(){
	int cont;
	float salario, media, maior, total;
	
	
	for(cont=1;cont<=10;cont++){
		printf("Digite o salario:");
		scanf("%f" ,&salario);
		total=total+salario;
		media=total/10;
		if (salario>maior){
			maior=salario;
		}
		}
printf("o maior salario e %.2f\no total de salarios e %.2f\na media de salarios e %.2f",maior, total, media);
	
	
}
