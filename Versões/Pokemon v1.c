#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

typedef struct {
		char nome[15];
		char tipo[10];
		int ataque1;
		int ataque2;
		int hp1;
		int defesa2;		
		float altura;
		float peso;
	}POKEMON;

int main (){ 
	
	setlocale (LC_ALL,"Portuguese");
	POKEMOM vetor[2];
	int i, opcao2;
	char vencedor;
	
	for (i=0; i>=2; i++){
		
		
	}
	
	pikachu[0].ataque1 = 
	
	
	
	
	system("color 37");
	printf ("\t\t\t\t\t\t\t\t\t\t\t  8");
	printf("\n\n\n\t\t__________________________________________________________\n");
    printf("\t\t\t__________________________________________________________\n");
    printf("\t\t\t__________________________________________________________\n");
    printf("\t\t\t__________________________________________________________\n");
    printf("\t\t\t__________________                    ____________________\n");
    printf("\t\t\t__________________      POKEMON       ____________________\n");
    printf("\t\t\t__________________       em C++       ____________________\n");
    printf("\t\t\t__________________________________________________________\n");
    printf("\t\t\t__________________________________________________________\n");
    printf("\t\t\t__________________________________________________________\n");
    printf("\t\t\t__________________________________________________________\n\t\t\t\t\t\n\n");
    printf("\t\t\tEscolha uma das opções abaixo:\n\n");
    printf("\t\t\t 1 Jogar.\n\t\t\t 2 Ajuda.\n\t\t\t 3 Histórico.\n\t\t\t 4 Sair.\n\n");
    printf("\t\t\tOpção: ");
    scanf("%d",&opcao2);
    system("cls");
    switch(opcao2){
                case 1:
                     system("color 67");
                     printf("\n\n\t\tINFORME O NOME DO JOGADOR PECA PRETA:\n\n\t\t\t\t");
                     scanf("%s",jogoPokemon.jogador1);
                     printf("\n\n\t\tINFORME O NOME DO JOGADOR PECA BRANCA:\n\n\t\t\t\t ");
                     scanf("%s",POKEMON.jogador2);
                     
                     
                     //CONTA O TEMPO EM SEGUNDOS....
                     int tempo = clock();
                      while(clock()-tempo<5000)
                      {
                                               
                      jogador=1;oposto=2;
                      jogador1(matriz,jogador,oposto);
                      jogador=2;oposto=1;
                      jogador1(matriz,jogador,oposto);
                      }
                     system("cls");
                     system("color 20");
                     desenho4();//CHAMADA DA FUNCAO DESENHO BONECO.
                     printf("\n\t\t..........PASSARAM 3 MINUTOS FIM DO JOGO...........\n\n\n");//APARECE NA TELA QUANDO TERMINA O TEMPO
                         ganhador(matriz);//CHAMADA DA FUNCAO GANHADOR .........
                         registro();//CHAMADA DA FUNCAO REGITRO ...RESPONSAVEL POR GRAVAR AS INFORMACOES*/ 
                     system("pause");
                     system("cls");
                     break;
                case 2:
                     system("color 90");
                     printf("\n_____________________________O QUE É O JOGO?_______________________________");
                     printf("\n\t     O jogo de Damas e constituido por um Tabuleiro quadratico,\n\tdividido em 64 quadrados,com 24 Pecas,sendo 12 de cor branca\n\te 12 de cor preta. Exitem  8 linhas que estao na posicao  vertical,\n\te com 8 culunas na posicao horizantal.\n");
                     printf("\n_____________________________  O OBJETIVO  _______________________________");
                     printf("\n\n\t      Comer o maior Numero de Pecas Possiveis.Quem \n\tDurante os 3 Minutos tiver  mais Pecas e o Vencedor!\n\n");
                     
                     printf("\n______________________________REGRAS O JOGO_________________________________");
                     printf("\n\n\t1-Nao e permitido comer para tras.\n\t2-Pode comer uma peca,nao duas de uma vez.\n\t3-So anda uma casa por vez.\n\t4- O Jogo dura  3 Minutos.\n\t5-Nao e permitido Jogar com uma Peca do adversario.\n");
                     printf("____________________________________________________________________________\n\n");
                     system("pause");
                     system("cls");
                     break;
                case 3:
                     system("color 80");
                     system("pause");
                     system("cls");
                       /* escreve();//CHAMADA DA FUNCAO ESCREVE....LA VAI APARECER NA O ARQUIVO DO JOGO....*/
                     system("pause");
                     system("cls");
                     break;
                case 4://PARA SAIR DO JOGO......
                     system("color 70");
                     printf("\n\n\n\n\t\t\t  FIM DE JOGO\n\n\n\n\n");
                     break;
    }


}


