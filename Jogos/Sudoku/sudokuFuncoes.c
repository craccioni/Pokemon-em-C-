# include "sudoku.h"
/*Alerta01 - Entenda coluna como sendo linha vertical e linha como sendo linha horizontal, no desenvolvimento
elaborei a matriz sendo matriz[linhaHorizontal][linhavertical], caso vc enxergue melhor como matriz[linha][coluna],
*/

/*Alerta03 - irei explicar por meio de comentarios o que eu achar relevante explicar, sobre as funcoes,
funcoes trivias não teram comentarios*/

/*================================================================================================================================================================*/
/*|                             PRINCIPAIS FUNÇÔES UTILIZADAS PARA ELABORAÇÂO E MANIPULAÇÂO DO SUDOKU 															 |*/
/*=================================================================================================================================================================*/

/*A matriz denominada seguranca será usada como verificação dos números imutaveis,
e por isso ela esta sendo iniciada junto com o tabuleiro*/
void iniciarTabuleiro(int tabuleiro[][tam], int seguranca[][tam]){
  
    int linhaVertical = nulo;
    int linhaHorizontal = nulo;
    while(linhaHorizontal < tam){
        linhaVertical = nulo;
        while(linhaVertical < tam){
        tabuleiro[linhaHorizontal][linhaVertical] = nulo;
        seguranca[linhaHorizontal][linhaVertical] = nulo;
        linhaVertical = linhaVertical + valorMinimo;
        }
        linhaHorizontal = linhaHorizontal + valorMinimo;    
    }
}


/*Funcao de verificação, percorre e compara, travando a linhavertical;
loop e condicional delimitam a matriz, simples assim*/
int verificarColuna(int tabuleiro[][tam], int linhaVertical, int jogada){
    
    int verificador = nulo;
    int linhaHorizontal = nulo;
   
    while(linhaHorizontal < tam){
        if(tabuleiro[linhaHorizontal][linhaVertical] == jogada){
            verificador = verificador + valorMinimo;
        }
        linhaHorizontal = linhaHorizontal + valorMinimo;
    }
    return verificador;
}

/*Funcao de verificação, percorre e compara, travando a linhaHorizonta;
loop e condicional delimitam a matriz, simples assim*/
int verificarLinha(int tabuleiro[][tam], int linhaHorizontal, int jogada){
   
   int verificador = nulo;
   int linhaVertical = nulo;
  
    while(linhaVertical < tam){
        if (tabuleiro[linhaHorizontal][linhaVertical] == jogada){
            verificador = verificador + valorMinimo;
        }
        linhaVertical = linhaVertical +valorMinimo;
    }
    return verificador;
}
/*passaando como parâmetro a linhaHorizontalInicial, linhaVerticalInicial, linhaHorizontalFinal e linhaVerticalFinal; eu limito o intervalo,
tornando possivel verificar o bloco (uma matriz 3*3), após isso, o problema se torna trivial, e so percorrer
 e comparar*/
int  verificarBloco(int tabuleiro[][tam], int linhaHorizontalInicial, int linhaVerticalInicial, int linhaHorizontalFinal, int linhaVerticalFinal, int jogada){

    int verificador = nulo;
    int linhaVerticalAuxiliar = linhaVerticalInicial;
   
    while(linhaHorizontalInicial <= linhaHorizontalFinal){
        linhaVerticalInicial = linhaVerticalAuxiliar;
        while(linhaVerticalInicial <= linhaVerticalFinal){
          if(tabuleiro[linhaHorizontalInicial][linhaVerticalInicial] == jogada){
                verificador = verificador + valorMinimo;
            }
            linhaVerticalInicial = linhaVerticalInicial + valorMinimo;
        }
        linhaHorizontalInicial = linhaHorizontalInicial + valorMinimo;
    }
    return verificador;
}

