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

int mostrarhp1(int hp1, int dano2);
int mostrarhp2(int hp2, int dano1);
void goblinBattle();

int main (){
	
	
	POKEBOLA pokemon[2];
	int i, dano_x, defesa_x, per, op;

	   	 		
	/*	for (i=0; i<2; i++){	
							
			printf ("\nJogador %d, \nQual Pokémon você escolherá para a batalha? ",i);
			scanf (" %s",&pokemon[i].nome);
			printf ("Qual é o valor de vida total do seu Pokémon? ");
			scanf ("%d",&pokemon[i].hp);			
			printf ("Qual é o dano máximo do seu Pokémon? ");
			scanf ("%d",&pokemon[i].dano);
			printf ("Qual é o valor de defesa do seu Pokémon? ");
			scanf ("%d",&pokemon[i].defesa);
		}*/
		
		int battle;
		    printf ("\nYou see a goblin in the distance. Attack goblin?\n Yes = 1\n No = 2\n");
		    scanf ("%d", &battle);
		    if(battle==1)
		    {
		        goblinBattle();
		    }
		    else if(battle==2)
		    {
		        printf ("You chose to not attack the goblin.\n");
		    }
		    else
		    {
		        printf ("That is not a valid choice.\n\n");
		        return main();
		    }
		
			
		
		
	
																      
		      
		      
	
	system ("Pause");
	return 0;
	
}
void goblinBattle(){
	int hitGoblin;
	int hp1 = 100, hp2 = 100, dano1 = 20, dano2 = 21;

		
		   do {
		    printf("\nHit Pokemon 2?\n Yes = 1\n No = 2\n");
		    scanf ("%d", &hitGoblin);
		    if (hitGoblin == 1)
		    {
		    hp2 = mostrarhp2(hp2, dano1);
		    hp1 = mostrarhp1(hp1, dano2);
		    printf ("\nYou hit the goblin.\n");
		    printf ("Pokemon 2 now has %d HP left.\n\n",hp2);
		     if(hp2 <= 0)
		     {
		        printf("Pokemon 1 venceu\n");
		     }
		     else if(hp2 > 0)
		     {
		       printf ("The goblin hit you back.\n");
		       printf ("You now have %d hp left.\n\n",hp1);
		     }
		    }
		    else if(hitGoblin == 2)
		    {
		        printf ("You chose not to hit the goblin so he hit you instead\n");
		        printf ("You now have %d hp1 left.\n\n",mostrarhp1(hp1, dano2));
		    }
		    else
		    {
		        printf ("That is not a valid choice.\n\n");
		        return goblinBattle();
		    }
		
		   } while (hp1 > 0 && hp2 > 0);
}
		  

										int mostrarhp2(int hp2, int dano1){
											    hp2 = hp2 - dano1;
											    return hp2;
											}
										int mostrarhp1(int hp1, int dano2){
										    hp1 = hp1 - dano2;
										    return hp1;
										}

					
