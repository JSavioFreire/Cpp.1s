#include<stdio.h>
int main(){
	int col,lin,mat[5][5];
	for(col=0;col<5;col++){
		for(lin=0;lin<5;lin++){
			if(col==lin){
				mat[col][lin]=0;
			}else{
				mat[col][lin]=1;
			}
		}
	}
	for(col=0;col<5;col++){
		for(lin=0;lin<5;lin++){
			printf("Matriz[%d][%d] = %d \n",col,lin,mat[col][lin]);
		}
	}
	
	
	
}