/*Como a função localizarBloco, recebe como parametro a linhaHorizontal e a linhaVertical, e uso elas
justamente para determinar em qual bloco elas estão, eu utilizei de condicionais porque foi mais 
natural para min, entretando acredito que esta função poderia ser reduzida com o usa de logica 
matematica, porem, como o tabuleiro é finito e não foram muitas comparações, optei por fazer do 
jeito mais facil*/
int localizarBloco( int tabuleiro[][tam], int linhaHorizontal, int linhaVertical, int jogada) {
    
    int verificador = nulo;

   
    if(linhaHorizontal <= intervaloSuperiorBlock1){
        if(linhaVertical <= intervaloSuperiorBlock1){
            verificador = verificarBloco(tabuleiro,nulo,nulo,intervaloSuperiorBlock1,intervaloSuperiorBlock1,jogada);
        }
        if((linhaVertical > intervaloSuperiorBlock1) && (linhaVertical <= intervaloSuperiorBlock2)){
            verificador = verificarBloco(tabuleiro,nulo,intervaloInferiorBlock2,intervaloSuperiorBlock1,intervaloSuperiorBlock2,jogada);
        }
        if(linhaVertical > intervaloSuperiorBlock2){
            verificador = verificarBloco(tabuleiro,nulo,intervaloInferiorBlock3,intervaloSuperiorBlock1,intervaloSuperiorBlock3,jogada);
        }
    }
    if((linhaHorizontal > intervaloSuperiorBlock1) && (linhaHorizontal <= intervaloSuperiorBlock2)){
        if(linhaVertical <= intervaloSuperiorBlock1){
            verificador = verificarBloco(tabuleiro,intervaloInferiorBlock2,nulo,intervaloSuperiorBlock2,intervaloSuperiorBlock1,jogada);
        }
        if((linhaVertical > intervaloSuperiorBlock1) && (linhaVertical <= intervaloSuperiorBlock2)){
            verificador = verificarBloco(tabuleiro,intervaloInferiorBlock2,intervaloInferiorBlock2,intervaloSuperiorBlock2,intervaloInferiorBlock2,jogada);
        }
        if(linhaVertical > intervaloSuperiorBlock2){
            verificador = verificarBloco(tabuleiro,intervaloInferiorBlock2,intervaloInferiorBlock3,intervaloSuperiorBlock2,intervaloSuperiorBlock3,jogada);
        }
    }
    if(linhaHorizontal > intervaloSuperiorBlock2){
        if(linhaVertical <= intervaloSuperiorBlock1){
            verificador = verificarBloco(tabuleiro,intervaloInferiorBlock3,nulo,intervaloSuperiorBlock3,intervaloSuperiorBlock1,jogada);
        }
        if((linhaVertical > intervaloSuperiorBlock1) && (linhaVertical <= intervaloSuperiorBlock2)){
            verificador = verificarBloco(tabuleiro,intervaloInferiorBlock3,intervaloInferiorBlock2,intervaloSuperiorBlock3,intervaloSuperiorBlock2,jogada);
        }
        if(linhaVertical > intervaloSuperiorBlock2){
            verificador = verificarBloco(tabuleiro,intervaloInferiorBlock3,intervaloInferiorBlock3,intervaloSuperiorBlock3,intervaloSuperiorBlock3,jogada);
        }
    }
    return verificador;
    
}

/*A função gerarAleatorios, alem de gerar, está verificando se a linhaHorizontal/linhaVertical são validas
e se o numero pode ser inserido sem prejudicar as regras do sudoku.o segundo while valida a linhaHorizontal
e a linhaVertical, o terceiro while, valida se o numero esta de acordo com as regras do sudoku. O professor
prefere que as funcoes façam apenas uma tarefa, entretanto, esta forma, ficou mais claro para mim quando 
estava elaborando as funções e por isso optei por nao criar novas subfunções para validar a linhaHorizontal,
linhaVertical e o numero*/
void gerarAleatorios(int tabuleiro[][tam], int seguranca[][tam]){
   
    int aleatorio, linhaHorizontal, linhaVertical;
    int incremento = nulo;
   
    while(incremento < tam){
        srand(time(NULL));
        aleatorio = rand()%9+1;
        linhaHorizontal = rand()%9;
        linhaVertical = rand()%9;
        while(tabuleiro[linhaHorizontal][linhaVertical] != nulo){
            linhaHorizontal = rand()%9;
            linhaVertical = rand()%9;
            }
        while((localizarBloco(tabuleiro, linhaHorizontal, linhaVertical, aleatorio)
                    || verificarColuna(tabuleiro, linhaVertical, aleatorio)
                    || verificarLinha(tabuleiro, linhaHorizontal, aleatorio)) != valido){
            aleatorio = rand()%9+1;
            }
           tabuleiro[linhaHorizontal][linhaVertical] = aleatorio;
           seguranca[linhaHorizontal][linhaVertical] = aleatorio;
           incremento = incremento + valorMinimo;
    }
}

