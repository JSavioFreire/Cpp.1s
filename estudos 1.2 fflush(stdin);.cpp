#include <stdio.h>
int main(){
char ch1, ch2;
printf("Entre com duas letras:\n");
scanf("%c", &ch1);
fflush(stdin); //limpa o teclado e nao permite que o ENTER seja uma tecla.
scanf("%c", &ch2);
printf("As letras inseridas foram %c e %c.\n", ch1, ch2);
}
