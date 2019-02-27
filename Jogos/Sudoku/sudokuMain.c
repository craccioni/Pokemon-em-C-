#include "sudokuFuncoes.c"

/*Neste sudoku foi implementado utilizando o conceito de TAD, por isso foram criadas três páginas:

sudoku.h :: Nela está contido o tamanho do tabuleiro e os protótipos de todas as funções
que foram usadas neste programa,

sudokuFuncoes.c :: Nela está contida a elaboração de todas as funções implementadas e
utlizadas neste programa

sudokuMain.c :: Nela está a função principal para compilação de todo o programa.

Os códigos foram elaboradas inicialmente para serem compilados no gcc, requerendo assim alterações
caso vc use outra plataforma.

Todos os codigos devem ser salvos na mesma página para o seu devido funcionamento*/

/*Este codigo foi exaustivamente testado, entretando bugs podem ocorrer!*/

/*============================================================================*/
int main(){
    
    int opcao;
    int checaTabuleiro = 0, fimJogo = 0, tamOpcao = 0;
    int tabuleiro[tam][tam]; /*Matriz que gera o tabuleiro do jogo*/
    int seguranca[tam][tam]; /*Matriz usada apenas para chegar os imutaveis*/
    lista *listaSimples= NULL;
    circular* ponteiroInicial = NULL;
    circular* ponteiroFinal = NULL;

    iniciarTabuleiro(tabuleiro,seguranca);
    gerarAleatorios(tabuleiro,seguranca);
    
    while((opcao != 6) && (fimJogo != 1)){
        system("clear");
        menu(tabuleiro, seguranca);
        opcao = verificaNumero();
        
        switch(opcao){          
            case 1:
                inserirJogada(tabuleiro, seguranca, &ponteiroInicial, &ponteiroFinal);               
                checaTabuleiro = verificarFim(tabuleiro);
                getchar();
                if(checaTabuleiro == 0){
                    fimJogo = 1;
                }
                break;
            case 2:
                    alterarJogada(tabuleiro, seguranca, &ponteiroInicial, &ponteiroFinal);
                    break;
            case 3:
                    anulaJogada(tabuleiro, seguranca, &ponteiroInicial, &ponteiroFinal);
                    break;
            case 4:
                   listaSimples = verificaPossibilidades(tabuleiro, seguranca, listaSimples);
                   possibilidades(listaSimples);
                   deletaPossibilidadesRecursivo(&listaSimples);
                   break;
            case 5:
                   imprimeCircular(&ponteiroFinal);
                   getchar();
                   break;
            case 6:
                do{
                    system("clear");
                    menu(tabuleiro, seguranca);
                    menuJogada();
                    opcao = verificaNumero();
                    if((opcao != 6) && (opcao != 1)){
                        opcaoinvalida();
                    }
                }while((opcao != 6) && (opcao != 1));
                break;
                
            default:
                opcaoinvalida();
        }    
    }    
    resultadoFinal(fimJogo);
    return 0 ;
}
   