/*Esta função mostra o tabuleiro no prompt, é uma função trivial de
imprimir matriz, entretanto, ela tem algumas modificacoes para simular
o tabuleiro e colocar os numeros digitados pelo usuario em verde, o 
imutaveis em roxo, os nulos em azul e a tabela em vermelho.*/
void mostrarTabuleiro(int tabuleiro[][tam], int seguranca[][tam]){
    
    int linhaVertical = nulo;
    int linhaHorizontal = nulo;
    int intervaloInferior = 3;
    vermelho; printf("|---+-1--2--3-+-4--5--6-+-7--8--9-|\n");
    while(linhaHorizontal < tam){
        vermelho; printf("| %d |",linhaHorizontal + valorMinimo);
        linhaVertical = nulo;
        while(linhaVertical < tam){
            azul;
           if(tabuleiro[linhaHorizontal][linhaVertical] != valido){
               if(seguranca[linhaHorizontal][linhaVertical] == tabuleiro[linhaHorizontal][linhaVertical]){
                   roxo; /*Este é o numero imutavel*/
               }else{
                   verde; /*Este é o numero Digitado pelo usuario e deve ser mostrado na cor verde, caso ele seja entre 1 a 9*/
               }
            }
            printf(" %d ",tabuleiro[linhaHorizontal][linhaVertical]);
            linhaVertical = linhaVertical + valorMinimo;
            if((linhaVertical % intervaloInferior) == valido){
               vermelho; printf("|");
            }
        }
        printf("\n");
        linhaHorizontal = linhaHorizontal + valorMinimo;
        if((linhaHorizontal % intervaloInferior) == valido){
           vermelho; printf("----+---------+---------+---------+\n");
        }
    }
 }

 /*A função a seguir, verifica se a linhaVertical, linhaHorizontal e numero, estao no intervalo correto, se o usuario
 está tentando alterar um numero imutavel e se a jogada é valida.*/
int verificarJogada(int tabuleiro[][tam], int linhaHorizontal, int linhaVertical, int numero, int seguranca[][tam]){
   
   int verificador = nulo;

   if((linhaHorizontal == invalido || linhaVertical == invalido || numero == invalido)
   ||(seguranca[linhaHorizontal][linhaVertical])!= valido){
       verificador = verificador + valorMinimo;
   }    
    if((verificarColuna(tabuleiro, linhaVertical, numero) 
        || verificarLinha(tabuleiro, linhaHorizontal, numero) 
        || localizarBloco(tabuleiro, linhaHorizontal, linhaVertical, numero)) != valido){
        verificador = verificador + valorMinimo;
    }
    if((numero < valorMinimo) || (numero > tam)){
        verificador =  verificador + valorMinimo;
    }
    return verificador;
}

 /*A função a seguir, imprime para o usuario se sua jogada foi valida ou nao, a variavel verificador
 recebe como parametro o resultado obtido na função verificarJogada(), lembrando que a função
 verificarJogada informa se a jogada foi possivel ou nao. caso seja possivel, a jogada é inserida
 e a mensagem de sucesso será mostrada*/
void jogada(int tabuleiro[][tam], int linhaHorizontal, int linhaVertical, int numero, int seguranca[][tam],
            circular** ponteiroInicial, circular** ponteiroFinal){
    
     int verificador;
     
     verificador = verificarJogada(tabuleiro, linhaHorizontal, linhaVertical, numero, seguranca);
     if(verificador == valido){
         jogadaRealizada();
         tabuleiro[linhaHorizontal][linhaVertical] = numero;
         insereInicioCircular(&*ponteiroInicial, &*ponteiroFinal,numero,linhaVertical, linhaHorizontal);
     }else{
         jogadaInvalida();
     }
    getchar();
 }

/*A função a seguir verifica se o jogo acabou, ora, so é permitido jogadas validas
no meu sudoku, entao se a matriz (tabuleiro) estiver toda preenchida, significa que o usuario
completou com sucesso o jogo.*/
int verificarFim(int tabuleiro[][tam]){

    int linhaHorizontal = nulo, linhaVertical = nulo, verificador = nulo;
    
    while(linhaHorizontal < tam){
        linhaVertical = nulo;
        while(linhaVertical < tam){
            if(tabuleiro[linhaHorizontal][linhaVertical] == nulo){
                verificador = verificador + valorMinimo;
            }
            linhaVertical = linhaVertical + valorMinimo;
        }
        linhaHorizontal = linhaHorizontal + valorMinimo;
    }
    return verificador;
}

