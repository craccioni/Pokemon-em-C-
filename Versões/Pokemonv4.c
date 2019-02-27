#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 300

//----------------------------------------------------------------------------------------------ESTRUTURAS-----------------------------------------------------------------------------------------------
			
			typedef struct {
					char nome[15];
					char pokemons[MAX];
			}JOGADOR;
			
			typedef struct {
					JOGADOR treinador;
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
			
			typedef struct {
					JOGADOR treinador;
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
			}CAPTURADOS;
								
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------PROTÓTIPOS DE FUNÇÃO-----------------------------------------------------------------------------------------
			
			
			void mew (char fim);
			void pikachu (char inicio);	
			void capturar (pokemon,n);
			void preencher (POKEBOLA *pokemon, JOGADOR *ptr);
			void mostrar (POKEBOLA *pokemon);
			int	atacar (POKEBOLA *pokemon, POKEBOLA *pokemon2);	
			
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------MAIN-------------------------------------------------------------------------------------------------

int main (){	
	
	setlocale (LC_ALL,"Portuguese");	
	int opcao, i, n, start, dano_x, defesa_x, esquiva_x, per, armor1, armor2;
	POKEBOLA pokemon[2];
	JOGADOR treinador[2];
	POKEBOLA *p;
	JOGADOR *j;
	char continuar;
	
	p = (POKEBOLA *)malloc(sizeof(POKEBOLA)); //alocando memória para pokebola
	j = (JOGADOR *)malloc(sizeof(JOGADOR)); //alocando memória para jogador
	
	system ("color E0");
	int inicio;
	pikachu (inicio);	
		 
   	while (opcao != '4') { //LAÇO PA PODER RETORNAR PRAS TELAS
   	
		printf("\t\t\tDigite uma das opções abaixo e pressione Enter:\n\n");
	  	printf("\t\t\t 1. Capturar Pokémons\n\t\t\t 2. Batalhar\n\t\t\t 3. Ajuda\n\t\t\t 4. Sair do Jogo\n\n");
	  	printf ("\t\t\tOpção: ");
		scanf("%c",&opcao);   
		system("cls");
		getchar();
				
		if (opcao == '1') { 
			
            printf("haha");
            capturar(pokemon,n);
            printf("\t\t\t 1. Nova Captura \n\t\t\t 2. Batalhar\n\t\t\t 3. Ajuda\n\t\t\t 4. Sair do Jogo\n\n");
			printf ("\t\t\t Opção: ");
			scanf("%c",&opcao);
			system("cls");
			getchar();	
		}
		
		if (opcao == '2') { 
			system("color 1A");            
            preencher(pokemon,treinador);		
			mostrar(pokemon); 
			printf ("\n\n\t\t\tComeçar a batalha? (s/n) ");
			scanf ("%s",&start);
			if (start == 's'){
				printf ("\n\n\t\t\t++++++++++++++++++ A BATALHA COMEÇOU! ++++++++++++++++++\n\n");		
						// FUNÇÃO DA BATALHA		
				
				/*************************************************** CONDIÇÃO DE VITÓRIA *************************************************/
				armor1 = 100000;
				armor2 = 100000;
				
				while ((pokemon[0].hp > 0) || (pokemon[1].hp > 0)) {
					armor1 = armor1 - (pokemon[0].atcksp);
					if (armor1 < 1) {
						atacar1(pokemon, pokemon+1);  ///FUNCAO ATACAR
						armor1 = 100000;
					}
					if ((pokemon[1].hp) < 1){
						break;
					}
					armor2 = armor2 - (pokemon[1].atcksp);
					if (armor2 < 1) {
						atacar2(pokemon, pokemon+1); /// FUNCAO ATACAR
						armor2 = 100000;
					}
					if ((pokemon[0].hp) < 1){
						break;
					}		
				}
				
				if ((pokemon[0].hp) < 1) {
					printf("\n\n\t\t\t%s ganhou a batalha!\n", pokemon[0].nome);
					return 0;
				}
			
				if ((pokemon[1].hp) < 1) {
					printf ("\n\n\t\t\t%s ganhou a batalha!\n", pokemon[1].nome);
					return 0;
				}	
			}
		    
			printf("\t\t\t 1. Capturar Pokémons \n\t\t\t 2. Nova Batalha\n\t\t\t 3. Ajuda\n\t\t\t 4. Sair do Jogo\n\n");
			printf ("\t\t\t Opção: ");
			scanf("%c",&opcao);   
			system("cls");
			getchar();		
            system("pause");
            system("cls");
				
		}
		
		if (opcao == '3') { 
			system("color B0");
            printf("\n.:.:.:.:.....:.:.:.........:...:.:.:.:.:.:.:.:.: O QUE É O JOGO? :.:.:.:.:.....:.:.:.........:...:.:.:.:.:.:.:.:.\n");
            printf("\n\n\t      Pokémon em C++ é um jogo que simula lutas entre dois Pokémons de acordo com dados fornecidos\n\t      pelos seus treinadores.\n\n\n");
            printf("\n.:.:.:.:.....:.:.:......:....:...:.:.:.:.:.:.:.:.: COMO JOGAR :.:.:.:.:.....:.:.:............:...:.:.:.:.:.:.:.:.\n");
            printf("\n\n\t      Primeiramente escolha entre Capturar um novo Pokémon ou Batalhar com um pokémon que você\n\t      já possui.Para batalhar, cadastre características solicitadas de seu pokémon, seu oponente\n\t      também irá cadastrar o Pokemón e automaticamente, de acordo com as caracerísticas dos\n\t      dois Pokémons, a batalha começará e dirá quem é o ganhador da batalha!\n\n\n");
            printf("\n.:.:.:.:.....:.:.:..:.........:...:.:.:.:.:.:.:.:.: OJETIVO :.:.:.:.:.....:.:.:......:.....:...:.:.:.:.:.:...:.:.\n");
            printf("\n\n\t      O objetivo é ganhar a batalha Pokemon! Escolha seu Pokemón sabiamente para vencer seu oponente \n\t      e conquistar ginásios. \n\n\n");
            printf("\n.:.:.:.:.....:.:.:..:.........:....:.:.:.:.:.:.:.:.: SOBRE :.:.:.:.:.....:.:.:......:.....:....:.:.:.:.:.:...:.:.\n");
            printf("\n\n\t      Jogo em C++ desenvolvido por Camila Raccioni e Gabrielle Bottene como nota ATPS da disciplina\n\t      de Algoritmos Avançados da Faculdade Anhanguera de Piracicaba.\n\t      Objetivos: Uso de recursividade (função capturar), passagem de parâmetro por valor (funções\n\t      preencher, mostrar, atacar1 e atacar2,), passagem de parâmetro por referência (função mew e pikachu) \n\t      e structs (POKEBOLA e JOGADOR).\n\n\t      Professor: João Paulo Siqueira.\n\t      RA's: 141671812121 e 143660412121\n\t      Data: 13/09/2018\n\n\n");
           	printf("\t\t\t 1. Capturar Pokémons \n\t\t\t 2. Batalhar\n\t\t\t 3. Ajuda\n\t\t\t 4. Sair do Jogo\n\n");
			printf ("\t\t\t Opção: ");
			scanf("%c",&opcao);   
			system("cls");
			getchar();	
		}
		
		if (opcao =='4') {
			int fim;
			system("color 0D");
			mew (fim);
            break;
		}
   }
	free(p);
	free(j);
	//printf("deseja continuar? s\n");
	//scanf("%c",&continuar);
	//pikachu (continuar);
	
	system ("Pause");
	return 0;
}


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void capturar(POKEMON &ptr, int x) //JP
{
	printf ("Jogador 1, digite o nome do seu Pokemon")
	
	scanf(" %s",&ptr[0]);

}


//-------------------------------------------------------------------------------------------------FUNÇÕES------------------------------------------------------------------------------------------------
void preencher(POKEBOLA *pokemon, JOGADOR *treinador){
	int i;
		for (i=0; i<2; i++){	
			printf ("\n\t\t\tJogador %d, \n\t\t\tQual é o seu nome de Treinador? ",i+1);
			scanf (" %s",&treinador[i].nome);
			printf ("\t\t\tQuais são os nomes de seus Pokemóns? ");
			scanf (" %s",&treinador[i].pokemons);						
			printf ("\t\t\tQual Pokémon você escolherá para a batalha? ",i+1);
			scanf (" %s",&pokemon[i].nome);
			printf ("\t\t\tQual é o tipo do seu Pokémon? ");
			scanf (" %s",&pokemon[i].tipo);	
			printf ("\t\t\tQual é o peso do seu Pokémon? ");
			scanf ("%f",&pokemon[i].peso);
			printf ("\t\t\tQual é a altura do seu Pokémon? ");
			scanf ("%f",&pokemon[i].altura);
			printf ("\t\t\tQual é o valor de vida total do seu Pokémon? ");
			scanf ("%d",&pokemon[i].hp);			
			printf ("\t\t\tQual é o dano máximo do seu Pokémon? ");
			scanf ("%d",&pokemon[i].dano);
			printf ("\t\t\tQual é o valor de defesa do seu Pokémon? ");
			scanf ("%d",&pokemon[i].defesa);
			printf ("\t\t\tQual é a probailidade de defesa do seu Pokémon? ");
			scanf ("%d",&pokemon[i].prob_defesa);
			printf ("\t\t\tQual é a destreza do seu Pokémon? ");
			scanf ("%d",&pokemon[i].destreza);
			printf ("\t\t\tQual é a probabiliadade de esquiva do seu Pokémon? ");
			scanf ("%d",&pokemon[i].prob_esquiva);
			printf ("\t\t\tQual é a velocidade de ataque do seu Pokémon? ");
			scanf ("%d",&pokemon[i].atcksp);
			printf ("\t\t\tQual é o valor de penetração de armadura do seu Pokémon? ");
			scanf ("%d",&pokemon[i].penet);
			}			
	printf ("\n\n\t\t\t((((((((((((((((((((((((%s vs %s))))))))))))))))))))))))\n",pokemon[0].nome, pokemon[1].nome);	
}

void mostrar(POKEBOLA *pokemon) {
	int i;
	
	for (i=0; i<2; i++){
		printf("\n\n\t\t\tPokemon: %s\n\n",pokemon[i].nome);
		printf("\t\t\t[Peso: %.2f]\n",pokemon[i].peso);
		printf("\t\t\t[Altura: %.2f]\n",pokemon[i].altura);
		printf("\t\t\t[Dano máximo: %d]\n",pokemon[i].dano);
		printf("\t\t\t[Defesa: %d]\n",pokemon[i].defesa);
		printf("\t\t\t[Probabilidade de defesa: %d]\n",pokemon[i].prob_defesa);
		printf("\t\t\t[HP máximo: %d]\n",pokemon[i].hp);
		printf("\t\t\t[Destreza: %d]\n",pokemon[i].destreza);
		printf("\t\t\t[Taxa de esquiva: %d]\n",pokemon[i].prob_esquiva);
		printf("\t\t\t[Velocidade de ataque: %d]\n",pokemon[i].atcksp);
		printf("\t\t\t[Penetração de armadura: %d]\n",pokemon[i].penet);			
	}
}


int	atacar1(POKEBOLA *pokemon, POKEBOLA *pokemon2) {   
	int i, dano_x, defesa_x, esquiva_x, per,player;	        		     		
        esquiva_x = pokemon[1].prob_esquiva - pokemon[0].destreza;
        per = rand() % 100; //GERA VALOR ALEATÓRO DE 0 a 100
        if (per <= esquiva_x) {
            printf("\t\t\t%s esquivou o ataque de %s.\n", pokemon[1].nome, pokemon[0].nome);
            return 0;
        }	     
		per = rand() % 100; //GERA VALOR ALEATÓRO DE 0 a 100
        if (per <= pokemon[1].prob_defesa) {
            defesa_x = pokemon[1].defesa - pokemon[0].penet;
            dano_x = pokemon[0].dano - defesa_x;
            if (dano_x < 1) {
               printf("\t\t\t%s defendeu todo o ataque de %s.\n", pokemon[0].nome, pokemon[1].nome);
               return 0;
            }
            pokemon[1].hp = pokemon[1].hp - dano_x;
            printf("\t\t\t%s sofreu um dano de %d ponto", pokemon[1].nome, dano_x);
            if (dano_x > 1)
               printf("s");
            printf(" (defendeu %d ponto", defesa_x);
            if (defesa_x > 1)
               printf("s");
            printf(").\n");
            return 0;
        }
    
		printf("\t\t\t%s sofreu um dano de %d ponto", pokemon[1].nome, pokemon[0].dano);
        if (pokemon[0].dano > 1)
            printf("s");
        printf("\n");
        pokemon[1].hp = pokemon[1].hp - pokemon[0].dano;
        return 0;
  	}

int	atacar2(POKEBOLA *pokemon, POKEBOLA *pokemon2) {   
	int i, dano_x, defesa_x, esquiva_x, per,player;
        esquiva_x = pokemon[0].prob_esquiva - pokemon[1].destreza;
        per = rand() % 100; //GERA VALOR ALEATÓRO DE 0 a 100
        if (per <= esquiva_x) {
            printf("\t\t\t%s esquivou o ataque de %s.\n", pokemon[0].nome, pokemon[1].nome);
            return 0;
        }
        per = rand() % 100; //GERA VALOR ALEATÓRO DE 0 a 100
        if (per <= pokemon[0].prob_defesa) {
            defesa_x = pokemon[0].defesa - pokemon[1].penet;
            dano_x = pokemon[1].dano - defesa_x;
            if (dano_x < 1) {
               printf("\t\t\t%s defendeu todo o ataque de %s.\n", pokemon[1].nome, pokemon[0].nome);
               return 0;
            }
            pokemon[0].hp = pokemon[0].hp - dano_x;
            printf("\t\t\t%s sofreu um dano de %d ponto", pokemon[0].nome, dano_x);
            if (dano_x > 1)
               printf("s");
            printf(" (defendeu %d ponto",defesa_x);
            if (defesa_x > 1)
               printf("s");
            printf(").\n");
            return 0;
        }
         
	        printf("\t\t\t%s sofreu um dano de %d ponto", pokemon[0].nome, pokemon[1].dano);
	        if (pokemon[1].dano > 1)
	            printf("s");
	        printf("\n");
	        pokemon[0].hp = pokemon[0].hp - pokemon[1].dano;
	        return 0;
    }

void pikachu (char inicio){
	if(inicio == 's'){
		printf("...");
	} else {	
	printf("\t.....:.:.:.....:.:...:...............:.....:.:.:...........:.:.............:.:.:.:.:.:.:.:...:.:...:..\n");
	printf("\t........:.:.:.:.:.:.:......     ....:...........:.......:.....:.:....    .....:.:.:.......:.:...:.:...\n");
	printf("\t.........:.......:...:... rSRBIr  ...:.:.:.:.:...:.......:.:...... :vPbv:  ....:.:....................\n");
	printf("\t:.....:.:.:...:...:.:.. .dr..vBBBj .......:.:.....:.:...:.:.:.:.. uu::PQBBv ......:.......:.......:.:.\n");
	printf("\t...:.:.........:....... BB    bBQBS .......:.:.......:.:.:.:.:.. qQ.   UBBB5 ..:...:.:.:.:.........:..\n");
	printf("\t:.......:.....:.........BBX..jBggBB ....:.......   .....:.:.:....BBY  :BQDBB......:.:.:.:...:...:.:...\n");
	printf("\t......:...:.......:.... :QBBBBBBBB. ....:...:...RBd...:.:.:..... iBBBQQQBBB: .....:...:.:...........:.\n");
	printf("\t.:.:.........:.:.....:..  vEQBBg7  ....:.:.....    ........:.:... .IQBBBBX. .......:.:.:.:...:...:.:..\n");
	printf("\t......:.....:.....:...:...       ............   .i.   ............   ...   ...:.:.:.......:.:...:.:...\n");
	printf("\t.:.....:.:.:.:.:...:...:.............  ..    .vMBBBE7.        .:.:.... ....:.:...:.:.:...:.:.:.....:.:\n");
	printf("\t........:.:.:.:.................:..:ds:  .i1QBBBQgQBBBR27:..:vEr....................:.:.:.....:...:...\n");
	printf("\t...............  .v2qKX1v.  ..:.:.... EBQQgUYrriiiiir71qRRMZBg .:...:.... :vXqPS2r. ....:.......:.:...\n");
	printf("\t..:.......... :BEvLvsLJLLvPBr ..:..... DE:rr77v777v7v77rrirZB ........ .BXLvsLJYYvLPB: ...:.:.......:.\n");
	printf("\t...:...:..... QK7JYJLJYJYs7UB......... .Brr77v7v7v7v777777:gu .....:...BuLYsYsLsLsYvSB ..:.:.:.:.....:\n");
	printf("\t:.........:.. DBvvJYsLJYJvvgQ ....:.:.:. iBi77v777v77777rKQ ..:.:..... QQ7YYJLJYsLL7BP .....:.:.:.....\n");
	printf("\t:...:.......:.. iSDZZEggRbr ..:.:.:.:..... Bqi77v7v7v77rBi .:.......:..  iPZDdDZMgP: ...:.:.:.........\n");
	printf("\t.:...:.......:..  .:irii.  ....:...:...:.. .B2i77v7v77rB7 .........:.:...  .:rrr:.  .....:.:.:.......:\n");
	printf("\t..:.:...:.:.:........   ........:.......... .BXi777rrYBr ...:.:.:.:.:.:......   ........:.:.:...:.:.:.\n");
	printf("\t...:.:.....:.:.:.......................:.... .QMsv71dR: .......:...:.....:.........:.:.....:.:.....:..\n");
	printf("\t:...:.:...:.:.:.:.:.:.....:.:.:.:.:.:.:.:....  rKKPX7  .....:.:.....:...........:.....:.....:.:.:.:.:.\n");
	printf("\t.............:.:.:...:...:...:...:.:...:...:...  ..  ......:.....:.:.:...:.....:.......:.:.:.......:.:\n");
	printf("\t:.:...:.:...:.....:.:.:.:.:.:.:.:.:.:...:.:.:.:.........:...:.:.:.:.:.:.....:.:.:...:.:.:.:.:.:.:...:.\n\n");
	printf("\t                                              POKÉMON                                                 \n");
	printf("\t                                               em C++                        por: Camila e Gabrielle  \n\n");
	}	
}

void mew (char fim){
	if(fim == 's'){
		printf("...");
	} else {
	printf("                          .                           .                          .                          .   \n");
	printf("                  .               .                                           BQBg                          .   \n");
	printf("                                                 .               .        :BBBr  rBP       .       .       .    \n");
	printf(".        F  I  M                                  .                     .BB..   :7BS                    .       \n");
	printf("             .       .   .               .             .               BQ:    :sr1Qb                         .  \n");
	printf("              D E                 .                                  1Bi: . ivvrBB                        .     \n");
	printf("     .                             .                         .     rQ2.. .. :7:7BB                         .    \n");
	printf("            J  O  G  O                     gBgi .         .        :B7  . .rvrBQ    .                           \n");
	printf("     .     .                             BM:.:DB           .      Rd   rir:vZBi            .               .    \n");
	printf("                            .      .QQBBBQB:. BB                  BM.iririPBb     . .   .   . .   .             \n");
	printf("                       .     .  QQBBMB.r::... gB                BB7vi7iBBBQ.                       .            \n");
	printf("                              IM5:r::.    . . .:BR              BR:.iMB:.                                       \n");
	printf("                     .   BgBQQP7   . ..:......  iIQq          qBJr:dBL.                                        .\n");
	printf(". .       .       .  :BMBJrisr. ... ..:.. :.:.:.. .iBr      . Bg::BI.               .           .               \n");
	printf("                     ugZ.    . ....:.. iv. ....: :rgBs        ZBirRS                                     .     .\n");
	printf("                .    7BY .iir.... ..    .r7.. :...QQBi        BQ:rBv          . .                 .             \n");
	printf("                      .BRuiUi  ... :BBQBB: ..: : ..SRi .      ..QQrSQBg                                    .    \n");
	printf(".   .   .           .  .iBBr7:i  .BU 7BriBB.:.:.:...d5B         :7BRUuXdRQBgBBBQ    .   .         .           . \n");
	printf("       . .               BBi:5.  .gB LP  ri:......   QR.          :XQBBZuqXKUqSgggZBZRQ      .                  \n");
	printf("                .        :rgEi7i  QBdPQ             .MB.    .       7:iBBBBQBBBMPKEXPXEPQBs       .         .   \n");
	printf("         .     .           BQ:rj::ivvUL:.::r.:::.: 2RDr                iri....:rBBRBBBgYrvIB                    \n");
	printf("        .   .       .      7qgq.ii..rir7Usj:7.qQQMBZr                   .  UKS  77Jr7rvSgbSrdE      .           \n");
	printf("             .       .     . IEBQBri:i.rivrBgBBB:... .        vMMX       X5KPq5X       JsIjKjsEb     .     .    \n");
	printf("          .                   :jJuBBRbBsviLMQDBQjruLESg     i5ZbZIS:     MB   BQ           uPUUJQ7  .       .   \n");
	printf(" .                                7EBQIYr177:.iKQBsIJQgDs   uB:  iBQ . u5K7 ..MQ   .        .P7u2bU:         .  \n");
	printf(".           .                   .   BBgri::i:   ..U1u..BB  vS2. rJBu   QB  :i:Bg. .   .   .   BB .B7  .         \n");
	printf(" .                              vXj2UqP: . . ... .gMdBQ7i .BX .::sRq :v2v..JuDjj              r2JUPPL          .\n");
	printf("          .                   .uBRBu    . ... ..:.   igvv .Rd v7M27. gB  .::QB                  BM ZB.          \n");
	printf("       . .           .       vgQ:.   . :::::.:.... ..  dQ7vPr.:vRBi  5Br.Ui:gB.          .      BB.Dg.       .  \n");
	printf("          .         .       vQQ 5S .DgBvYur  .....: . .  QB  .r:BBMUiUMrv:s5qS.   .             BQ SB           \n");
	printf(" .                     .    .PPgQBMBPBBU.Yi:.. .   .:YS77BQ :U.:QB 7Bb.7r:UBi                   MB Dg. . . .    \n");
	printf("          .   .           . . rgEPgv .bXP:r7v:. ..Kv:5QRB5J ii2uBS rBYir7.5M5                   BQ.MB..         \n");
	printf("                 .         . .         BBv.Yr5:.dBQb   BB  .::QQ:.::.r:v7P2P:        .   .    :7gD7PZ           \n");
	printf("  .       .   .   .   .             .  uQIJiv7YrBB  . .gB .Y7 BBi:XUE7i.7gB                   Bg rBr      .     \n");
	printf("                                   .   . BQ::Lir:iL7.: gR..7vJPQ:YBBPgKdDBj      .           iqBPdg:            \n");
	printf("                                .        EBES:77viYvs7J::iv:Qgr PXg: rBQg .                :EQPXBv    .       . \n");
	printf("                             .       .     BZq7::rr7iL:uLi:.KQquXI                     . i7B7:EM   .            \n");
	printf("                                            :BQUZjri:::BBXX1EZBM.               .    .:.iQP.gB  .               \n");
	printf("                                           .  sBBBKd2XXBQBgBZI::QR ..        .  :i::.DMBR:1B.          .   . .  \n");
	printf("  .             .                                 BgQBQ   . rgZsjUBBBL..:.... ::BRBBBr..7QI             .   . . \n");
	printf("     .     .     .             .                   .       . .qBQBY27RBBMBBQQBRB::.:.MQBQ  .                 .  \n");
	printf("                      .                       .         .         BBBv..:.:...::QBBMB.                    .     \n");
	printf("                                                             .       URBBBMBBBMB                       .        \n\n\n");
	}			
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------




//----------------------------------------------------------------FONTES-----------------------------------------------------------------
//https://pokemon.gameinfo.io/pt-br/pokemon/25-pikachu
//https://www.cprogressivo.net/2013/03/Como-passar-structs-para-funcoes-por-referencia-em-C.html
//---------------------------------------------------------------------------------------------------------------------------------------


