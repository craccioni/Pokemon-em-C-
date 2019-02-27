/* Desenvolvido por: Thiago Negri ( hunz ) */
/* Email: tn_negri@hotmail.com */

/* 
-- Estrutura do arquivo --
Linha 1: Dano --> Quantidade maxima de dano que o personagem pode causar.
Linha 2: Defesa --> Quantidade maxima de pontos de dano que o personagem pode defender.
Linha 3: Probabilidade de Defesa --> Com que frequencia ele defende os ataques.
Linha 4: Vida --> A vida do personagem.
Linha 5: Destreza --> Diminui as probabilidades de esquiva do inimigo.
Linha 6: Probabilidade de Esquiva --> Com que frequencia o personagem esquiva os ataques.
Linha 7: Velocidade do Ataque --> Com que frequencia seu personagem ataca, quanto maior, mais rapido.
Linha 8: Penetracao de Armadura/Defesa --> Diminui a defesa total do inimigo.

<-- Exemplo de Arquivo -->
35
25
35
550
25
40
154
10
<-- Obs: Todos os atributos devem ser numeros inteiros. -->
*/

#include <stdlib.h>
#include <stdio.h>



int   dmg1=35,dmg2=40,dmgx,
   def1=25,def2=38,defx,
   der1=35,der2=40,
   vit1=550,vit2=300,
   acu1=25,acu2=35,
   dod1=40,dod2=50,dodx,
   asp1=40,asp2=40,
   pie1=20,pie2=30,
   tua1=10,tua2=20,
   per;

int atking(int player, char *play1, char *play2) {
   switch (player) {
      case 1: {
         dodx = dod2 - acu1;
         per = rand() % 100;
         if (per <= dodx) {
            printf("%s esquivou o ataque de %s.\n",play2,play1);
            return 0;
         }
         
         per = rand() % 100;
         if (per <= der2) {
            defx = def2 - pie1;
            dmgx = dmg1 - defx;
            if (dmgx < 1) {
               printf("%s defendeu todo o ataque de %s.\n",play1,play2);
               return 0;
            }
            vit2 = vit2 - dmgx;
            printf("%s sofreu um dano de %d ponto",play2,dmgx);
            if (dmgx > 1)
               printf("s");
            printf(" (defendeu %d ponto",defx);
            if (defx > 1)
               printf("s");
            printf(").\n");
            return 0;
         }
         
         printf("%s sofreu um dano de %d ponto",play2,dmg1);
         if (dmg1 > 1)
            printf("s");
         printf("\n");
         vit2 = vit2 - dmg1;
         return 0;
      }
      
      case 2: {
         dodx = dod1 - acu2;
         per = rand() % 100;
         if (per <= dodx) {
            printf("%s esquivou o ataque de %s.\n",play1,play2);
            return 0;
         }
         
         per = rand() % 100;
         if (per <= der1) {
            defx = def1 - pie2;
            dmgx = dmg2 - defx;
            if (dmgx < 1) {
               printf("%s defendeu todo o ataque de %s.\n",play2,play1);
               return 0;
            }
            vit1 = vit1 - dmgx;
            printf("%s sofreu um dano de %d ponto",play1,dmgx);
            if (dmgx > 1)
               printf("s");
            printf(" (defendeu %d ponto",defx);
            if (defx > 1)
               printf("s");
            printf(").\n");
            return 0;
         }
         
         printf("%s sofreu um dano de %d ponto",play1,dmg2);
         if (dmg2 > 1)
            printf("s");
         printf("\n");
         vit1 = vit1 - dmg2;
         return 0;
      }
   }
}
/*
int main(int argc, char *argv[])
{
   srand(time(NULL));
   
   if (argc != 3) {
      printf("Modo de uso incorreto.n");
      return 0;
   }
   
   if ((char1=fopen(argv[1],"r"))==NULL) {
      printf("%s, personagem não encontrado.\n",argv[1]);
      return 0;
   }
   
   if ((char2=fopen(argv[2],"r"))==NULL) {
      printf("%s, personagem não encontrado.\n",argv[2]);
      return 0;
   }
*/
   /* Carrega atributos do Personagem1 */
   fscanf("%d\n",&dmg1);
   fscanf("%d\n",&def1);
   fscanf("%d\n",&der1);
   fscanf("%d\n",&vit1);
   fscanf("%d\n",&acu1);
   fscanf("%d\n",&dod1);
   fscanf("%d\n",&asp1);
   fscanf("%d\n",&pie1);
   printf("-%s- [Dmg: %d][Def: %d][Def\%: %d][Vit: %d][Acu: %d][Dod\%: %d][Atkspd: %d][PA: %d]\n",argv[1],dmg1,def1,der1,vit1,acu1,dod1,asp1,pie1);
   
   /* Carrega atributos do Personagem2 */
   fscanf("%d\n",&dmg2);
   fscanf("%d\n",&def2);
   fscanf("%d\n",&der2);
   fscanf("%d\n",&vit2);
   fscanf("%d\n",&acu2);
   fscanf("%d\n",&dod2);
   fscanf("%d\n",&asp2);
   fscanf("%d\n",&pie2);
   printf("-%s- [Dmg: %d][Def: %d][Def\%: %d][Vit: %d][Acu: %d][Dod\%: %d][Atkspd: %d][PA: %d]\n",argv[2],dmg2,def2,der2,vit2,acu2,dod2,asp2,pie2);
   
   printf("Iniciando batalha.. %s VS %s\n",argv[1],argv[2]);
   
   tua1 = 100000;
   tua2 = 100000;
   
   while ((vit1 > 0) || (vit2 > 0)) {
      tua1 = tua1 - asp1;
      if (tua1 < 1) {
         atking(1,argv[1],argv[2]);
         tua1 = 100000;
      }
      if (vit2 < 1)
         break;
      
      tua2 = tua2 - asp2;
      if (tua2 < 1) {
         atking(2,argv[1],argv[2]);
         tua2 = 100000;
      }
      if (vit1 < 1)
         break;
   }
   
   if (vit2 < 1) {
      printf("%s ganhou a luta!\n",argv[1]);
      return 0;
   }
   
   if (vit1 < 1) {
      printf("%s ganhou a luta!\n",argv[2]);
      return 0;
   }
}