/*Função para capturar a jogada realizada pelo usuario e ja enviar para
outra função "jogada" que ja foi descrita acima.*/
void inserirJogada(int tabuleiro[][tam], int seguranca[][tam],circular** ponteiroInicial, circular** ponteiroFinal){
   
    int linhaVertical,linhaHorizontal,numero;
    
    linhaHorizontal = recebeLinhaHorizontal();
    linhaVertical = recebeLinhaVertical();
    numero = recebeNumero();
    if(tabuleiro[linhaHorizontal][linhaVertical] != nulo){
        vermelho;printf("Impossivel inserir!\n");
    }else{
    jogada(tabuleiro,linhaHorizontal,linhaVertical,numero,seguranca,&*ponteiroInicial, &*ponteiroFinal);
    }
}

/*Esta é uma função para tratar a entrada que o usuario digitou
para linhaVertical, caso ele digite uma string, caracter especial ou um numero fora do intervalo
, este então será transformado em inteiro e analisado, caso seja valido será enviado com o seu
valor original, caso contrario sera enviado com o valor -1.*/
int recebeLinhaVertical(){
    
    char linhaVerticalString[tam];
    int linhaVerticalInteiro;
    
    azul;printf("\nDigite uma Coluna = ");
    fgets(linhaVerticalString, sizeof(linhaVerticalString), stdin);
    sscanf(linhaVerticalString, "%d", &linhaVerticalInteiro);
    if((linhaVerticalInteiro > tam) || (linhaVerticalInteiro < valorMinimo)){
        linhaVerticalInteiro = invalido;
    }else{
        linhaVerticalInteiro = linhaVerticalInteiro - valorMinimo;
    }
    
    return linhaVerticalInteiro;
}

/*Esta é uma função para tratar a entrada que o usuario digitou
para linhaHorizontal, caso ele digite uma string, caracter especial ou um numero fora do intervalo
,este então será transformado em inteiro e analisado, caso seja valido será enviado com o seu
valor original, caso contrario sera enviado com o valor -1.*/
int recebeLinhaHorizontal(){

    char linhaHorizontalString[tam];
    int linhaHorizontalInteiro;
    
    azul;printf("\nDigite uma linha = ");

    fgets(linhaHorizontalString, sizeof(linhaHorizontalString), stdin);
    sscanf(linhaHorizontalString, "%d", &linhaHorizontalInteiro);
    if((linhaHorizontalInteiro > tam) || (linhaHorizontalInteiro < valorMinimo)){
        linhaHorizontalInteiro = invalido;
    }else{
        linhaHorizontalInteiro = linhaHorizontalInteiro - valorMinimo;
    }

    return linhaHorizontalInteiro;
}

/*Esta é uma função para tratar a entrada que o usuario digitou
para o numero que sera inserido no tabuleiro, caso ele digite uma 
string, caracter especial ou um numero fora do intervalo ,este então 
será transformado em inteiro e analisado, caso seja valido será enviado 
com o seu valor original, caso contrario sera enviado com o valor -1.*/
int recebeNumero(){
    
    char numeroString[tam];
    int numeroInteiro;
    printf("\nDigite o numero que deseja inserir no tabuleiro = " );
    fgets(numeroString, sizeof(numeroString), stdin);
    sscanf(numeroString, "%d", &numeroInteiro);
    if((numeroInteiro > tam) || (numeroInteiro < valorMinimo)){
        numeroInteiro = invalido;
    }

    return numeroInteiro;
}

/*Esta é uma função para tratar a entrada que o usuario digitou
para opcao dos menus que serao mostrados, caso ele digite uma string, caracter especial ou um 
numero fora do intervalo ,este então será transformado em inteiro, sua analise será feita no while
do programa principal*/

int verificaNumero(){
    
    char opcaoString[tam];
    int opcaoInteiro;
    
    fgets(opcaoString, sizeof(opcaoString), stdin);
    sscanf(opcaoString, "%d", &opcaoInteiro);
    return opcaoInteiro;
}

/*esta função será utilizada para mostrar o resultado final, 
sucesso ou fracasso do jogador.*/
void resultadoFinal(int fimJogo){
   
    if(fimJogo == 1){
        printf("\nParabens por completar o Sudoku!\n");
    }else{
        printf("\nVc Desistiu com sucesso '-'!\n");
    }
}

