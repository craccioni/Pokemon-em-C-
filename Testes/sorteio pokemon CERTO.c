//Quero sortear 1 dentre 50 Pokemóns de forma aleatória, mas a função rand () escolhe apenas o 42º valor do array (o Dragonite). Existe algum jeito de não precisar usar a biblioteca time.h e a função srand(time(NULL))?

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//char aleatorio();


int main(){
	
	srand(time(NULL));
	char sorteio1[50][11] = {"Bulbasaur","Venusaur","Charmander","Charmeleon","Charizard","Pidgey","Pidgeotto","Pidgeot","Pikachu","Raichu","Clefairy","Vulpix","Ninetales","Meowth","Psyduck","Golduck","Mankey","Primeape","Growlithe","Arcanine","Abra","Kadabra","Alakazam","Magnemite","Magneton","Onix","Cubone","Marowak","Staryu","Starmie","MrMime","Jynx","Magikarp","Gyarados","Lapras","Ditto","Eevee","Vaporeon","Porygon","Snorlax","Dragonair","Dragonite","Mewtwo","Mew","Chikorita","Sentret","Furret","Hoothoot","Lanturn","Pichu"};
	
	int ;
	
	i = rand() %50;
  	
	printf ("%s\n",sorteio1[i]);    
	
	system ("Pause");
	return 0;
}


