#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#define MAX 50

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
					int	penet;           //Penetração de Armadura: diminui a defesa do pokemom oponente.
			}POKEBOLA;
	
void captura(POKEBOLA *capturados);		
			
int main () {
	
	srand(time(NULL));
	POKEBOLA capturados[MAX];
	char capturar;
	
	captura(capturados);
	//show(capturados);


	printf ("%d",capturados[0].altura);

	system ("Pause");
	return 0;
}
	

void captura(POKEBOLA *capturados){
	
	int i;
	char capturar;
	
	printf ("Um Pokemon apareceu, deseja tentar capturá-lo? (s/n)\n");
		scanf ("%s",&capturar);
	
		if (capturar == 's'){
		
			for (i=0; i<3; i++){
				
				char sorteio1[50][11] = {"Bulbasaur","Venusaur","Charmander","Charmeleon","Charizard","Pidgey","Pidgeotto","Pidgeot","Pikachu","Raichu","Clefairy","Vulpix","Ninetales","Meowth","Psyduck","Golduck","Mankey","Primeape","Growlithe","Arcanine","Abra","Kadabra","Alakazam","Magnemite","Magneton","Onix","Cubone","Marowak","Staryu","Starmie","MrMime","Jynx","Magikarp","Gyarados","Lapras","Ditto","Eevee","Vaporeon","Porygon","Snorlax","Dragonair","Dragonite","Mewtwo","Mew","Chikorita","Sentret","Furret","Hoothoot","Lanturn","Pichu"};
				int snome = rand() %50;	//SORTEIO DO NOME 
				printf("\n\t\t\tUm %s foi capturado!\n\n",sorteio1[snome]);
				//capturados[0].nome = sorteio1[snome]; //ATRIBUIÇÃO DO ALEATÓRIO PARA A STRUCT
				//printf ("%s",capturados[0].nome);	
				float resA, maxA = 12.9, minA = 0.1;	//SORTEIO ALTURA
				resA = minA + rand() * (maxA - minA) / RAND_MAX;
				printf("\t\t\t[Altura: %.2f]\n",resA);
				capturados[i].altura = resA;	
				float resP, maxP = 10.1, minP = 0.6; 	//SORTEIO PESO
				resP = minP + rand() * (maxP - minP) / RAND_MAX;
				printf("\t\t\t[Peso: %.2f]\n",resP);	
				int resHP, maxHP = 150, minHP = 100;	//SORTEIO HP
				resHP = minHP + rand() * (maxHP - minHP) / RAND_MAX;
				printf("\t\t\t[Vida: %d]\n",resHP);	
				int resD, resDE, resPDE, resDS, resPE, resAS, resPN, max = 1, min = 20;//SORTEIO DANO
				resD = min + rand() * (max - min) / RAND_MAX;
				printf("\t\t\t[Dano máximo: %d]\n",resD);		
				resDE = min + rand() * (max - min) / RAND_MAX;	//SORTEIO DEFESA
				printf("\t\t\t[Defesa: %d]\n",resDE);		
				resPDE = min + rand() * (max - min) / RAND_MAX;	//SORTEIO PROB_DEFESA
				printf("\t\t\t[Probabilidade de defesa: %d]\n",resPDE);	
				resDS = min + rand() * (max - min) / RAND_MAX;	//SORTEIO DESTREZA
				printf("\t\t\t[Destreza: %d]\n",resDS);		
				resPE = min + rand() * (max - min) / RAND_MAX;	//SORTEIO PROB_ESQUIVA
				printf("\t\t\t[Taxa de esquiva: %d]\n",resPE);		
				resAS = min + rand() * (max - min) / RAND_MAX;	//SORTEIO ATAQUE SPEED
				printf("\t\t\t[Velocidade de ataque: %d]\n",resAS);	
				resPN = min + rand() * (max - min) / RAND_MAX;	//SORTEIO PENETRAÇÃO
				printf("\t\t\t[Penetração de armadura: %d]\n",resPN);
			} 
		} else {
			printf ("\n\t\t\tO pokemón escapou\n");
			system("cls");	
		}
} 

void mostrar(POKEBOLA *capturados) {
	int i;
	
	for (i=0; i<2; i++){
		printf("\n\n\t\t\tPokemon: %s\n\n",capturados[i].nome);
		printf("\t\t\t[Peso: %.2f]\n",capturados[i].peso);
		printf("\t\t\t[Altura: %.2f]\n",capturados[i].altura);
		printf("\t\t\t[Dano máximo: %d]\n",capturados[i].dano);
		printf("\t\t\t[Defesa: %d]\n",capturados[i].defesa);
		printf("\t\t\t[Probabilidade de defesa: %d]\n",capturados[i].prob_defesa);
		printf("\t\t\t[HP máximo: %d]\n",capturados[i].hp);
		printf("\t\t\t[Destreza: %d]\n",capturados[i].destreza);
		printf("\t\t\t[Taxa de esquiva: %d]\n",capturados[i].prob_esquiva);
		printf("\t\t\t[Velocidade de ataque: %d]\n",capturados[i].atcksp);
		printf("\t\t\t[Penetração de armadura: %d]\n",capturados[i].penet);			
	}
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*for (i=0; i<2; i++){
		printf("\n\n\t\t\tPokemon: %s\n\n",novoPokemon[i].nome);
		printf("\t\t\t[Peso: %.2f]\n",novoPokemon[i].peso);
		printf("\t\t\t[Altura: %.2f]\n",novoPokemon[i].altura);
		printf("\t\t\t[Dano máximo: %d]\n",novoPokemon[i].dano);
		printf("\t\t\t[Defesa: %d]\n",novoPokemon[i].defesa);
		printf("\t\t\t[Probabilidade de defesa: %d]\n",novoPokemon[i].prob_defesa);
		printf("\t\t\t[HP máximo: %d]\n",novoPokemon[i].hp);
		printf("\t\t\t[Destreza: %d]\n",novoPokemon[i].destreza);
		printf("\t\t\t[Taxa de esquiva: %d]\n",novoPokemon[i].prob_esquiva);
		printf("\t\t\t[Velocidade de ataque: %d]\n",novoPokemon[i].atcksp);
		printf("\t\t\t[Penetração de armadura: %d]\n",novoPokemon[i].penet);			
	}	
	*/
	

/*		
void captura(){
	
	int prob;
	prob = rand() %10;
	if (prob == 1 || 4 || 8){
		printf ("O Pokémon escapou!");
		printf("\t\t\t 1. Nova Captura \n\t\t\t 2. Batalhar\n\t\t\t 3. Ajuda\n\t\t\t 4. Sair do Jogo\n\n");
		printf ("\t\t\t Opção: ");
		scanf("%c",&opcao);
		system("cls");
		getchar();	
	}
	else {
		captura ()
*/
					