/*Esta função permite que o usuario anule jogadas realizadas 
anteriormente, deixando assim a casa do tabuleiro escolhida com o valo nulo
, esta função checa antes 3 regras e caso passe nessas regras, ele permite 
a anulação do valor.*/
void anulaJogada(int tabuleiro[][tam], int seguranca[][tam],circular** ponteiroInicial, circular** ponteiroFinal){

    if(quantidadeJogadas(tabuleiro, seguranca) == nulo ){
        vermelho;printf("\nOperação invalida - não existem jogadas anteriores!");
    }
    else{
        int linhaHorizontal = recebeLinhaHorizontal();
        int linhaVertical = recebeLinhaVertical();
        
        if((linhaHorizontal == invalido || linhaVertical == invalido)
            ||((seguranca[linhaHorizontal][linhaVertical])!= valido)){
            vermelho; printf("\nOperação invalida - Dados de entrada incorretos!\n");

        }else{
            if(tabuleiro[linhaHorizontal][linhaVertical] == nulo){
                vermelho; printf("\nOperação invalida - Posição já esta nula!");

            }else{
                tabuleiro[linhaHorizontal][linhaVertical] = nulo;
                removeJogadaCircular(&*ponteiroInicial, &*ponteiroFinal,linhaVertical,linhaHorizontal);
                verde; printf("\nRemoção realizada com sucesso!");
            }
        }    
    }
    getchar();
}
void alterarJogada(int tabuleiro[][tam], int seguranca[][tam], circular** ponteiroInicial, circular** ponteiroFinal){
    if(quantidadeJogadas(tabuleiro, seguranca) == nulo ){
        vermelho;printf("\nOperação invalida - não existem jogadas anteriores!");
    }
    else{
        int linhaHorizontal = recebeLinhaHorizontal();
        int linhaVertical = recebeLinhaVertical();
        int valor = recebeNumero();
        
        if((linhaHorizontal == invalido || linhaVertical == invalido) 
            ||((seguranca[linhaHorizontal][linhaVertical])!= valido)){
            vermelho; printf("\nOperação invalida - Dados de entrada incorretos!\n");

        }else{
            if((tabuleiro[linhaHorizontal][linhaVertical] == nulo) || (tabuleiro[linhaHorizontal][linhaVertical] == valor)){
                vermelho; printf("\nOperação invalida - Posição já esta nula!");

            }else{
                removeJogadaCircular(&*ponteiroInicial, &*ponteiroFinal,linhaVertical,linhaHorizontal);
                jogada(tabuleiro,linhaHorizontal,linhaVertical,valor,seguranca,&*ponteiroInicial, &*ponteiroFinal);
               
                if(tabuleiro[linhaHorizontal][linhaVertical] == valor){
                 azul; printf("\nAlteração realizada com sucesso!\n");
                }
            }
        }    
    }
    getchar();

}
/*Função que verifica se o jogador ja realizou alguma jogada, ela retornará 
exatamente a quantidade de jogadas que o usuario inseriu com sucesso,
jogadas invalidas não contam.*/
int quantidadeJogadas(int tabuleiro[][tam], int seguranca[][tam]){

    int linhaHorizontal = nulo, linhaVertical = nulo, contador = nulo;
    
    while(linhaHorizontal < tam){
        linhaVertical = nulo;
        while(linhaVertical < tam){
            if((tabuleiro[linhaHorizontal][linhaVertical] != valido) 
            && (seguranca[linhaHorizontal][linhaVertical]) == nulo){
                contador = contador + valorMinimo;
            }
            linhaVertical = linhaVertical + valorMinimo;
        }
        linhaHorizontal = linhaHorizontal + valorMinimo;
    }
    return contador;
}


/*função de criação dos elementos da lista,
ela cria a estrutura, recebe o valor,
e faz o proximo apontar para NULL e por
fim retorna a estrutura ja configurada.*/
lista* criaNo(int possibilidades){
    
    lista* novo;
    novo = (lista*)malloc(sizeof(lista));
    novo->possibilidade = possibilidades;
    novo->proximo = NULL;
    return novo;
}

/*Função recursiva para localizar e retonar 
o ultimo elemento da lista.*/
lista* ponteiroFinalRecursivo(lista* inicio){
    
    if(inicio == NULL){
        return NULL;
    }
    if(inicio->proximo == NULL){
        return inicio;
    }
    ponteiroFinalRecursivo(inicio->proximo);
}

