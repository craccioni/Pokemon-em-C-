#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define MAX 100
typedef struct {
					
					char nome[15];
					char tipo[15];
					float altura;        
					float peso;
					int hp;              //A vida do personagem.
					int dano;            //Dano que o pokemon pode causar.
					int defesa;          //Pontos de dano que o pokemon pode defender.
					int	prob_defesa;     //Frequ�ncia ele defende os ataques.
					int	destreza;        //Diminui as probabilidades de esquiva do inimigo.
					int	prob_esquiva;    //Frequencia o personagem desvia dos ataques.
					int	atcksp;          //Velocidade de Ataque: frequ�ncia de ataque.
					int	penet;           //Penetra��o M�gica: diminui a defesa do pokemom oponente.
			}POKEBOLA;


typedef struct {
					char nome[15];
					char pokemons[MAX];
			}JOGADOR; 
			
void preenche(POKEBOLA *ptr);
int atacar (POKEBOLA *pokemon1, POKEBOLA *pokemon2);







int main (){
	
	setlocale (LC_ALL,"Portuguese");
	POKEBOLA pokemon[2];
		JOGADOR treinador[2];
	preenche (pokemon);
	int armor1,armor2;
	
	
	
	atacar (pokemon, pokemon+1);

	armor1 = 100000;
			armor2 = 100000;
			
			while ((pokemon[0].hp > 0) || (pokemon[1].hp > 0)) {
				armor1 = armor1 - (pokemon[0].atcksp);
				if (armor1 < 1) {
					atacar(pokemon, pokemon+1);  ///FUNCAO ATACAR
					armor1 = 100000;
				}
				if ((pokemon[1].hp) < 1){
					break;
				}
				armor2 = armor2 - (pokemon[1].atcksp);
				if (armor2 < 1) {
					atacar( pokemon, pokemon+1); /// FUNCAO ATACAR
					armor2 = 100000;
				}
				if ((pokemon[0].hp) < 1){
					break;
				}		
			}
			
			if ((pokemon[0].hp) < 1) {
				printf("%s ganhou a batalha!\n", pokemon[0].nome);
				return 0;
			}
		
			if ((pokemon[1].hp) <1) {
				printf ("%s ganhou a batalha!\n", pokemon[1].nome);
				return 0;
			}
	
}








int atacar (POKEBOLA *pokemon, POKEBOLA *pokemon2) {
int esquiva_x, per;
esquiva_x = pokemon[1].prob_esquiva - pokemon[0].destreza;
		        per = rand() % 100; //GERA VALOR ALEAT�RO DE 0 a 100
		        if (per <= esquiva_x) {
		            printf("%s esquivou o ataque de %s.\n", pokemon[1].nome, pokemon[0].nome);
		            return 0;
				}
			}	    


void preenche (POKEBOLA *pokemon){
	int i;
		for (i=0; i<2; i++){	
			printf ("Jogador n�mero %d, qual � o seu nome de Treinador?",i+1);
			scanf (" %s",&treinador[i].nome);
			printf ("Quais s�o os nomes de seus Pokem�ns?");
			scanf (" %s",&treinador[i].pokemons);						
			printf ("\nJogador %d, \nQual Pok�mon voc� escolher� para a batalha? ",i);
			scanf (" %s",&pokemon[i].nome);
			printf ("Qual � o tipo do seu Pok�mon? ");
			scanf (" %s",&pokemon[i].tipo);	
			printf ("Qual � o peso do seu Pok�mon? ");
			scanf ("%f",&pokemon[i].peso);
			printf ("Qual � a altura do seu Pok�mon? ");
			scanf ("%f",&pokemon[i].altura);
			printf ("Qual � o valor de vida total do seu Pok�mon? ");
			scanf ("%d",&pokemon[i].hp);			
			printf ("Qual � o dano m�ximo do seu Pok�mon? ");
			scanf ("%d",&pokemon[i].dano);
			printf ("Qual � o valor de defesa do seu Pok�mon? ");
			scanf ("%d",&pokemon[i].defesa);
			printf ("Qual � a probailidade de defesa do seu Pok�mon? ");
			scanf ("%d",&pokemon[i].prob_defesa);
			printf ("Qual � a destreza do seu Pok�mon? ");
			scanf ("%d",&pokemon[i].destreza);
			printf ("Qual � a probabiliadade de esquiva do seu Pok�mon? ");
			scanf ("%d",&pokemon[i].prob_esquiva);
			printf ("Qual � a velocidade de ataque do seu Pok�mon? ");
			scanf ("%d",&pokemon[i].atcksp);
			printf ("Qual � o valor de penetra��o m�gica do seu Pok�mon? ");
			scanf ("%d",&pokemon[i].penet);
			}
			
		printf ("%s vs %s",pokemon[0].nome, pokemon[1].nome);
		
		for (i=0; i<2; i++){
			printf("---%s---\n",pokemon[i].nome);
			printf(" [Peso: %.2f]\n",pokemon[i].peso);
			printf("[Altura: %.2f]\n",pokemon[i].altura);
			printf("[Dano m�ximo: %d]\n",pokemon[i].dano);
			printf("[Defesa: %d]\n",pokemon[i].defesa);
			printf("[Probabilidade de defesa: %d]\n",pokemon[i].prob_defesa);
			printf("[HP m�ximo: %d]\n",pokemon[i].hp);
			printf("[Destreza: %d]\n",pokemon[i].destreza);
			printf("[Taxa de esquiva: %d]\n",pokemon[i].prob_esquiva);
			printf(" [Velocidade de ataque: %d]\n",pokemon[i].atcksp);
			printf("[Penetra��o M�gica: %d]\n",pokemon[i].penet);			
		}
		
 		
		
}	

