#include <stdio.h>
int main(){
	
	char nome, idade, endereco, musica, jogo, filme, diretor;
	nome = idade = endereco = musica = jogo = filme = diretor = 0;
	printf("Voce conhece o Savitinho? Vamos descobrir agora.\n");
	printf("\nQual e o nome completo do Savitinho?\n\n 1 - Jose Savio Freire Junior\n 2 - Manoel beija flor\n 3 - Jucelino Lacerda\n 4 - Jurema Judite da silva \n Assinale a opcao correta\n\n");
	scanf ("%c", &nome);
			//nome
	if (nome == '1'){
		nome = 1;
		printf("\nResposta correta.");
	}
	else {
	printf("\nResposta incorreta.");}
		
fflush(stdin); //limpa teclas
			//idade

	printf("\n\nQual e o dia do aniversario do Savitinho?\n\n 1 - 20/04/1997\n 2 - 07/10/1999\n 3 - 02/11/1998\n 4 - 24/02/1998\n\n");
	scanf("%c", &idade);
	
	if (idade == '3'){
		idade = 1;
		printf ("\nResposta correta.");
	}
	else {printf ("\nResposta incorreta.");
	}
fflush(stdin); //limpa teclas
			//endereco
	printf("\n\nQual o endereco do Savitinho?\n\n 1 - Rua Atila de Sa peixoto, Realengo.\n 2 - Rua Frascisco Mota, Campo Grande.\n 3 - Rua Jurupemba, Campo Grande.\n 4 - Estrada do Pre, Campo Grande\n\n");
	scanf("%c", &endereco);
	
	if (endereco == '2'){
		endereco = 1;
		printf ("\nResposta correta.");
	}
	else {printf("\nResposta incorreta.");
	}
fflush(stdin); //limpa teclas
			//musica
	printf("\n\nUma das musicas favoritas do SIR Savitinho e:\n\n 1 - Chorando se foi quem um dia so me fez chorar.\n 2 - 18 and life\n 3 - Boladao de amor\n 4 - Hotel California\n\n");
	scanf("%c", &musica);
	
	if ( musica == '4'){
		musica = 1;
		printf("\nResposta correta.");
	}
		else{printf("\nResposta incorreta.");
		}
fflush(stdin); //limpa teclas
			//jogo
	printf("\n\nQual e o TOP 5 jogos mais jogados e amados de Mister Savitinho?\n\n 1 - Rambo - The video game, COD Ghost, BF 2042, Cyberpunk 2077 e SuperMan 64\n 2 - Warface, Halo, Gears, Anthen e COD AD\n 3 - Zelda BOW, Elden Ring, League of legends, Rainbow Six e Red Dead 2\n 4 - Dota 2, Mario Maker, Forza, Dirt 5 e Fifa\n\n ");
	scanf("%c", &jogo);	
	
	
	if ( jogo == '3') {
		jogo = 1;
		printf("\nRespota Correta.");
	}
	else{ printf("\nResposta incorreta.");
	}
fflush(stdin); //limpa teclas
			//filme
	printf("\n\nQual e o TOP 3 filmes do magnifico Savitinho?\n\n 1 - Meninas Malvadas, Velozes e Furioso 16 e Cada um tem a irma que merece.\n 2 - Django, Forrest Gump e Corra que a policia vem ai.\n 3 - O pequenino, As branquelas e Dancando na chuva.\n 4 - Vingadores, Deadpool e o Shaolin do Sertao.\n\n ");
	scanf("%c", &filme);
	
	if (filme == '2'){
		filme = 1; 
		printf("\nResposta Correta.");
	}
	else{ printf("\nResposta incorreta.");
	}
fflush (stdin); //limpa teclas
			//diretor
	printf("\n\nQual e o diretor de cinema favorito do Savitao?\n\n 1 - Nolan\n 2 - Tarantino\n 3 - Spielberg\n 4 - Scorsese\n\n ");
	scanf ("%c", &diretor);
	
	if (diretor == '2'){
		diretor = 1;
		printf("\nResposta correta.");
		}
		else { printf("\nResposta incorreta.");
		}
	
	if ((nome == 1) && (idade == 1)&& (endereco == 1) && (musica == 1) && (jogo == 1) && (filme == 1 ) && (diretor == 1)){
	printf("\n\n\n:O voce e um verdadeiro conhecedor do Savitinho, Parabens!!! ");
		}
		else{printf("\n\n\nQue pena, voce nao conhece o Savitinho tao bem assim.");
		}
	
	}
	

