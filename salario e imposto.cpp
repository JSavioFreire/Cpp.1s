#include <stdio.h>
int main(){
	float salario, imposto, liquido, totalbrt, totalimp, totalliq;
	int cont;
	
	for(cont=1;cont<=15;cont++){
		printf("Digite o salario bruto do funcionario %d\n",cont);
		scanf("%f",&salario);
		
		if(salario<=999){
			imposto=10*salario/100;
			liquido=salario-imposto;
		}else
		if(salario<=1999){
			imposto=15*salario/100;
			liquido=salario-imposto;
		}else
		if(salario<=9999){
			imposto=20*salario/100;
			liquido=salario-imposto;
		}else
		if(salario<=99999){
			imposto=25*salario/100;
			liquido=salario-imposto;
		}
		else{
			imposto=30*salario/100;
			liquido=salario-imposto;
		}
	totalbrt=totalbrt+salario;
	totalimp=totalimp+imposto;
	totalliq=totalliq+liquido;
	
			
	printf("O salario liquido do funcionario %d e %.2f\nO total de imposto pago pelo funcionario e %.2f\n\n",cont,liquido,imposto);
	
		
		
		
	}
	printf("O total pago em salario bruto e %.2f \nTotal de imposto pago e %.2f\nTotal de valor pago e %.2f",totalbrt,totalimp,totalliq);
	
	
	
	
}
