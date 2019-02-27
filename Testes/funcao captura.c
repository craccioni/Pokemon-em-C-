#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define MAX 300

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

	int soma(POKEBOLA *capturados);
	void mostrar(POKEBOLA *capturados);
	
	
	
	
	
	
	

int main (){
	
	POKEBOLA capturados[MAX];
	POKEBOLA *k;
	k = (POKEBOLA *)malloc(sizeof(POKEBOLA));
	mostrar(capturados);
	
	maximo ()
	
	
	printf ("%d",soma(capturados));
	free(k);
	system ("Pause");
	return 0;
}




int maximo (int n, int capturados[]) { 
   if (n == 1)
      return capturados[0];
   else {
      int x;
      x = maximo (n-1, capturados);
      // x é o máximo de v[0..n-2] 
      if (x > capturados[n-1]) return x;
      else return capturados[n-1]; 
   }
}


int soma(POKEBOLA *capturados){
	int i;
    if(capturados == 0)
        return 0;
    else
        return (capturados[i] + soma(capturados[i]-2));
        printf ("%d",capturados);
}



void mostrar(POKEBOLA *capturados) {
	int i;
	capturados[0].hp = 100; 
	capturados[0].dano = 12;            
	capturados[0].defesa = 5;       
	capturados[0].prob_defesa =6;   
	capturados[0].destreza = 3;      
	capturados[0].prob_esquiva = 1;    
	capturados[0].atcksp = 4;         
	capturados[0].penet = 2;  
	
	capturados[1].hp = 20; 
	capturados[1].dano = 13;            
	capturados[1].defesa = 5;       
	capturados[1].prob_defesa=6;   
	capturados[1].destreza = 3;      
	capturados[1].prob_esquiva = 1;    
	capturados[1].atcksp = 4;         
	capturados[1].penet = 5;  
	
	for (i=0; i<3; i++){
	//	printf("\n\n\t\t\tPokemon: %s\n\n",pokemon[i].nome);
	//	printf("\t\t\t[Peso: %.2f]\n",pokemon[i].peso);
	//	printf("\t\t\t[Altura: %.2f]\n",pokemon[i].altura);
		printf ("\n\n\t\t\t------------%d---------------\n",i);
		printf("\t\t\t\[Dano máximo: %d]\n",capturados[i].dano);
		printf("\t\t\t[Defesa: %d]\n",capturados[i].defesa);
		printf("\t\t\t[Probabilidade de defesa: %d]\n",capturados[i].prob_defesa);
		printf("\t\t\t[HP máximo: %d]\n",capturados[i].hp);
		printf("\t\t\t[Destreza: %d]\n",capturados[i].destreza);
		printf("\t\t\t[Taxa de esquiva: %d]\n",capturados[i].prob_esquiva);
		printf("\t\t\t[Velocidade de ataque: %d]\n",capturados[i].atcksp);
		printf("\t\t\t[Penetração de armadura: %d]\n",capturados[i].penet);	
	}
}




/*

void capturaPokemons(POKEBOLA *capturado) {
	int i;
	
	for (i=0; i<2; i++){
	//	printf("\n\n\t\t\tPokemon: %s\n\n",capturado[i].nome);
	//	printf("\t\t\t[Peso: %.2f]\n"capturado[i].peso);
	//	printf("\t\t\t[Altura: %.2f]\n",capturado[i].altura);
		printf("\t\t\t[Dano máximo: %d]\n",capturado[i].dano);
		printf("\t\t\t[Defesa: %d]\n",capturado[i].defesa);
		printf("\t\t\t[Probabilidade de defesa: %d]\n",capturado[i].prob_defesa);
		printf("\t\t\t[HP máximo: %d]\n",capturado[i].hp);
		printf("\t\t\t[Destreza: %d]\n",capturadoi].destreza);
		printf("\t\t\t[Taxa de esquiva: %d]\n",capturado[i].prob_esquiva);
		printf("\t\t\t[Velocidade de ataque: %d]\n",capturado[i].atcksp);
		printf("\t\t\t[Penetração de armadura: %d]\n",capturado[i].penet);			
	}
}*/