/*Função de inserção na lista, ela insere sempre no final similar 
uma fila, sendo assim necessario criar um ponteiro auxiliar para o 
fim e chamar uma função auxiliar para localizar o ultimo elemento e 
apos isso inserir depois dele*/
lista* inserePossibilidades(lista* inicio, int possibilidade){
   
    lista *fim = ponteiroFinalRecursivo(inicio);
    if(inicio == NULL){
        inicio = criaNo(possibilidade);
    }else{
        fim->proximo = criaNo(possibilidade);
    }
    return inicio;
}

/*Função recursiva que imprime os elementos da lista*/
void imprimePossibilidadesRecursivo(lista **inicio){
   
    if(*inicio != NULL){
        imprimePossibilidadesRecursivo(&(*inicio)->proximo);   
         printf("-> %d ", (*inicio)->possibilidade);
    }
}

/*Função recursiva simiilar a imprimePossibilidadesRecursivo,
a unica diferença é que esta deleta todos os elementos a lista*/
void deletaPossibilidadesRecursivo(lista **inicio){
   
    if(*inicio != NULL){
        deletaPossibilidadesRecursivo(&(*inicio)->proximo);
    }
    free(*inicio);
    *inicio = NULL;
}

/*Esta função verifica quais jogadas podem ser feitas,se uma jogada poder ser feita, ela será armazenada na lista
, caso contrario uma mensagem de erro aparecera.*/
lista* verificaPossibilidades(int tabuleiro[][tam], int seguranca[][tam], lista* inicio){
    
    int linhaVertical, linhaHorizontal, contador = tam, verificador = nulo;

    linhaHorizontal = recebeLinhaHorizontal();
    linhaVertical = recebeLinhaVertical();
    if((linhaHorizontal == invalido || linhaVertical == invalido) || seguranca[linhaHorizontal][linhaVertical] != valido){
        vermelho;printf("\nOperação invalida!");
    }else{
        inicio = inserePossibilidadesListaRecursiva(tabuleiro, seguranca, inicio, linhaHorizontal, linhaVertical, contador);
    }
    return inicio;
}

/*Explicação*/
lista* inserePossibilidadesListaRecursiva(int tabuleiro[][tam], int seguranca[][tam], lista* inicio, int linhaHorizontal, int linhaVertical, int valores){
    int verificador = nulo;

    if(valores == nulo){
        return inicio;
    }else{
        verificador = verificarJogada(tabuleiro, linhaHorizontal, linhaVertical, valores,seguranca);
        if(verificador == valido){
            inicio = inserePossibilidades(inicio, valores);
        }
        inserePossibilidadesListaRecursiva(tabuleiro, seguranca, inicio, linhaHorizontal, linhaVertical, valores - valorMinimo);
    } 
}
/*Função qiue verifica se existem lementos na lista, se a lista for vazia
uma mensagem de erro será mostrada, lista não vazia será mostrada para o 
usuario com suas possiveis jogadas*/
void possibilidades(lista* inicio){
    if(inicio == NULL){
        vermelho;printf(" Entrada incorreta ou não existem jogadas possiveis para posição solicitada");
    }else{
        verde; printf("Suas possibilidades de jogadas para esta casa do tabuleiro = ");
        imprimePossibilidadesRecursivo(&inicio);
    }
    getchar();
}

/*Funcao para criar a estrutura para elementos da lista circular.*/
circular* criaNoCircular(int valor, int coluna, int linha){
     circular* novo = (circular*)malloc(sizeof(circular));
    novo->valor = valor;
    novo->coluna= coluna;
    novo->linha = linha;
    novo->proximo = novo;
    novo->anterior = novo;

    return novo;
}

