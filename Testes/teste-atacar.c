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
					int	prob_defesa;     //Frequência ele defende os ataques.
					int	destreza;        //Diminui as probabilidades de esquiva do inimigo.
					int	prob_esquiva;    //Frequencia o personagem desvia dos ataques.
					int	atcksp;          //Velocidade de Ataque: frequência de ataque.
					int	penet;           //Penetração Mágica: diminui a defesa do pokemom oponente.
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
		        per = rand() % 100; //GERA VALOR ALEATÓRO DE 0 a 100
		        if (per <= esquiva_x) {
		            printf("%s esquivou o ataque de %s.\n", pokemon[1].nome, pokemon[0].nome);
		            return 0;
				}
			}	    


void preenche (POKEBOLA *pokemon){
	int i;
		for (i=0; i<2; i++){	
			printf ("Jogador número %d, qual é o seu nome de Treinador?",i+1);
			scanf (" %s",&treinador[i].nome);
			printf ("Quais são os nomes de seus Pokemóns?");
			scanf (" %s",&treinador[i].pokemons);						
			printf ("\nJogador %d, \nQual Pokémon você escolherá para a batalha? ",i);
			scanf (" %s",&pokemon[i].nome);
			printf ("Qual é o tipo do seu Pokémon? ");
			scanf (" %s",&pokemon[i].tipo);	
			printf ("Qual é o peso do seu Pokémon? ");
			scanf ("%f",&pokemon[i].peso);
			printf ("Qual é a altura do seu Pokémon? ");
			scanf ("%f",&pokemon[i].altura);
			printf ("Qual é o valor de vida total do seu Pokémon? ");
			scanf ("%d",&pokemon[i].hp);			
			printf ("Qual é o dano máximo do seu Pokémon? ");
			scanf ("%d",&pokemon[i].dano);
			printf ("Qual é o valor de defesa do seu Pokémon? ");
			scanf ("%d",&pokemon[i].defesa);
			printf ("Qual é a probailidade de defesa do seu Pokémon? ");
			scanf ("%d",&pokemon[i].prob_defesa);
			printf ("Qual é a destreza do seu Pokémon? ");
			scanf ("%d",&pokemon[i].destreza);
			printf ("Qual é a probabiliadade de esquiva do seu Pokémon? ");
			scanf ("%d",&pokemon[i].prob_esquiva);
			printf ("Qual é a velocidade de ataque do seu Pokémon? ");
			scanf ("%d",&pokemon[i].atcksp);
			printf ("Qual é o valor de penetração mágica do seu Pokémon? ");
			scanf ("%d",&pokemon[i].penet);
			}
			
		printf ("%s vs %s",pokemon[0].nome, pokemon[1].nome);
		
		for (i=0; i<2; i++){
			printf("---%s---\n",pokemon[i].nome);
			printf(" [Peso: %.2f]\n",pokemon[i].peso);
			printf("[Altura: %.2f]\n",pokemon[i].altura);
			printf("[Dano máximo: %d]\n",pokemon[i].dano);
			printf("[Defesa: %d]\n",pokemon[i].defesa);
			printf("[Probabilidade de defesa: %d]\n",pokemon[i].prob_defesa);
			printf("[HP máximo: %d]\n",pokemon[i].hp);
			printf("[Destreza: %d]\n",pokemon[i].destreza);
			printf("[Taxa de esquiva: %d]\n",pokemon[i].prob_esquiva);
			printf(" [Velocidade de ataque: %d]\n",pokemon[i].atcksp);
			printf("[Penetração Mágica: %d]\n",pokemon[i].penet);			
		}
		
 		
		
}	

