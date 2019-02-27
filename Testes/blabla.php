int atking(int player, char *pokemon[1], char *pokemon[2]) {
   int defx, dmgx, dodx;
   switch (player) {
      case 1: {
         dodx = &pokemon[2].prob_esquiva - &pokemon[1].destreza;
         per = rand() % 100;
         if (per <= dodx) {
            printf("%s esquivou o ataque de %s.\n",&pokemon[2].nome,&pokemon[1].nome);
            return 0;
         }
         
         per = rand() % 100;
         if (per <= &pokemon[2].prob_defesa) {
            defx = &pokemon[2].defesa - &pokemon[1].penet;
            dmgx = &pokemon[1].dano - defx;
            if (dmgx < 1) {
               printf("%s defendeu todo o ataque de %s.\n",&pokemon[1].nome,&pokemon[2].nome);
               return 0;
            }
            &pokemon[2].hp = &pokemon[2].hp - dmgx;
            printf("%s sofreu um dano de %d ponto",&pokemon[2].nome,dmgx);
            if (dmgx > 1)
               printf("s");
            printf(" (defendeu %d ponto",defx);
            if (defx > 1)
               printf("s");
            printf(").\n");
            return 0;
         }
         
         printf("%s sofreu um dano de %d ponto",&pokemon[2].nome,&pokemon[1].dano);
         if (&pokemon[1].dano > 1)
            printf("s");
         printf("\n");
         &pokemon[2].hp = &pokemon[2].hp - &pokemon[1].dano;
         return 0;
      }
      
      case 2: {
         dodx = &pokeom[1].prob_esquiva - &pokemon[2].destreza;
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
               printf("%s defendeu todo o ataque de %s.\n",&pokemon[2].nome,&pokemon[1].nome);
               return 0;
            }
            &pokemon[1].hp = &pokemon[1].hp - dmgx;
            printf("%s sofreu um dano de %d ponto",&pokemon[1].nome,dmgx);
            if (dmgx > 1)
               printf("s");
            printf(" (defendeu %d ponto",defx);
            if (defx > 1)
               printf("s");
            printf(").\n");
            return 0;
         }
         
         printf("%s sofreu um dano de %d ponto",&pokemon[1].nome,&pokemon[2].dano);
         if (&pokemon[2].dano > 1)
            printf("s");
         printf("\n");
         &pokemon[1].hp = &pokemon[1].hpvit1 - &pokemon[2].dano;
         return 0;
      }
   }
}

   printf ("%s vs %s",pokemon[0].nome, pokemon[1].nome);
         printf("-%s- [Peso: %.2f]\n[Altura: %.2f]\n[Dano máximo: %d]\n[Defesa: %d]\n[% de defesa: %d]\n[HP máximo: %d]\n[Destreza: %d]\n[% de esquiva: %d]\n[Velocidade de ataque: %d]\n[Penetração Mágica: %d]\n\n",pokemon[0].nome,pokemon[0].peso,pokemon[0].altura,pokemon[0].dano,pokemon[0].defesa,pokemon[0].prob_defesa,pokemon[0].hp,pokemon[0].destreza,pokemon[0].prob_esquiva,pokemon[0].atcksp,pokemon[0].penet);
         printf("-%s- [Peso: %.2f]\n[Altura: %.2f]\n[Dano máximo: %d]\n[Defesa: %d]\n[% de defesa: %d]\n[HP máximo: %d]\n[Destreza: %d]\n[% de esquiva: %d]\n[Velocidade de ataque: %d]\n[Penetração Mágica: %d]\n\n",pokemon[1].nome,pokemon[1].peso,pokemon[1].altura,pokemon[1].dano,pokemon[1].defesa,pokemon[1].prob_defesa,pokemon[1].hp,pokemon[1].destreza,pokemon[1].prob_esquiva,pokemon[1].atcksp,pokemon[1].penet);



Linha 1: Dano -->                            dmg1,dmg2,dmgx,         int dano;
Linha 2: Defesa -->                          def1,def2,defx,         int defesa;
Linha 3: Probabilidade de Defesa -->         der1,der2,              int prob_defesa;
Linha 4: Vida -->                            vit1,vit2,              int hp;
Linha 5: Destreza -->                        acu1,acu2,              int destreza;  
Linha 6: Probabilidade de Esquiva -->        dod1,dod2,dodx,         int prob_esquiva;
Linha 7: Velocidade do Ataque -->            asp1,asp2,              int atcksp;
Linha 8: Penetracao de Armadura/Defesa -->   pie1,pie2,              int penet;
Outros:                           tua1,tua2,
                                     per;









         Pokemon 1 = Charmander
         Pokemon 2 = Mew

         case 1 {

            1:       Probabilidade de esquiva geral = Probabilidade de esquiva do Mew - Destreza do Charmander
            2:          Charmander defendw o ataque de Mew
            3:          Mew recebe x dano defende y dano
            4:       Mew sofre um dano de x pontos}

         case 2 {

            1:          Charmander esquiva do ataque de Mew
            2:       Mew defende todo o ataque de Chamrander
                        se defesa do mew for menor que o percentual aleatório

            3:       Charmader sofre um dano de x pontos e defende y pontos
            4:          Charmander sofre um dano de x pontos}








         probabilidade esquiva = mew esquiva - charmander destreza 
         se o aleatorio for maior que probabilidade esquiva, mew esquiva do ataque de charmander


         se o aleatorio for menos que a probabilidade de esquiva, mew recebe o ataque