/*funçao para remover da lista circular, esta funçao analise e trata se a remocao, sera no inicio, no fim, no meio da lista*/
int removeJogadaCircular(circular** ponteiroInicial, circular** ponteiroFinal,int coluna, int linha){
    circular* atual = *ponteiroInicial;
    circular* anterior = *ponteiroFinal;

    if(*ponteiroInicial == NULL){
        printf("impossivel deletar!\n");
        return 0;
    }
    if(atual == anterior){
    	
        free(anterior); 
        *ponteiroInicial = NULL;
        *ponteiroFinal = NULL;
        return 1;
    }else{
        do{
            if((atual->coluna == coluna) && (atual->linha == linha)){
                if(atual == *ponteiroInicial){
                    *ponteiroInicial = atual->proximo;
                    (*ponteiroFinal)->proximo = atual->proximo;
                    (*ponteiroInicial)->anterior = *ponteiroFinal;
                    free(atual);
                    return 1;
                }else{
                    anterior->proximo = atual->proximo;
                    if(atual == *ponteiroFinal){
                        *ponteiroFinal = anterior;
                        (*ponteiroFinal)->proximo = *ponteiroInicial;
                        (*ponteiroInicial)->anterior = *ponteiroFinal;

                    }
                    free(atual);
                    return 1;
                }
            }
            else{
                anterior = atual;
                atual = atual->proximo;
            }
        }while(atual != *ponteiroInicial);
    }
}
/*Esta funçao recebe os valores, da jogada, da  linha, da coluna, os ponteiros e sempre insere no inicio da lista. */
void insereInicioCircular(circular** ponteiroInicial, circular** ponteiroFinal, int valor, int coluna, int linha){
    circular* novo = criaNoCircular(valor, coluna, linha);

    if(*ponteiroInicial == NULL){
        *ponteiroInicial = novo;
        *ponteiroFinal = novo;
    }else{
        novo->anterior = *ponteiroFinal;
        (*ponteiroFinal)->proximo = novo;
        novo->proximo = *ponteiroInicial;
        (*ponteiroInicial)->anterior = novo;
        *ponteiroInicial = novo;
    }
}

/*Funçao para imprimir os elementos da lista levando em consideraçao o ultimo elemento*/
void imprimeCircular(circular** ponteiroFinal){
    int contador = 1;
    circular* inicio;
    inicio = (*ponteiroFinal);
    if(inicio == NULL){
        vermelho;printf("Nenhuma Jogada foi localizada!\n");
    }else{
        printf("\tJOGADAS\n");
        do{
            printf("+=====================+\n");
            printf("|%dº Jogada           |\n", contador);
            printf("|Linha - %d           |\n",inicio->linha + 1);
            printf("|Coluna - %d          |\n",inicio->coluna + 1);
            printf("|Jogada - %d          |\n",(inicio)->valor);

            inicio = inicio->proximo;
            contador = contador + 1;
        }while(inicio != *ponteiroFinal);
        printf("+=====================+\n");
    }
}

/*Menu mostrado acima do tabuleiro com a matrícula e nome do aluno*/
void menuInicial(){
        
        branco;
        printf("+---------------------------------+\n");
        printf("|         Marcos Augusto	  |\n");
        printf("|---------------------------------|\n");
        printf("|             SuDoKu              |\n");
        printf("+---------------------------------+\n");
}

/*Menu com as opcoes discponiveis para o usuario*/
void menu(int tabuleiro[][tam], int seguranca[][tam]){
    
    menuInicial();
    mostrarTabuleiro(tabuleiro, seguranca);
    branco;printf("\n\n\t1 - Realizar Jogada\n");
    printf("\t2 - Alterar jogada anterior\n");
    printf("\t3 - Remover jogada anterior\n");
    printf("\t4 - Verificar Possibilidades\n");
    printf("\t5 - Imprimir Jogadas\n");
    printf("\t6 - Sair");
    verde;printf("\n\t=>  Digite uma opcao = ");
}

/*Menu mostrado para o usuario que deseja dessistir*/
void menuJogada(){
   
    branco;;printf("\n\nDeseja mesmo abandonar partida?\n");
    verde;printf("\n\t1 - nao\n");
    vermelho;printf("\t6 - sim\n");
}

/*esta função mostra uma mensagem que se repetia muito no codigo, 
sendo assim mais pratico tornala uma função*/
void opcaoinvalida(){
   
    printf("\nOpcao Invalida - Digite opcao 1 ou 2!\n\n");
    getchar();
}

/*esta função mostra uma mensagem que se repetia muito no codigo, 
sendo assim mais pratico tornala uma função*/
void jogadaRealizada(){
    
    verde; printf("\nJogada Realizada!\n\n");
}

/*esta função mostra uma mensagem que se repetia muito no codigo, 
sendo assim mais pratico tornala uma função*/
void jogadaInvalida(){
    
    vermelho; printf("\nJogada Invalida! - Preste mais atencao!!\n\n");
}
