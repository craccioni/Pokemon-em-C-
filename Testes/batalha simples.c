#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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


int main (){
	
	
	POKEBOLA pokemon[2];
	int i, dano_x, defesa_x, per, op;
	
	   	 		
	   	 		
	   	 		
		for (i=0; i<2; i++){	
							
			printf ("\nJogador %d, \nQual Pokémon você escolherá para a batalha? ",i);
			scanf (" %s",&pokemon[i].nome);
			printf ("Qual é o valor de vida total do seu Pokémon? ");
			scanf ("%d",&pokemon[i].hp);			
			printf ("Qual é o dano máximo do seu Pokémon? ");
			scanf ("%d",&pokemon[i].dano);
			printf ("Qual é o valor de defesa do seu Pokémon? ");
			scanf ("%d",&pokemon[i].defesa);
		}
	   	 		
	   	 		
	   	 		
	   	 		
	   	 		
	   	 		
	   	 		
		        while ((pokemon[0].hp) || (pokemon[1].hp) >= 0){
		        	if (pokemon[0].dano > pokemon[1].defesa){
					dano_x = pokemon[0].dano - pokemon[1].defesa;
					pokemon[1].hp = pokemon[1].hp - dano_x;
					printf("%s sofreu um dano de %d",pokemon[1].nome, dano_x);
					} 
					if (pokemon[1].dano > pokemon[0].defesa){
						dano_x = pokemon[1].dano - pokemon[0].defesa;
						pokemon[0].hp = pokemon[0].hp - dano_x;
						printf ("%s sofreu um dano de %d",pokemon[0].nome, dano_x);
					}
					else {
						printf("O dano e a defesa se anularam");
					}					
				}
				if (pokemon[0].hp == 0){
						printf ("Pokemon 2 ganhou");
					}else
					printf("pokemon1 ganhou");
	
	system ("Pause");
	return 0;
	
}

					
					
					
