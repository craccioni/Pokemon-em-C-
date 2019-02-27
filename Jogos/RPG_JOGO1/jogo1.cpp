#include<conio.h>
#include<string.h>
#include"cai.cpp"
#include"topo.cpp"
#include"muda.cpp"
#include"comentario.cpp"
#include"acao.cpp"
#include"parede.cpp"
#include"paredep.cpp"
#include"conio.cpp"
#include"digames.cpp"
#define G gotoxy
#define PR printf
#define PU puts
#define D delay
#define W delay(1500);
#define MEIO delay(500)
#define T delay(50)
#define FORARONNEY 1
#define FORASHOP 2
#define FORAOSLVADIR 3
#define SHOP 4
#define SABESP 5
#define POSTO 6
#define CASTELO 7
#define PIRAMIDE 8
#define FORALASVEGAS 9
#define HOGWARTS 10
#define CEP 11
#define TREM 12
#define VILA 13
#define OSLVADIR 102
#define HOTELHUB 110
#define LASVEGAS 300
#define CLOTILDE 112
#define harry demilton
#define ZERAPOTE alcool=0;gasolina=0;agua=0;aranha=0;mosca=0;
main(){
  int limpaquemexeu=0,fasespectral=0;
  int pgpiramide=15,openpiramide=0,jogoteste=0,pgindio=35,morreu=0,cabelo=0;
  int randomico,comentv,perfumaria,X,Y,caifora=0,y2=0,diagonal=0;
  int saiprova=0,aurelio=0,faltamrespr=10,certrespr=0,hermione=0,passteste=0;
  int aa=0,ab=0,ba=0,bb=0,bc=0,bd=0,ca=0,cb=0,cc=0,cd=0,da=0,db=0,dc=0,dd=0;
  int certo=0,usuario=0,demilton=500,dimas=1500,cabrini=3000,sua=20,hp=10000;
  int adv1=0,adv2=0,adv3=0,adv4=0,adv5=0,william=0,psand=0,ppedra=0;
  char pegasua; int quantia,pass=0,pedra=0,sanduiche=0,chave=0,direcional;
  int transf=0,mostra=0,corda=0,comentario=0,livro=0,andars=0,contlivro=0;;
  int get=0,b=0,c=1,barra=0,muro=1,e,t=1,tt=0,bolsa=0,maxpower=0;
  int tempo=90,aprendeu=0,sequencia=0,forma=1,jump=1,speed=2,subir=0;
  int rs=0,pulo=25, agil=10, conhecimento=1,pote=0;
  int x=25,y=20,fase=102,tela=0,antefase=0,password=0,senha=0,tpassword=0;
  int goku=0,espectro=0,agua=0,gasolina=0,alcool=0,aranha=0,mosca=0;
  int passaporte=0,vida=1,sangue=20,SANGUE=20;
  int joquemy=0,joquepc=0,teclajoque,joquemeu=0,jqpontpc=0,jqponteu=0,joquemrs=0;
  char bonec[15]; char tecla=3; char barrig='#'; char pc[20];
  char testep[10], resp[20];
  int antevida=vida,antesangue=SANGUE;
  char bujiganga[10]={"BUJIGANGA"};
  randomico=rand()%10;
  clrscr();
    while(1 && vida>0){
       caifora=0;  
       //if(limpaquemexeu!=2)
       if((tecla=='s' || tecla=='f' || tecla=='d' || tecla=='e')&& b==1)limpaquemexeu=2;
       //if(limpaquemexeu==0)
  //     clrscr();
      if(limpaquemexeu==2 || kbhit()){ 
         G(x,y-1);puts("   ");
         G(x,y);puts("   ");
         G(x,y+1);puts("   ");
         G(x,y+2);puts("   ");
         limpaquemexeu=0;                         
                            }
     
       //caso ele morra
if(morreu==1){
clrscr();
G(10,10);puts("   ||||||||||||");
G(10,11);puts("  ! ,,,    ,,, !");
G(10,12);puts(" (!( @ )!!( @ )!)");
G(10,13);puts("  !     ##     ! ");
G(10,14);  PR("  !    \xC8\xCD\xCD\xBC    !");
G(30,12); printf("%dx%c",vida,1);
delay(1000);
G(10,11);puts("  !            !");
G(10,12);puts(" (!(---)||(---)!)");
delay(1000);
for(int i=0;i<20;i++){
G(30,12); printf(" x%c ",1);delay(20);
G(30,12); printf("%dx%c ",vida,1);delay(20);
                       }
morreu=0; x=35;y=15;fase=3; forma=1;
vida--;        
if(vida==0){
G(30,12);printf("%dx%c",vida,1);delay(100);
G(10,12);puts(" (|(,,,)||(,,,)|)");
G(30,13);puts("morreu!!!!!!!!!!!!!");
delay(3000);
getche();
             }
else {
     G(30,13);puts("VOCE PERDEU 1 VIDA!!!!!!!!!!!!");
     delay(3000);
     getch();
     }
clrscr(); continue;
         }
       //fim caso ele morra
       X=Y=0;
       if(tecla==27) while(1){//menu  menu menu menu menu menu
       clrscr();
       if(caifora>0)break;
       if(maxpower>1){ 
       G(1,1);printf("X=%d Y=%d TECLA=%d FASE=%d",X,Y,tecla,fase);}
       G(1,4);printf("Demonstracao ateh a habilidade de mosca!"); 
       G(1,5);printf("VERSAO 1.0 ---> CONHECIMENTO MAXIMO : 98");
       G(19,8);puts("PERSON  ");
       G(19,10);puts("TECNICAS");
       G(19,12);puts("ITENS");
       G(19,14);puts("FECHAR     ");
       G(19,16);  PU("SAIR       ");
if(Y>-1){
G(18,Y+7);printf("%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,187);
G(18,Y+8);printf("%c",186);G(27,Y+8);PR("%c",186);
G(18,Y+9);printf("%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,188);}//fimse y>0
tecla=getche();
clrscr();
if(tecla==27){caifora=1;tecla='a';break;}
if(tecla==-32){tecla=getche();
switch(tecla){
              case 72:if(Y==0){Y=6;break;}Y=((Y-2)%10);break;
              case 80:Y=((Y+2)%10);break;}//fim swtich
}//se codigo extendido
if(Y==8 && tecla==13){caifora=2;tecla='a';continue;}
if(Y==6 && tecla==13){caifora=1;tecla='a';continue;}
if((tecla==13 || tecla==77) && Y==4 ){//ve item
             y2=0;
             do{
             for (int i=5;i<17;i++){G(30,i);puts("|");G(75,i);puts("|"); } 
             G(35,5);printf("SANDUICHE= %d",sanduiche);
             G(35,7);printf("CORDA    = %d",corda);
             G(35,9);printf("PEDRA    = %d",pedra);
             G(35,11);printf("CHAVE    = %d",chave);
             G(35,13);printf("(%d)LIVRO=  %d",contlivro,livro);
if(passaporte>0){G(55,6);puts("PASSAPORTE");}
if(cabelo!=0){G(55,7);puts("FIO DE CABELO");}
if(aprendeu>19){G(55,10);puts("VARINHA DE MAGIA");}
if(aprendeu==24){G(55,7);puts("Pacote de Trakinas");}
if(aprendeu==25){G(55,7);puts("CD POWERGUIDO     ");}
//if(aprendeu==27){G(55,7);puts("");
G(34,y2+4);printf("%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,187);
G(34,y2+5);printf("%c",186);G(44,y2+5);PR("%c",186);
G(34,y2+6);printf("%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,188);             
G(34,15);tecla=getche();G(34,15);puts(" ");
G(34,y2+4);printf("           ");
G(34,y2+5);printf(" ");G(44,y2+5);PR(" ");
G(34,y2+6);printf("           ");
             if(tecla==-32 ){tecla=getche();
                                   switch(tecla){
                                         case 72:
                                              if(y2==0){y2=8;break;}
                                              y2=((y2-2)%10);break;
                                         case 80:y2=((y2+2)%10);break;
                                                 }
                             }
             }while(tecla!=75 && tecla!=27);
             }//fim ve item
if(Y==2 && tecla==13){
while(tecla!=75 && tecla!=27){        
for (int i=5;i<17;i++){G(30,i);puts("|");G(75,i);puts("|"); } 
        if(pote>0)     {G(35,9);  puts("POTE--------------------(P)");}
        if(aprendeu>3) {G(35,10); puts("HACKER-----------------(1&2)");}
        if(aprendeu>10){G(35,11); puts("INVISIBILIDADE---------(1&3)");}
        if(aprendeu>20){G(35,12); puts("MAGIA-------------------(M)");}
//        if(aprendeu>25){G(35,13); puts("Flauta------------------(Y) ");}
//        if(aprendeu>30){G(36,14); puts("GRAMPO------------------(G)");}
//        if(aprendeu>40){G(36,15); puts("SONIFERO----------------(Z)");}
        if(espectro>0){G(35,13);puts("Poder espectral----------(H&J)");}
        if(aprendeu>50){G(35,16); puts("ARANHA-----------------(1&4)");}
        if(aprendeu>70){G(35,17); puts("MOSCA------------------(1&5)");}
        if(goku>0){G(35,18);      puts("TELETRANSPORTE-------<ENTER>");}
        if(diagonal!=0){G(35,19); puts("PULO DIAGONAL ---------<W&R>");}
        tecla=getche();                                  }
        }//fimse ve tecnicas
if(Y==0 && tecla==13){
do{
gotoxy(1,10);pulo=jump*25;
printf("R$:%d\t\t|\nvida:%dx%c\t|\nsangue:%d/%d\t|\nconhecimento:%d\t|\npulo:%d\t\t|\nagilidade:%d\t|\n",
        rs,vida,1,sangue,SANGUE,conhecimento,pulo,agil); 
tecla=getche();
}while(tecla!=75 && tecla!=27);
        }

                        }//fim menu fimmenu fimenu fimenu fimenu fimenu
if(caifora==2)break; if(caifora==1){clrscr();continue;}
e=0; conhecimento=aprendeu;//if(aprendeu>4)livro=2;
if(speed==3)tempo=50;else if(speed==2)tempo=75;else
if(speed==1)tempo=100;else if(speed==0)tempo=120;else
if(speed==4)tempo=5;
agil=speed*20+20;
if(conhecimento>12)jump=2;

//recebendo transformações e itens
if(antevida<vida){
G(10,10);puts("VOCE GANHOU 1 VIDA");W;getche();clrscr();antevida=vida;}
if(antesangue!=SANGUE){
G(10,10);puts("VOCE GANHOU SANGE+20!");W;getche();clrscr();antesangue=SANGUE;}
if(pote==1){gotoxy(10,10);puts(" VOCE COMPROU ... ");delay(1500);
gotoxy(10,11);puts(" UM POTE !!!...??? ");delay(1500); pote=2; getche();clrscr();}
if(passteste==1){gotoxy(10,10);puts("VOCE GANHOU ...");delay(1500);
gotoxy(10,11);puts("Um passaporte de trem");delay(1500); passaporte=1; passteste=2;getche();clrscr();}
if(gasolina==1){G(10,10);puts("VOCE PEGOU GASOLINA!!!");ZERAPOTE gasolina=2;getche();clrscr();}
if(alcool==1){G(10,10);puts("VOCE PEGOU ALCOOL!!!!"); ZERAPOTE alcool=2;getche();clrscr();}
if(aranha==1){G(10,10);puts("VOCE PEGOU UMA ARANHA!!!!"); ZERAPOTE aranha=2;getche();clrscr();}
if(mosca==1){G(10,10);puts("VOCE PEGOU UMA MOSCA!!!!"); ZERAPOTE mosca=2;getche();clrscr();}
if(ppedra<pedra){G(10,10);puts("VOCE PEGOU 1 PEDRA");W;ppedra=pedra;getche();clrscr();}
if(psand<sanduiche){G(10,10);PU("VOCE PEGOU 1 SANDUICHE");W;psand=sanduiche;getche();clrscr();}
if(adv1==2 && fase==9){G(10,10);puts("VOCE PEGOU RS 200,00");W;adv1=3;rs=rs+200;getche();clrscr();}
if(adv2==2 && fase==9){G(10,10);puts("Voce PEGOU RS 500,00");delay(1500);adv2=3;rs=rs+500;getche();clrscr();}
if(adv3==2 && fase==9){G(10,10);puts("VOCE PEGOU RS 1000,00");delay(1500); adv3=3;rs=rs+1000;getche();clrscr();}
if(bolsa==1){G(10,10);PU("VOCE PEGOU RS 100,00");delay(1500);bolsa=2;rs=rs+100;getche();clrscr();}
if(bolsa==3){G(10,10);PU("VOCE PEGOU RS 700,00");delay(1500);bolsa=4;rs=rs+700;getche();clrscr();}
if(bolsa==5){G(10,10);PU("VOCE PEGOU RS 2000,00");delay(1500);bolsa=6;rs=rs+2000;getche();clrscr();}
if(goku==1){G(10,10);PU("VOCE GANHOU O PODER DO Goku");delay(1500);
G(10,11);PU("de se TRANSPORMAR Teletransporte <ENTER>");delay(1500);goku=2;getche();clrscr();}
if(espectro==1){gotoxy(10,10);puts("VOCE GANHOU O PODER DO RAZIEL");delay(1500);
gotoxy(10,11);puts("                      de ir ao mundo espectral tecla <h>  ");delay(1500);espectro=2;getche();clrscr();}
if(aprendeu==4){
gotoxy(10,10);puts("BOSS: Pelo poder de BUJIGANGA\n");
gotoxy(10,11);puts("Eu te dou a habilidade de ser um hacker !!! \n ");
delay(3000); getche(); clrscr();
gotoxy(10,10);puts("VOCE GANHOU O PODER DE ");delay(1500);
G(10,11);PU("SE TRANSFORMAR EM HACKER <tecla>(2)");W; aprendeu++;contlivro=1;getche();clrscr();}
if(aprendeu==7){gotoxy(10,10);puts("VOCE GANHOU ...");delay(1500);
gotoxy(10,11);puts("O LIVRO DE INVISIBILIDADE !!!");delay(1500); 
gotoxy(10,12);puts("E UM CALENDARIO (NA KSA Do BOSS)");aprendeu++;getche();clrscr();}
if(aprendeu==8 && livro!=1){livro=1;}
if(aprendeu==9){gotoxy(10,10);puts("VOCE COMPROU ...");delay(1500);
gotoxy(10,11);puts("O OUTRO LIVRO DE INVISIBILIDADE !!!");W;aprendeu++;getche();clrscr();}
if(aprendeu==10 && livro!=2){livro=2;}
if(aprendeu==11){clrscr();
G(10,8);printf("Pela for%ca de BUJIGANGA\n",135);
G(10,9);puts("Eu te dou o dom da Invisibilidade!");delay(3000);
gotoxy(10,10);puts("VOCE GANHOU O PODER DE SER...");delay(1500);
gotoxy(10,11);puts("INVISIVEL !!! tecla<3>");D(1500);aprendeu++;contlivro=2;getche();clrscr();}
if(aprendeu==13){
G(10,10);puts("VOCE CONSEGUIU UM SALTO MAIOR!!! ");D(4000);aprendeu++;getche();clrscr();continue;}
if(aprendeu==17){
clrscr();
G(10,10);puts("VOCE GANHOU A CHAVE D1!!!!!"); D(4000);aprendeu++;chave++;
getche();clrscr();continue;
                 }
if(cabelo==1){
G(10,10);puts("VOCE PEGOU 1 FIO DE CABELO!");D(4000);cabelo=2;getche();clrscr();
              }
if(aprendeu==19){
G(10,10);puts("VOCE GANHOU UMA VARINHA DE MAGIA!");D(3000);aprendeu++;getche();clrscr();
                 }
if(aprendeu==21 && fase==102 && x<19){
G(10,10);puts("VOCE GANHOU O PODER DE FAZER MAGIA! <TECLA(M)>");D(3000);aprendeu++;
getche(); clrscr();}
if(aprendeu==23){
G(10,10);puts("\x1:");W;
G(10,11);puts("A");G(11,11);delay(500);puts(" ");G(12,11);delay(500);puts("S");
G(13,11);MEIO;puts("u");G(14,11);MEIO;puts("p");G(15,11);MEIO;puts("r");
G(16,11);MEIO;puts("e");G(17,11);MEIO;puts("m");G(18,11);MEIO;puts("a");
G(19,11);MEIO;puts("c");G(20,11);MEIO;puts("i");G(21,11);MEIO;puts("a");
G(22,11);MEIO;puts("!");G(23,11);MEIO;puts("!");G(24,11);MEIO;puts("!");MEIO;

// imprime tela
G(18,19);puts(" ____ ");G(18,20);puts("|    |");G(18,21);puts("|   c|");G(18,22);puts("|    |");G(32,19);puts("==================");G(33,20);puts("||\\_/| |   |   |");G(33,21);puts("|||_|| |  c|   |");G(33,22);puts("||/ \\| |   |   |");G(51,19);puts("| 71 |");G(51,20);puts("|    |");G(51,21);puts("|   c|");G(51,22);puts("|    |");G(7,20);printf("\xDC\xB0\xB0\xDC");G(7,21);printf("\xB0\xB0\xB8\xB0");G(7,22);printf("\xDB\xB0\xB0\xDB");G(1,23);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");     G(x+1,y);puts("\x1");G(x,y+1);puts("/#\\");G(x,y+2);puts("/ \\");                                  
for(int sy=14;sy>9;sy--){
        G(35,sy+1);puts(" ");
        G(35,sy);puts("\xCF");
        delay(750);       }      
G(5,8);puts("voce ganhou um pacote de biscoito \"TRAKINAS\" !!!!");getch();
clrscr();aprendeu=24;tecla='a';continue;
                 
                 } // fim se aprendeu ==23
if(aprendeu==26){
clrscr(); G(5,8);puts("vc ganhou uma corda!!!");G(5,8);getche(); 
G(5,8);puts("                              ");tecla='a';corda++;
aprendeu++;
                 
                 }
if(aprendeu==27 && corda==0)corda=1;
if(aprendeu==33 && livro==0)livro=1;
if(aprendeu==34 && diagonal==0)diagonal=1;
if(aprendeu==32){
clrscr(); G(5,8);puts("Vc pegou um livro de saltos"); delay(2000); getche();
livro=1; aprendeu=33; clrscr(); continue;
                 }
//fim recebe


if(tela >0 && tecla==32)fase=tela;
if(antefase!=fase)clrscr();


//transformar
if(tecla=='1')forma=1;
if(aprendeu>3)if(tecla=='2'){
                             forma=2;//hacker acima de 3
         G(x,y-1);puts("   ");
         G(x,y);puts("   ");
         G(x,y+1);puts("   ");
         G(x,y+2);puts("   ");
                             }
if(aprendeu>10)if(tecla=='3'){
                              forma=8;//invisibilidade acima de 10
                              G(x,y);puts("   ");
                              G(x,y+1);puts("   ");
                              }
if(aprendeu>14 && passaporte==0)passaporte=1;  //passaporte acima de 14
if(aprendeu/10>=4 && pote==0)pote=2;   // pote blz acima de 39
if(aprendeu/10>=5)if(tecla=='4')forma=6;//aranha acima de 50
if(aprendeu/10>=7)if(tecla=='5')forma=7;//mosca acima de 69
if(aprendeu>17 && chave==0)chave=1;
if((tecla=='h' || tecla=='H')&& fase==17)tecla='a';
if(espectro>0 && (tecla=='h' || tecla=='H')){
              if(fase==4 || fase >=100);
              else{
              fase=17;tecla='a';fasespectral=antefase;clrscr();
              
                   }
              }
//if(aprendeu/10>=4)if(tecla=='6')barrig=80;else barrig='#';

//em cima da tela    
if(mostra==0){
gotoxy(1,1);pulo=jump*25;
printf("R$:%d\t\t|\nVIDAS:%dx%c\t|\nsangue:%d\t|\nconhecimento:%d\t|\n",
        rs,vida,1,sangue,conhecimento);}
if(mostra==1){
gotoxy(1,1);
puts("TECLAS ATIVAS:\t|\ns,d,f,q, ,\t|\nr, ,\t\t|");
               }
puts("________________|_____________|_______________________________________");

//TESTE DO MOSTRA  
if(mostra==0){
gotoxy(20,1);puts("tecnicas:");
//(aprendeu>30){G(20,2);puts("GRAMPO<G>");}
if(corda==1){G(20,3);puts("CORDA");}
if(pote>0){G(20,4);puts("POTE<P>");}
}
if(mostra==1){gotoxy(20,1);puts("ITENS:"); 
gotoxy(20,2);printf("SANDUICHE:%d",sanduiche);
gotoxy(20,3);printf("LIVRO:%d",livro);
if(pedra==0){
gotoxy(20,4);printf("CORDA:%d",corda);}
else{
gotoxy(20,4);printf("PEDRA:%d ",pedra);}}
//FIMTESTE DO MOSTRA

//COMENTARIO
gotoxy(35,1);puts("Comentario:");gotoxy(35,2);
comentario=coment(x,y,fase,conhecimento);
if(tecla>64 && tecla<91)comentario=7;
if(comentario==7 && aprendeu<30)comentario=0;
if(comentario==1007 && aprendeu<31)comentario=0;
if(comentario==0)comentario=aprendeu;
if(fase==13 && aprendeu%5!=0)comentario=6;

// COMENTÁRIOS ... comentário
     G(34,2);puts("                                       ");
     G(34,3);puts("                                       ");
gotoxy(35,2);
switch(comentario){
    default: puts("                               ");
     G(34,3);puts("                               ");
    case 0:  break;
    //puts("TENTE CONHECER MAIS CASAS");break;
    case 1: puts("VEJA SE ALGO MUDOU NO SEU CAMINHO");break;
    case 2: puts("VC JA TEM 1 LIVRO HACKER!"); break;
    case 3: puts("OPA!!! VC JA TEM 2 LIVROS?");break;
    case 5: puts("...");break;
    //case 6: puts("\"VILA\"");break;
    case 7: puts("TECLA ERRADA!");break;
    case 1001: puts("VC PRECISA CONSEGUIR ALGO");gotoxy(35,3);
               puts("PARA OBTER SUCESSO NESTE ");gotoxy(35,4);
               puts("LOCAL");break;
    case 1002: puts("VC NECESSITA DE UM SALTO");gotoxy(34,3); 
             printf("MAIOR P/ ALCAN%cAR A PORTA",128);break;
    case 1003: puts("\"ESPACO\"");break;
    case 1004: puts("CASA DO KEVIN MITNICK ");break;
    case 1005: puts("PRECIONE E para saltar ");break;
    case 1006: puts("use s = <- e f = ->"); break;
    case 1007: puts("<SUBIR> ");break;
    case 1008: printf("LOJA LABIRINTO DO HORROR "); break;
    case 1009: puts("TECLA <ESPACO> PARA MEXER NO PC"); break;
    case 1010: puts("VC PRECISA SE TRANSFORMAR");
            G(35,3);puts(" EM ARANHA PRA SUBIR LA");break;
    case 1011: puts("<ESPACO>");break;
    case 1012: if(forma!=8){puts("PROIBIDA ENTRADA ");gotoxy(35,3);}
    break;
    case 1013: puts("pagina flutuante");break;
    case 1014: puts("CUIDADO COM A FOGUEIRA!!!");break;
    case 1015: puts("UM PC!!!");break;
    case 1016: puts("APENAS UMA PESSOA COM PODERES ESPECIAIS");
    G(35,3);puts("SERIA CAPAZ DE ATRAVESSAR A PLATAFORMA");break;
    case 1017:printf("Aqui %c Hogwarts",130);break;
    case 1018:printf("KSA DO BOSS");break;
    case 1019:printf("CALENDARIO");break;
    case 1020:printf("SENHA");break;
    case 1021:printf("BOSS");break;
    case 1022:printf("Ksa da TATI");break;
    case 1023:printf("N%co se aproxime da lagoa!",198);break;
    case 1024:printf("DENTRO DA KSA DA TATI");break;
    case 1025:break;
    case 1026:break;
                   }  
//FIMCOMENTARIO
//fim em cima da tela

if(agua==2 || agua==1){gotoxy(70,5);puts("Agua   ");}
if(gasolina==2){gotoxy(70,5);puts("Gasolina");}
if(alcool==2){gotoxy(70,5);puts("Alcool");}
if(aranha==2){gotoxy(70,5);puts("Aranha");}
if(mosca==2){G(70,5);puts("mosca");}


//telas //telas //telas //telas imprimo telas imprimo fases
//teste de desenho de tela da fase correspondente
//fim teste desenho de tela
//if(fase==tela)limpaquemexeu=1;

//if(tela >0 && tecla==32)fase=tela;
//if(antefase!=fase)clrscr();

switch(fase){
case 1:{   // tela 1
//gotoxy(1,21);if(chave==1){puts(" _");puts("|8|"); }
if(antefase==15){x=49,y=20;}
if(antefase==18){x=70;y=11;}
if(conhecimento==2 && livro!=1)livro=1;
G(48,20);puts("|    | ");
G(48,21);puts("|   c| ");
G(48,22);puts("|    | ");
gotoxy(1,23);
puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
gotoxy(1,15);
puts(" ____                                                          ");
puts("|    |                                                         ");
puts("|   c|                                                         ");
puts("|    |                                                         "); 
puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww=====wwwwwwwwwwwwwwwwwwwwwwwwwww=");
gotoxy(42,13);puts("_____________");gotoxy(41,14);puts("/             \\");
gotoxy(41,15);puts("|     ______  |");gotoxy(41,17);puts("|    |     c| |");
gotoxy(41,16);puts("|    |      | |");gotoxy(41,18);puts("|    |      | |");
gotoxy(67,10);puts("  ######                   ");       
gotoxy(67,11);puts("  ######                   ");
gotoxy(67,12);puts("  ######                   ");
gotoxy(67,13);puts("  ######                   ");
gotoxy(67,14);puts(" =======");
gotoxy(16,6); puts("    ww");
gotoxy(16,7); puts("    ww");
//gotoxy(16,8); puts("  _____       ");
//gotoxy(16,9); puts(" |     |       ");
// gotoxy(16,10);puts(" |    c|        ");
//gotoxy(16,11);puts(" |     |         ");
if(aprendeu<32){
// gotoxy(16,9); puts("  ");
 gotoxy(16,10);puts("  ___ ");
 gotoxy(16,11);puts(" /__// ");
                }
if(y==9 && x>17 && x<21 && tecla==32 && aprendeu==31){
aprendeu++;continue;                                  }
gotoxy(16,12);puts(" wwwwwww         ");
gotoxy(16,13);puts(" wwwwwww         ");
  G(13,14);puts("    wwwwwww         ");
G(25,9); puts("   ");G(25,10);puts("   ");G(25,11);puts("   ");
if(conhecimento>15){G(22,6);puts("/___");G(22,7);puts("\\ ");}
if(conhecimento>30){for(int i=7;i<19;i++){G(24,i);puts("|");}} 
if(conhecimento==27){G(25,14);printf("%c",245);} // parangaricu
if(conhecimento==27 && (tecla=='m' || tecla=='M')){ // se usa alquimia
G(31,7);puts("\x1: ");delay(500);
G(34,7);puts("A");   delay(500);
G(35,7);puts("l");   delay(500);
G(36,7);puts("q");   delay(500);
G(37,7);puts("u");   delay(500);
G(38,7);puts("i");   delay(500);
G(39,7);puts("m");   delay(500);
G(40,7);puts("i");   delay(500);
G(41,7);puts("a");   delay(500);
G(42,7);puts("!");delay(500);G(43,7);puts("!");delay(500);
G(44,7);puts("!");delay(500);G(45,7);puts("!");delay(500);
aprendeu=31;
if(corda>0)corda--;
if(aprendeu>30){for(int i=18;i>6;i--){G(24,i);puts("|");delay(500);}} // fim se conhecimento>30
clrscr(); continue;
                                                   } // fim se usa alquimia
if(livro==1 && aprendeu==2){G(16,20);PU(" ___"); G(16,21);PU("/ H /");G(16,22);PU("LIVRO");}
else {G(16,20);PU("   "); G(16,21);PU("   ");G(16,22);PU("   ");}
if(x>16 && x<20 && y==20 && aprendeu<3 && tecla==32){livro++;aprendeu++;continue;mostra=1;}
// Anderson a e o pipa
if(aprendeu==16){G(26,6);puts(" [ ] ");G(26,7);puts("  (  ");G(26,8);puts("   )");G(31,16);puts(" _\x1_ ");G(31,17);puts("  P  "); G(31,18);puts(" / \\B");
if(tecla==32 && x>28 && x<35 && y==16 && forma<3 && pedra==0){
G(41,8); puts("Anderson :");G(41,9); puts("Meu Pipa!!!! BUAAAA!!!!!!!");
G(41,10);printf("Eu soh tenho um Deiz%co ",198);G(41,11);puts("como pegarei meu pipa?");
G(41,11);getche();
G(41,8); puts("         ");G(41,9); puts("                          ");
G(41,10);printf("                        ");G(41,11);puts("                      ");
                                                  }
if(tecla==32 && x>28 && x<35 && y==16 && forma<3 && pedra==1){
G(41,8); puts("Anderson:");
G(41,9); puts("Boa Ideia, me empresta essa pedra"); delay(2400);
G(41,10);puts("se eu amarrar ela na minha linha assim");
G(41,11);puts("e joga-la assim");delay(100);
G(26,6);puts(" [ ] ");G(26,7);puts("  (  ");G(26,8);puts("   )"); 
delay(300);G(41,11);puts("e joga-la assim.");
G(26,6);puts("     ");G(26,7);puts("     ");G(26,8);puts("     ");
G(26,8);puts("  ([ ]");
G(26,9);puts("   )"); delay(300);G(41,11);puts("e joga-la assim..");
G(26,7);puts("     ");G(26,8);puts("      ");G(26,9);puts("      ");
G(26,9);puts("   )  ");
G(26,10);puts("   ([]"); delay(300);G(41,11);puts("e joga-la assim...");
G(26,9);puts("     ");G(26,10);puts("      ");
G(26,10); puts("    )  ");
G(26,11);puts("   ("); 
G(26,12);puts("   []");delay(300);
G(41,11);puts("e joga-la assim...Peguei!!!!");delay(1000);
G(26,10);puts("     ");G(26,11);puts("      ");G(26,12);puts("      ");
aprendeu++;            
             }                      

                 }
if(antefase!=1)antefase=1;
break;


case 2://tela 2 
gotoxy(1,10);
if(antefase==4){x=17;y=16;antefase=2;}
if(antefase==3){x=6;y=20;antefase=2;}
if(antefase==1){x=3;y=16;antefase=2;}
if(antefase==19){x=48;y=18;}
puts("         ______________");
puts("        |     LOJA     |");
puts("        | LIQUIDACOES  |");
puts("        |   TABAJARA   |");
puts("        |              |");
puts(" ____   |       _____  |");
puts("|    |  |      |     | |");
puts("|   c|  |      |    c| |");
puts("|    |  |      |     | |"); 
puts("================================     ==================    =============");
gotoxy(1,11);

gotoxy(41,6);puts("ww");gotoxy(41,7);puts("ww");gotoxy(41,8);puts("ww");
gotoxy(41,9);puts("ww");
gotoxy(41,10);puts("ww");gotoxy(41,11);puts("ww");gotoxy(41,12);puts("ww");
gotoxy(41,13);puts("ww");gotoxy(41,14);puts("ww");gotoxy(41,15);puts("ww");
gotoxy(41,16);puts("ww");gotoxy(41,17);puts("ww");gotoxy(41,18);puts("ww");
gotoxy(41,20);puts("ww");gotoxy(41,21);puts("ww");gotoxy(1,23);
puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
gotoxy(44,16);puts("    __");
gotoxy(44,17);puts("   /__\\");gotoxy(44,18);puts("   [  ]");
gotoxy(5,20);puts("#####");
gotoxy(5,21);puts("#####");
gotoxy(5,22);puts("#####");
if(antefase!=2)antefase=2;
if(forma==7 && y==18 && x>47 && x<50){
            
            tecla='a';fase=19;tela=19;continue;}
break;

case 3://tela 3
if(antefase==5){y=8;antefase=3;}
if(antefase==6){x=41;y=11; antefase=3;}
gotoxy(1,23);if(antefase==102){x=28;y=11;antefase=3;}
puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
gotoxy(5,20);puts("#####");gotoxy(5,21);puts("#####");gotoxy(5,22);puts("#####");
gotoxy(5,19);puts("=====");gotoxy(1,11);puts("======");
gotoxy(8,15);puts("=====");gotoxy(69,18);puts("======");
    G(69,14);puts(" ___");
    G(69,15);puts("|   |");
    G(69,16);puts("|  c|");
    G(69,17);puts("|___|");
     
gotoxy(1,11);puts("==================");
gotoxy(19,14);puts("  ============================");
gotoxy(20,15);puts(" _   _   _               _   _   _ ");
gotoxy(20,16);puts("| |_| |_| |             | |_| |_| | ");
gotoxy(20,17);puts("|   __    |             |    __   |");
gotoxy(20,18);puts("|  |__|   |=============|   |__|  |");
gotoxy(20,19);puts("|         |  ________   |         |");
gotoxy(20,20);puts("|         | |        |  |         | ");
gotoxy(20,21);puts("|         | |        |  |         | ");
gotoxy(20,22);puts("|         | |        |  |         | ");
if(livro==0 && aprendeu==1){gotoxy(59,20);puts(" ___");gotoxy(59,21);puts("/ H /");
G(59,22);PU("LIVRO");}
else {gotoxy(59,20);puts("    ");gotoxy(59,21);puts("     ");                }
if(x>59 && x<62 && y==20 && aprendeu==1 && tecla==32){
livro=1;aprendeu++;continue;mostra=1;}
gotoxy(3,7); puts("  _____");
gotoxy(3,8); puts(" |     |");
gotoxy(3,9); puts(" |    c|");
gotoxy(3,10);puts(" |     |");
gotoxy(21, 9);puts("  ___________  ");
gotoxy(21,10);puts(" /_\\_________|     ######");
gotoxy(21,11);puts(" | | |     | |     ######");
gotoxy(21,12);puts(" | | |    c| |     ######");
gotoxy(21,13);puts(" | | |     | |     ######");
gotoxy(18,14);puts(" =============================");

if(antefase!=3)antefase=3;
break; // fim tela 3

case 102:   //casa do osvaldir tela 102 casa da JOSEMAR
if(antefase!=102){x=48; y=16; antefase=102;}
if(forma!=1)if(forma==2);else forma=1;
//gotoxy(1,5);puts("                                            ");
gotoxy(1,6);puts("                                                             ");
gotoxy(1,7);puts("                                                             ");
gotoxy(1,8);puts("                                                             ");
gotoxy(1,9);puts("                                                             ");
gotoxy(1,10);puts("                                                            ");
gotoxy(1,11);puts("                                                            ");
gotoxy(1,12);puts("                                                             ");
gotoxy(1,13);puts("                                                            ");
gotoxy(1,14);puts("                                                            ");

gotoxy(46,15);puts(" ______ ");
gotoxy(46,16);puts("|      |");
gotoxy(46,17);puts("|     c|");
gotoxy(46,18);puts("|      |");
gotoxy(5,19);puts("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH");
gotoxy(6,15);  puts("       ");
gotoxy(6,16);printf("  %c  ",2);G(40,17);puts("|=|");
gotoxy(6,17);  puts("-|T|-");
gotoxy(6,18);  puts(" | | ");
gotoxy(56,16); puts("  |PASSWORD|");
gotoxy(56,17);puts("  ###########");
if(conhecimento>7){gotoxy(33,17);puts("|=|");}
if(x>31 && x<36 && y==16 && tecla==32 && conhecimento>7){
for(int i=0;i<10;i++){clrscr();G(1+i,1);PR("CALEND%cRIO",181);delay(300);}
char laco=0; while(laco!=27){
       clrscr();  G(10,1);PR("CALEND%cRIO (+ insira os dados corretos)OKKKK",181);G(1,2);
       int dia,mes,ano, mes1[12];int somames=0;
       char string[20];
       printf("dia:");      gets(string); dia=atoi(string);   //scanf("%d",&dia);
       printf("\nmes:");    gets(string); mes=atoi(string);   //scanf("%d",&mes);
       printf("\nano:");    gets(string); ano=atoi(string);   //scanf("%d",&ano);
       int soma=ano/4;       int one=365*(ano-1);       printf("\n\n");
       mes1[0]=31;      mes1[1]=28;       mes1[2]=31;
       mes1[3]=30;      mes1[4]=31;       mes1[5]=30;
       mes1[6]=31;      mes1[7]=31;       mes1[8]=30;
       mes1[9]=31;      mes1[10]=30;      mes1[11]=31;
       for (int i=0; i<mes;i++){somames=mes1[i]+somames;}
       int total=(one+somames+soma+dia);      //printf("%i\n",total);
       if (ano%4==0 && mes<2)total--;       if(mes==2)total=total+31;
       int semana=total%7;  switch(semana){
       case 0: printf("quarta "); break;
       case 1: printf("quinta "); break;
       case 2: printf("sexta  "); break;
       case 3: printf("sabado "); break;
       case 4: printf("domingo"); break;
       case 5: printf("segunda"); break;
       case 6: printf("terca"  ); break;  }
       total=(one+somames+soma+1);     if (ano%4==0 && mes<3)total--;
if(mes==2)total=total+31;  semana=total%7;   //printf("%i\n",total); 
printf("\t%d/%d/%d\n",dia,mes,ano);   printf("D\tS\tT\tQ\tQ\tS\tS\n\n");
// printf("\nsomames=%d semana=%d total=%d one=%d",somames,semana,total,one);
       int dst;if (semana>3)dst=semana-4;  else dst=semana+3;
//       if (ano%4==0 && mes==2)mes1[mes-1]=29;
       for (int j=0;j<=mes1[mes-1];j++){
       if (j==0){for (int i=0; i<dst; i++)printf("\t");}     else{
       printf("%d\t",j);   dst=dst%7;  if (dst==6)printf("\n");  dst++;}   }
       puts("\n\n\tTECLA <ESC> PARA SAIR ");     laco=getche(); } 
       tecla='a';clrscr();continue;     } //fimse ve calendario
if(x>37 && x<43 && tecla==32){
G(1,7);puts("USE AS TECLAS NUMERICAS PARA SE TRANSFORMAR\nGUARDE SEU PASSWORD:\n");
pass=qualpassword(conhecimento);if(pass!=100 && pass !=0)
printf("PASSWORD: %d",pass);}
if(x==53 && tecla==32){
gotoxy(40,8);puts("PASSWORD?");//gotoxy(55,12);//scanf("%d",&password);  
gotoxy(40,9);gets(testep);tpassword=0;
if(testep[0]=='w' && testep[1]=='i' && testep[2]=='l'){
                  snake(1);   clrscr();    tecla='a';       continue;
                                                       }
for (int i=5;i>=0; i--){
    tt=(int)(testep[i]);    tpassword=(t*(tt-48))+tpassword;
    //gotoxy(1,10);printf("%d",password);getche();
     t=t*10;if(i==0)t=1;  }//  gotoxy(1,10);printf("%d",password);getche();
//printf("\t ==== %d %c",password, password);getche(); if(password)
senha=passwordfase(tpassword);gotoxy(20,20); 
if(senha>=1000){
if(senha==1000)rs=10000;
if(senha==1001)speed=4; 
if(senha==1002){speed=4;if(maxpower<2)maxpower=2;goku=2;espectro=2;diagonal=1;}
if(senha==1003)rs=rs+1;
if(senha==1004)goku=1;
if(senha==1005)if(maxpower<1)maxpower=1;
if(senha==1006){if(maxpower<2)maxpower=2;diagonal=2;}
if(senha==1007){
                if(rs<100000 && sua<100000)rs=rs+50000;speed=4;
                if(maxpower<2)maxpower=2;goku=2;espectro=2;
                if(aprendeu==0)aprendeu=99;
                diagonal=1;}
if(senha==1008)jogoteste=1;
}else
if(senha!=100 && senha !=0)aprendeu=senha;password=qualpassword(aprendeu);
//printf("CONHECIMENTO=%d, password: %d",aprendeu, password);
}//fim looping transformar char password em int password
}
if(tecla==32 && x<21){G(1,7);
if(livro<2){
int vvv=aprendeu;
//switch(conhecimento){
if (conhecimento==2){ puts(" BOSS: OHHH... vc ja tem um livro de hacker... ");
puts(" Qdo vc tiver 2 eu poderei te transformar!!!\n com meu poder BUJIGANGA!");}
else if(conhecimento==8){
puts(" BOSS: Eu preciso de apenas mais um livro");
puts(" De invisibilidade para te tranformar \ncom meu poder BUJIGANGA");}
else if(conhecimento==10){
puts(" BOSS: Pelo poder de BUJIGANGA");
puts(" Eu te concedo o dom da invisibilidade \ncom meu poder BUJIGANGA");
delay(2000); getche(); aprendeu++;}
else 
//if(conhecimento==11){
if(conhecimento==12){     
//case 12: 
          puts("Me traga mais objetos para que eu possa lhe conceder \n mais habilidades");
                         }
else if(conhecimento==20){
     puts(" BOSS: Ohhh!!! Vc conseguiu uma varinha de magia!\n"); // G(1,7);
         puts("          PELO PODER DE ");
         delay(440);printf("B");
         delay(440);printf("U");
         delay(440);printf("G");
         delay(440);printf("I");                  
         delay(440);printf("G");
         delay(440);printf("A");
         delay(440);printf("N");
         delay(440);printf("G");
         delay(440);printf("A");
delay(3000); aprendeu++; clrscr(); continue; }
else if(conhecimento==33){
puts(" BOSS: pelo poder de "); 
for(int i=0;i<9;i++){
        G(i+1,8);printf("%c",bujiganga[i]);G(i+2,8);MEIO;
                      }
G(1,9);puts("Eu te dou a habilidade do pulo diagonal\n");
puts("\tTeclas: W & R!!!!");
aprendeu++; getche(); clrscr(); diagonal=1; continue;
//          break; 
//break;
// okay
//default:
                           } // fim conhecimento==33
else if(aranha==2){    // se tem pote com aranha
     if(conhecimento<34){// se NAO tem (não) conhecimento suficiente pra ser aranha
printf("BOSS: Mesmo com meu poder \"BUJIGANGA\" ");
printf("\nEu nao posso te transformar em aranha\n");
puts("pois o seu conhecimento, ainda \x82 muito baixo");
//puts(".... Os PASSWORDs se baseiam nessas tranformacoes");
                         }
      else{ // se tem conhecimento suficiente pra ser aranha
puts(" BOSS: pelo poder de "); // williw
for(int i=0;i<7;i++){
        G(i+1,8);printf("%c",bujiganga[i]);G(i+2,8);MEIO;
                      }
G(1,9);puts("Eu te dou a habilidade de \n");
puts("se transformar em aranha"); aprendeu=51;delay(1000);
puts("TECLA (1&4)");
tecla=getche();ZERAPOTE
continue;

          } // fimse tem conhecimento suficiente pra ser aranha
                     } // fim se tem pote com aranha
else if(mosca==2){ // se tem pote com mosca
      if(conhecimento<51){
printf("BOSS: Mesmo com meu poder \"BUJIGANGA\" ");
printf("\nEu nao posso te transformar em mosca\n");
puts("pois o seu conhecimento, ainda nao \x82 suficiente");
                          } //se NAO tem (NÃO) conhecimento suficiente pra ser mosca
      if(conhecimento>50){
puts(" BOSS: pelo poder de "); // williw
for(int i=0;i<7;i++){ G(i+1,8);printf("%c",bujiganga[i]);G(i+2,8);MEIO;     }
G(1,9);puts("Eu te dou a habilidade de \n");
puts("se transformar em MOSCA"); aprendeu=98;delay(1000);
puts("TECLA (1&5)");
tecla=getche();ZERAPOTE
continue;

                          }
                   }
else{
printf("BOSS: Com meu poder \"BUJIGANGA\" ");
printf("\nEu faco tranformaces diferentes em seres\n");
puts("humanos, basta me trazer livros e diferentes objetos\n");
puts(".... Os PASSWORDs se baseiam nessas tranformacoes");

           }
//break; 
// break default resposta osvaldir*/
//} //fim switch conhecimento
}else{puts("NOVA TRANSFORMACAO...<ENTER>");aprendeu++;contlivro++;livro=0;clrscr(); continue;}

break;     // break ---> switch fase (tela)   fim tela 102

case 4: // LOJA  tela 4
if(forma!=1)if(forma==2);else forma=1;
if(antefase==2){x=47;y=20;antefase=4;}
G(30,10); puts("                     ");
G(30,7);puts("                                             ");
G(30,8);puts("                                             "); 
gotoxy(46,20);puts("|     |");gotoxy(46,21);puts("|    c|");
gotoxy(46,22);puts("|     |"); 
gotoxy(2,23);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
gotoxy(2,19);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
gotoxy(2,15);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
gotoxy(2,11);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
gotoxy(2,7);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWW");
G(28,8);puts("W");G(28,9);puts("W");G(28,10);puts("W");
G(20,22);puts("|      |");G(20,21);puts("|      |");G(20,20);puts("|      |");
G(20,18);puts("|      |");G(20,17);puts("|      |");G(20,16);puts("|      |");
G(20,14);puts("|      |");G(20,13);puts("|      |");G(20,12);puts("|      |");
G(20,10);puts("|      |");G(20,9);puts("|      |");G(20,8);puts("|      |");
/*if(x>20 && x<25 && tecla==32){
if(andars==2 && y!=8)y=8;
if(andars>2)y=y+4;else y=y-4;
andars=(andars+1)%6;}*/
if(x>20 && x<25 && tecla==32){
if(andars>2)y=y+4;else y=y-4;
andars=(andars+1)%6;}
for(int i=20; i>11; i=i-4){
G(1,i);puts("|   __|");puts("|  |__|");puts("|_____|");}
for(int i=20; i>11; i=i-4){
G(61,i);puts("|__   |");G(61,i+1);puts("|__|  |");G(61,i+2);puts("|_____|");}
if(x>57 && y==16 && tecla==32){//loja 22
G(30,7);puts("1. Velocidade: 75, R$ 1000");
G(30,8);puts("2. Velocidade: 100, R$ 10000");G(57,9); tecla=getche();G(57,9);PU(" ");
if(tecla=='1'){tecla='a';if(rs>999 && speed<3){rs=rs-1000;speed=3;clrscr();continue;}else{ G(30,10); puts("VC NAO PODE COMPRA-LO");}}
if(tecla=='2'){tecla='a';if(rs>9999 && speed<4){rs=rs-10000;speed=4;clrscr();continue;}else{ G(30,10); puts("VC NAO PODE COMPRA-LO");}}
}//FIM COMPRA DESSA LOJA
if(x>57 && y==20 && tecla==32){//loja  21
G(30,7);puts("1. pedra, R$ 5");
G(30,8);puts("2. sanduiche de presunto, R$ 5");   
G(57,9); tecla=getche();G(57,9);puts(" ");
if(tecla=='1'){tecla='a';if(rs>4 && pedra<100){rs=rs-5;pedra++;continue;}
else{ G(30,10); puts("VC NAO PODE COMPRA-LO");}}
if(tecla=='2'){tecla='a';if(rs>4 && sanduiche<100){rs=rs-5;sanduiche++;clrscr();continue;}else{ G(30,10); puts("VC NAO PODE COMPRA-LO");}} 
}// FIM COMPRA DESSA LOJA
if(x<9 && y==20 && tecla==32){//loja  11
G(30,7);puts("1. livro 2 invisibilidade R$ 100");
G(30,8);puts("2. pote  R$ 1000");   
G(57,9); tecla=getche(); G(57,9);puts(" ");
if(tecla=='1'){tecla='a';if(rs>99 && livro==1 && conhecimento==8 ){rs=rs-100;aprendeu++;livro++;clrscr();continue;}
else{ G(30,10); puts("VC NAO PODE COMPRA-LO");}}
if(tecla=='2'){tecla='a';if(rs>999 && pote==0){rs=rs-1000;pote=1;continue;}
else{ G(30,10); puts("VC NAO PODE COMPRA-LO");}} 
}// FIM COMPRA DESSA LOJA
if(x<9 && y==16 && tecla==32){//loja  12
G(30,7);puts("1. TELETRANSPORTE GOKU R$ 50000");
G(30,8);puts("2. PODER ESPECTRAL R$ 100000");   
G(57,9); tecla=getche(); G(57,9);PU(" ");
if(tecla=='1'){tecla='a';if(rs>49999 ){rs=rs-50000;goku=1;}
else{ G(30,10); puts("VC NAO PODE COMPRA-LO");}}
if(tecla=='2'){tecla='a';if(rs>9999){rs=rs-9999;espectro=1;}
else{ G(30,10); puts("VC NAO PODE COMPRA-LO");}} 
}// FIM COMPRA DESSA LOJA
if(x>57 && y==12 && tecla==32){
G(30,7);puts("1. vida RS 500");
G(30,8);puts("2. + sangue RS 750");
G(57,9);tecla=getche(); G(57,9);puts(" ");
if(tecla=='1'){tecla='a';if(rs>499 && vida<10){rs=rs-500;vida++;continue;}
else{ G(30,10);puts("VC NAO PODE COMPRA-LO");}}        
if(tecla=='2'){tecla='a';if(rs>749 && SANGUE<100){rs=rs-750;SANGUE+=20;sangue=SANGUE;continue;}
else{ G(30,10);puts("VC NAO PODE COMPRA-LO");}}     
} // FIM COMPRA DESSA LOJA 23  
if(antefase!=4)antefase=4;
break;

case 5: // sabesp tela 5
if(antefase==3){x=6;y=20;antefase=5;}
if(antefase==15){x=13;y=11;}
for (int i=10;i<23;i++){G(27,19);puts(" ");G(32,i);  puts("   ");}
gotoxy(4,19);puts(" _____");
gotoxy(4,20);puts("|     |");
gotoxy(4,21);puts("|    c|");
gotoxy(4,22);puts("|     |");
gotoxy(1,23);
puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
      G(11,10); puts(" ____ ");
      G(11,11); puts("|    |");
      G(11,12); puts("|   c|");
      G(11,13); puts("|    |");
gotoxy(10,14);puts("ww====ww");
gotoxy(27,18);printf("  %c  ",2);
gotoxy(27,19);  puts("  CA ");
gotoxy(27,20);  puts(" /  \\");
G(53,18);puts("     _________");
G(53,19);puts("  //|         |");
G(53,20);puts(" // |TORNEIRA |");
G(53,21);puts("//  |         |");
G(53,22);puts("    |         |");
G(41,15);puts("    ________  ");
G(41,16);puts("   |        |");
G(41,17);puts("   |      c |");
G(41,18);puts("   |        |");
G(41,19);puts("=============");
if(x>49 && x<53 && tecla=='p' && pote>0){pote=2; 
for(int i=39;i<45;i++){G(i-1,10);puts("           ");
G(i,10);puts("O POTE ESTA COM AGUA");delay(100);}ZERAPOTE agua=1;gasolina=0;alcool=0;   } 
if(forma==8 || x<25  || y<10){G(32,10);puts("TTT");}
else{for (int i=10;i<23;i++){G(27,19);puts("-");G(32,i);  puts("TTT");}}
if(bolsa==2){gotoxy(42,21);puts("\\_/");G(42,22);printf("(%c)",36);
if(x==42 && tecla==32){bolsa=3;continue;}}
if(antefase!=5)antefase=5;
if(x>24 && x<30 && y==20 && forma<3 && tecla==32){
G(41,10);puts("\x2 ANDRE: ");
G(41,11);printf("   -Nao posso deixar que ningu%cm entre!",130);        
getche(); tecla='a'; clrscr(); continue;
        }

break;

case 6: // hotel por fora tela 6
     if(antefase==5){x=5;y=20;}
     if(antefase==110){x=22;y=20;}
     if(antefase==3){x=6;y=20;}
        
gotoxy(1,23);
puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
gotoxy(4,19);puts("######");
gotoxy(4,20);puts("######");
gotoxy(4,21);puts("######");
gotoxy(4,22);puts("######");
gotoxy(18,9); puts("|------------|");
gotoxy(18,10);puts("|  __   ___  |");
G(18,11);   printf("| |__| |_%c_| |",148);
G(18,12);   printf("|  __   __   |");
gotoxy(18,13);puts("| |__| |__|  |");
gotoxy(18,14);puts("| __  ___  _ |");
G(18,15);   printf("||__||_%c_||_||",148);
gotoxy(18,16);puts("|H----------B|");
gotoxy(18,17);puts("|!--!MOTEL--!|");
gotoxy(18,18);puts("|H----U-----B|");
gotoxy(18,19);puts("| _______    |");
gotoxy(18,20);puts("||       |   |");
gotoxy(18,21);puts("||      c|   |");
gotoxy(18,22);puts("||       |   |");
G(47,14); PU("=================");
G(47,15); PU("|ALCOOL&GASOLINA|");
G(47,16); PU("|_______________|");
G(46,17);PU("===================");
G(48,18);puts("||   __      ||");
G(48,19);puts("||  |[]|     ||");
G(48,20);puts("||   ||      ||");
G(48,21);puts("|| //||\\\\    ||");
G(48,22);puts("||  |  |     ||");
if(conhecimento == 5){
G(42,22);printf("%cZ==",1);
if(x==35 || x==40 || x==45){
if(sanduiche==0){G(40,12);puts("Gissele:");
G(40,15);puts("AGS AGS, PRECISO COMER ALGO!!!");
G(40,14);puts(" SOCORROOOOOOOOOOOO HELP ME AJUDE!");
G(40,13);puts(" Estou morren...do de fome...ags ags");
delay(500);getche(); clrscr(); x--; continue;}
else{G(40,7);puts("Gissele:");
G(40,8);puts("vc serah recompensado... muito obrigado");
G(40,9);puts("va ateh minha casa que");
G(40,10);puts("Te darei uma reconpensa... ");
G(40,11);puts("thank you so much!!!!");
sanduiche--;
aprendeu++;
delay(6500);
getche(); clrscr(); continue;
}// fim else posicao tal
}// fimse posicao tal
}//fim se conhecimento 5
if(x>48 && x<52 && tecla=='p' && pote>0){
        agua=0;gasolina=0;alcool=1;pote=3;tecla='a';continue;}
if(x>53 && x<57 && tecla=='p' && pote>0){
        agua=0;gasolina=1;alcool=0;pote=4;tecla='a';continue;}
if(antefase!=6)antefase=6;
break; //break; tela 6

case 7:// indo para hogwarts trem plataforma 9 e meio tela 7
if(antefase==10){
G(2,15);puts(" ! !");G(2,16);  PR(" ! !_%c____",190);//190
G(2,17);puts(" | _____ |");G(2,18);puts(" ||=====||");
G(2,19);puts(" ||     ||");G(2,20);puts(" ||     ||");
G(2,21);puts("!=========!");G(2,22);puts("  ######  ");delay(3000);}
G(32,19);puts(" ________ ");
G(32,20);puts("|        |");
G(32,21);puts("|        |");
G(32,22);puts("|        |");
gotoxy(1,23);
puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
for (int i=22;i>5;i--){
G(60+(i%4),i);puts(", ,");}
G(23+(30),6);printf("   %c",1);
G(23+(30),7);  puts("===##==<");
G(23+(30),8);  puts("   //");
G(12,12);puts(" ___");
G(12,13);puts("! 9 !");
G(12,14);  PR("! %c !",171);
G(12,15);puts("!   !");G(12,16);puts("!   !");G(12,17);puts("!   !");
G(12,18);puts("!   !");G(12,19);puts("!   !");G(12,20);puts("!   !");
G(12,21);puts("!   !");G(12,22);puts("!   !");
G(2,8);printf("       %c",14);
G(2,9);printf("  %c ",14); 
G(2,11);puts(" ~~ ");
G(2,12);puts(" (( ");
G(2,13);puts("  ))");    
G(2,14);puts(" ((");
G(2,15);puts(" ! !");
G(2,16);  PR(" ! !_%c____",190);//190
G(2,17);puts(" | _____ |");
G(2,18);puts(" ||=====||");
G(2,19);puts(" ||     ||");
G(2,20);puts(" ||     ||");
G(2,21);puts("!=========!");
G(2,22);puts("  ######  ");
G(69,21);puts("[=]");
if(x>68 && y==20 && tecla==32){//if tecla espaco la aristoteles
        for(int i=1; i<14 ; i++){  clrscr(); //primeiro
       G(5+i,3);puts(" Se um dia vc se sentir iludido por um objetivo... ");
       delay(100); }
       for(int i=1; i<14 ; i++){ clrscr();
       G(18,3);puts(" Se um dia vc se sentir iludido por um objetivo... "); 
G(4+i,4);puts(" lembre-se que o importante na vida nao sao os objetivos "); 
G(4+i,5);puts("que propomos, mas o caminho que seguimos para conquista-los");
delay(200);}
       delay(1000);
       
for(int i=1; i<14 ; i++){ clrscr(); //segundo
G(18,3);puts(" Se um dia vc se sentir iludido por um objetivo... "); 
G(17,4);puts(" lembre-se que o importante na vida nao sao os objetivos "); 
G(17,5);puts("que propomos, mas o caminho que seguimos para conquista-los");
       G(5+i,7);puts(" Se um dia vc se sentir uma gota no meio do oceano... ");
       delay(100); }
       for(int i=1; i<14 ; i++){clrscr();
G(18,3);puts(" Se um dia vc se sentir iludido por um objetivo... "); 
G(17,4);puts(" lembre-se que o importante na vida nao sao os objetivos "); 
G(17,5);puts("que propomos, mas o caminho que seguimos para conquista-los");
G(18,7);puts(" Se um dia vc se sentir uma gota no meio do oceano... ");
G(4+i,8);puts(" lembre-se que sem essa gota o oceano seria menor.  "); 
delay(100);}
       delay(1000);

for(int i=1; i<14 ; i++){ clrscr();//terceiro
G(18,3);puts(" Se um dia vc se sentir iludido por um objetivo... "); 
G(17,4);puts(" lembre-se que o importante na vida nao sao os objetivos "); 
G(17,5);puts("que propomos, mas o caminho que seguimos para conquista-los");
G(18,7);puts(" Se um dia vc se sentir uma gota no meio do oceano... ");
G(17,8);puts(" lembre-se que sem essa gota o oceano seria menor.  ");
       G(5+i,10);puts("Se um dia vc se sentir dentro de um buraco... ");
       delay(100); }
              
       for(int i=1; i<14 ; i++){   clrscr();
G(18,3);puts(" Se um dia vc se sentir iludido por um objetivo... "); 
G(17,4);puts(" lembre-se que o importante na vida nao sao os objetivos "); 
G(17,5);puts("que propomos, mas o caminho que seguimos para conquista-los");
G(18,7);puts(" Se um dia vc se sentir uma gota no meio do oceano... ");
G(17,8);puts(" lembre-se que sem essa gota o oceano seria menor.  "); 
G(18,10);puts("Se um dia vc se sentir dentro de um buraco...");
G(4+i,11);puts("lembre-se que por mais fundo que ele seje,");
G(4+i,12);puts("ainda nao ha terra por cima dele.");
delay(100);}
       delay(1000);

for(int i=1; i<14 ; i++){ clrscr();//quarto
G(18,3);puts(" Se um dia vc se sentir iludido por um objetivo... "); 
G(17,4);puts(" lembre-se que o importante na vida nao sao os objetivos "); 
G(17,5);puts("que propomos, mas o caminho que seguimos para conquista-los");
G(18,7);puts(" Se um dia vc se sentir uma gota no meio do oceano... ");
G(17,8);puts(" lembre-se que sem essa gota o oceano seria menor.  ");
G(18,10);puts("Se um dia vc se sentir dentro de um buraco... ");
G(17,11);puts("lembre-se que por mais fundo que ele seje,");
G(17,12);puts("ainda nao ha terra por cima dele.");
G(5+i,14);puts("C 1 dia vc sentir vontade de desistir...");
delay(100); }
       for(int i=1; i<14 ; i++){   clrscr();
G(18,3);puts(" Se um dia vc se sentir iludido por um objetivo... "); 
G(17,4);puts(" lembre-se que o importante na vida nao sao os objetivos "); 
G(17,5);puts("que propomos, mas o caminho que seguimos para conquista-los");
G(18,7);puts(" Se um dia vc se sentir uma gota no meio do oceano... ");
G(17,8);puts(" lembre-se que sem essa gota o oceano seria menor.  "); 
G(18,10);puts("Se um dia vc se sentir dentro de um buraco...");
G(17,11);puts("lembre-se que por mais fundo que ele seje,");
G(17,12);puts("ainda nao ha terra por cima dele.");
G(18,14);puts("C 1 dia vc sentir vontade de desistir...");
G(4+i,15);puts("lembre-se que na vida todos tropecam e caem");
G(4+i,16);puts("Mas apenas os fracos ficam estirados ao longo do caminho");
delay(100);}
       delay(1500);

for(int i=1; i<14 ; i++){ clrscr();//quinto
G(18,3);puts(" Se um dia vc se sentir iludido por um objetivo... "); 
G(17,4);puts(" lembre-se que o importante na vida nao sao os objetivos "); 
G(17,5);puts("que propomos, mas o caminho que seguimos para conquista-los");
G(18,7);puts(" Se um dia vc se sentir uma gota no meio do oceano... ");
G(17,8);puts(" lembre-se que sem essa gota o oceano seria menor.  ");
G(18,10);puts("Se um dia vc se sentir dentro de um buraco... ");
G(17,11);puts("lembre-se que por mais fundo que ele seje,");
G(17,12);puts("ainda nao ha terra por cima dele.");
G(18,14);puts("C 1 dia vc sentir vontade de desistir...");
G(17,15);puts("lembre-se que na vida todos tropecam e caem");
G(17,16);puts("Mas apenas os fracos ficam estirados ao longo do caminho");
G(5+i,18);puts("C 1 dia vc c sentir um otario pq ama alguem...");
delay(100); }
       for(int i=1; i<14 ; i++){   clrscr();
G(18,3);puts(" Se um dia vc se sentir iludido por um objetivo... "); 
G(17,4);puts(" lembre-se que o importante na vida nao sao os objetivos "); 
G(17,5);puts("que propomos, mas o caminho que seguimos para conquista-los");
G(18,7);puts(" Se um dia vc se sentir uma gota no meio do oceano... ");
G(17,8);puts(" lembre-se que sem essa gota o oceano seria menor.  "); 
G(18,10);puts("Se um dia vc se sentir dentro de um buraco...");
G(17,11);puts("lembre-se que por mais fundo que ele seje,");
G(17,12);puts("ainda nao ha terra por cima dele.");
G(18,14);puts("C 1 dia vc sentir vontade de desistir...");
G(17,15);puts("lembre-se que na vida todos tropecam e caem");
G(17,16);puts("Mas apenas os fracos ficam estirados ao longo do caminho");
G(18,18);puts("C 1 dia vc c sentir um otario pq ama alguem...");
G(4+i,19);puts("lembre-se que a  menor particula de um sentimento ");
G(5+i,20);puts(" passa por cima da maior porcao de razao.");
delay(100);}
delay(1500);
       for (int i=1;i<14;i++){
G(1,22);puts("                                                  ");
G(20,22);puts("                                                    ");
G(5+i,22);puts(" Se um dia vc sentir que nao entende a vida...");delay(100);}
for (int i=1;i<14;i++){
G(1,23);puts("                                                  ");
G(20,23);puts("                                                    ");
G(5+i,23);puts(" lembre-se que a morte eh certa, a vida nao.");delay(100);}
getche(); x--; tecla='a';clrscr(); continue;

        }//fim se tecla espaco la aristoteles

if(antefase!=7)antefase=7;     
break;// break indo para hogwarts

case 8:// dentro da piramide tela 8 fase 8
if(antefase==12){tecla='a';}
if(antefase==14){y=15;tecla='a';}
if(antefase==11){x=3;y=7;}
gotoxy(1,23);
puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
G(23,18);puts(" ______ ");
G(23,19);puts("|######|");
G(23,20);puts("|######|");
G(23,21);puts("|######|");
G(23,22);puts("|######|");
G(55,19); puts("  \\ ! /");
G(55,20);puts(" \\\\ | //");
G(55,21);puts("\\\\ | | //");
G(53,22);puts("=============");
for(int i=14;i<23;i++){G(52,i);puts("w");}
G(6,14);puts("  _____ ");
G(6,15);puts(" |     |");
G(6,16);puts(" |    c|");
G(6,17);puts(" |     |");
G(6,18);puts("=============");
if(tecla==32 && pgindio+3>x && pgindio-3<x && y==11){
G(60,6); puts("F3.  vermelho");
G(60,7); puts("F4.  cinza");
G(60,8); puts("F6.  azul claro");
G(60,9); puts("F7.  verde claro");
G(60,10);puts("F8.  verde-claro");
G(60,11);puts("F9.  vermelho-claro");
G(60,12);puts("F10. amarelo-claro ");
G(60,13);getche(); G(60,13);puts("  ");
G(60,6); puts("                ");
G(60,7); puts("                ");
G(60,8); puts("                ");
G(60,9); puts("                ");
G(60,10);puts("                ");
G(60,11);puts("                   ");
G(60,12);puts("                   ");

             }
G(1,6); puts("  ___ ");
G(1,7); puts(" |   |");
G(1,8); puts(" |  c|");
G(1,9); puts(" |   |");
G(1,10);puts("==================");
if(tecla==32 && forma==2 && pgindio<43 && fase==8 && y<14 && x<30){
G(pgindio,12);puts("   ");pgindio++; }
//if(tecla==-32)tecla=getche();
if((direcional==83 || tecla==8) && forma==2 && pgindio>23 && fase==8){
G(pgindio,12);puts("   ");pgindio--;        }
G(17,16);puts("=============");
G(32,14);puts("=======================");
G(pgindio,12);puts("|=|   ");
if(x==49 && y==11 && tecla==32 && aprendeu==15){ //if conhecimento==15
G(53,10);printf(" %c",2);
G(53,11);printf("/C\\");
G(53,12);printf("/ \\"); delay(200);
G(31,16);puts(" Capitao Crunch: ");
G(31,17);puts("- Parab\x82ns por ter");
G(31,18);puts("  chego at\x82 aqui!!");
G(31,19);puts("  ajudarei com a arte");
G(31,20);puts("  do SEJAAUTODIDATA !!!");
G(31,20);getche();
G(31,16);puts("          ");
G(31,17);puts("                     ");
G(31,18);puts("                     ");
G(31,19);puts("                     ");
G(31,20);puts("                     ");
for(int i=13;i>5;i--){G(53,i);puts("   ");}
G(53, 8);printf("<%c",2);
G(53, 9);printf(" C\\");
G(53,11);printf("/ \\"); delay(200);
G(48,7);printf("{}");
for(int i=13;i>5;i--){G(53,i);puts("   ");}
G(51, 7);printf("<-)%c",2);
G(51, 8);printf("   C ");
G(51, 9);printf("  / \\"); delay(200);
for(int i=13;i>5;i--){G(53,i);puts("   ");}
G(53,8); printf(" %c",2);
G(53,9); printf("/C\\");
G(53,10);printf("/ \\"); 
G(50,7);puts("<-");
delay(200);
for(int i=13;i>5;i--){G(53,i);puts("   ");}
G(53,9); printf(" %c",2);
G(53,10); printf("/C\\");
G(53,11);printf("/ \\"); 
G(49,7);puts("<-");
delay(200);
//portalmagico lançaflecha
clrscr();
gotoxy(1,23);
puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
gotoxy(1,15);
puts(" ____ ");
puts("|    |");
puts("|   c|");
puts("|    |"); 
puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww=====wwwwwwwwwwwwwwwwwwwwwwwwwww=");
gotoxy(42,13);puts("_____________");gotoxy(41,14);puts("/             \\");
gotoxy(41,15);puts("|     ______  |");gotoxy(41,17);puts("|    |     c| |");
gotoxy(41,16);puts("|    |      | |");gotoxy(41,18);puts("|    |      | |");
gotoxy(67,10);puts("  ######");gotoxy(67,11);puts("  ######");
gotoxy(67,12);puts("  ######");gotoxy(67,13);puts("  ######");
gotoxy(67,14);puts(" =======");gotoxy(16,6); puts("    ww");
gotoxy(16,7); puts("    ww");gotoxy(16,8); puts("  _____");
gotoxy(16,9); puts(" |     |");gotoxy(16,10);puts(" |    c|");
gotoxy(16,11);puts(" |     |");gotoxy(16,12);puts(" wwwwwww");
gotoxy(16,13);puts(" wwwwwww");gotoxy(16,14);puts(" wwwwwww");
for(int i=49;i>21;i--){
//G(22,6);puts("                              ");
G(i,6);puts("<- ");delay(100);
                       }
aprendeu++;tecla='a';
//fimportalmagico lançaflexa
getche(); clrscr(); continue;
         } //fim if conhecimento==15
if(aprendeu==16 && x==49 && y==11 && tecla==32){//se aprendeu==16
if(agua==0){//se agua==0
G(60,6); printf("N%co posso deixar",198);
G(60,7); printf("Que ningu%cm passe",130);
G(60,8); printf("Por este local");
G(60,9); printf("Enquanto a passagem");
G(60,10);printf("N%co for segura",198);
G(60,10);getche();
G(60,6); printf("                     ");
G(60,7); printf("                     ");
G(60,8); printf("                     ");
G(60,9); printf("                     ");
G(60,10);printf("                     ");
            }// fimse agua
if(agua==1){//se agua==1
//G(60,);puts("");
            }//fimse agua==1
}//fimse aprendeu==16
G(53,11);printf(" %c",2);
G(53,12);printf("/C\\");
G(53,13);printf("/ \\");
if(x==49 && y==11 && tecla==32 && aprendeu>15){ //if fala com SUEDYS
G(60,6); printf("N%co posso deixar",198);
G(60,7); printf("Que ningu%cm passe",130);
G(60,8); printf("Por este local");
G(60,9); printf("Enquanto a passagem");
G(60,10);printf("N%co for segura",198);
G(60,10);getche();
G(60,6); printf("                     ");
G(60,7); printf("                      ");
G(60,8); printf("                      ");
G(60,9); printf("                      ");
G(60,10);printf("                      ");

                                                }
if(x>49 && y>18){morreu=1;continue;}
antefase=8;
break;//break dentro da piramide tela 8 fim tela do SUEDYS piramide

case 9:// portinha do jump++ tela 9
if(antefase==300){x=50;y=11;}
if(antefase==12){y=10;} 
G(1,23);PU("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
G(69,14);puts(" ___");G(69,18);puts("======");
G(69,15);puts("|   |");
G(69,16);puts("|  c|");
G(69,17);puts("|___|");G(69,18);puts("======");
G(1,14);PU("===========================================================");
G(35,18);PU("=====");
gotoxy(43,7); puts("|--------------|");
gotoxy(43,8); puts("|(((())()(())))|");
gotoxy(43,9); puts("|  LAS VEGAS   |");
gotoxy(43,10);puts("| §§§§§§§§§§§§ |");
gotoxy(43,11);puts("|    !$$$$$!   |");
gotoxy(43,12);puts("|    !$$$$$!   |");
gotoxy(43,13);puts("|    !$$$$$!   |");
G(2,8);   PR(" _, ,_____",190);//190
G(2,9); puts(" | _____ |");
G(2,10);puts(" ||=====||");
G(2,11);puts(" ||     ||  ");
G(2,12);puts(" ||     || |=|");
G(2,13);puts("!=========!");
G(20,12); puts("           ");
G(20,13); puts("                     ");
//20,14); puts("                                          ");
G(20,15); puts("          ");G(31,15);puts("                               ");
G(20,16); puts("           "); G(31,16);puts("                               ");

if(x>10 && x<16 && y==11 && tecla==32){
G(15,7);puts("EMBARQUE APENAS");
G(15,8);puts("COM O PASSAPORTE");
G(15,8);getche();
G(15,7);puts("               ");
G(15,8);puts("                 ");  }
if(x<8 && x>4 && y==10 && tecla==32 && passaporte>0){
       tela=12;fase=12;y=19;delay(200);continue;
                                                     }
//G(47,19);puts(" ___"); G(40,19);puts(" ___"); G(30,19);puts(" ___");
//G(47,20);puts("|   |");G(40,20);puts("|   |");G(30,20);puts("|   |");
G(47,21);if(adv1==0) puts(" ___"); else puts("(   )");
G(40,21);if(adv2==0) puts(" ___"); else puts("(   )");
G(30,21);if(adv3==0) puts(" ___"); else puts("(   )");
G(47,22);puts("|_8_|");G(40,22);puts("|_8_|");G(30,22);puts("|_8_|");
gotoxy(15,20);printf(" %c",1);
gotoxy(15,21);  puts("/W\\");
gotoxy(15,22);  puts("/ \\");

if(tecla==32 && x>11 && x<19 && y==20){//fala
   if(adv1==0){
            gotoxy(20,12); puts(" charada 1:");
            gotoxy(20,13); puts(" O que eh o que eh...");
            gotoxy(20,14); puts(" se disser meu nome nao existirei mais?");
            G(20,15); puts(" RESPOSTA:"); G(31,15);
            scanf("%s",&resp);
if((resp[0]=='s' || resp[0]=='S' )&& resp[1]=='i' && resp[2]=='l' && 
(resp[3]=='ê' || resp[3]=='e')&& resp[4]=='n' && resp[5]=='c' && resp[6]=='i' 
&& resp[7]=='o'){adv1=1;continue;}} //fim se adv1==0
   if(adv2==0 && adv1==3){
    G(20,12);      puts(" charada 2:");
    gotoxy(20,13); puts(" O que eh o que eh...");
    gotoxy(20,14); puts(" Eh maior que Deus, os pobres nao tem");
    gotoxy(20,15); puts(" E os ricos nao precisam?");
    G(20,16); puts(" Resposta: "); G(31,16);
    scanf("%s",&resp);
    if((resp[0]=='N' || resp[0]=='n' )&& (resp[1]=='a' || resp[1]=='A') && 
    (resp[2]=='d' || resp[2]=='D') && (resp[3]=='A' || resp[3]=='a')){adv2=1;
    continue;}}       //fim se adv2==0
if(adv3==0 && adv2==3){
            gotoxy(20,12); puts(" charada 3:");
            gotoxy(20,13); puts(" 4 romanos e 1 ingles amavam uma mulher...");
            gotoxy(20,14); puts(" Ql era o nome dela?");
            G(20,15);puts("resposta:");G(31,15);
            scanf("%s",&resp);
        if((resp[0]=='I' || resp[0]=='I' )&& resp[1]=='v' && resp[2]=='o' && 
(resp[3]=='n' || resp[3]=='n')&& resp[4]=='e'){adv3=1;continue;}}// fim se adv3==0

                 }//fim fala
if(adv1==1 && tecla==32 && x==48){adv1=2; continue;}
if(adv2==1 && tecla==32 && x==41){adv2=2; continue;}
if(adv3==1 && tecla==32 && x==31){adv3=2; continue;}
if(speed<4){
gotoxy(2,20);PR(" _ %c",64);
G(2,21);   puts("/--G_= ");
G(1,22);  puts("O    O  ");
if(x<10 && tecla==32 && y==20){
if(gasolina==0){
G(4,15); puts(" MOQUETEIRO:");delay(800);
G(4,16); puts(" Acabou a gasolina da minha moto :(");delay(1000);
getche();
G(4,15); puts("             ");
G(4,16); puts("                                   ");
}
if(gasolina>0){
G(4,15); puts(" MOSQUETEIRO: ");delay(800);
G(4,16); puts(" Muito Obrigado pela gasolina");delay(200);
G(4,17);puts("###VC GANHOU O PODER DE VELOCIDADE!!!"); 
G(4,18);puts("pasword: 180687 ");          gasolina=0; speed=4;
G(4,18);getche();
G(4,15); puts("              ");
G(4,16); puts("                             ");
G(4,17);puts("                                     "); 
G(4,18);puts("                ");
}
}//fimse fala c guilherme
}// fim se speed <4

if(x==18 && y==20 && adv1!=0 && tecla=='e'){
G(23-5,20-1);printf("\\%c/",1);G(23-5,21-1);  puts(" #");G(23-5,22-1);  puts("/ \\");
delay(200);G(23-5,20-1);printf("      ");G(23-5,21);  puts("  ");G(23-5,22);  puts("    ");        
G(23-5,19-1);printf("%c//",1);G(23-5,20);  puts("/#");G(23-5,21);  puts("/ \\");
delay(200);G(23-5,19-1);printf("    ");G(23-5,20);  puts("  ");G(23-5,21);  puts("    ");
G(22-5,18-1);printf("  / /");G(22-5,19-1);printf("%c#-¬");G(22-5,20-1);printf(" /");
delay(200);G(22-5,18-1);printf("     ");G(22-5,19-1);printf("     ");G(22-5,20-1);printf("  ");
G(21-5,17-1);printf(" \\ /");G(21-5,18-1);printf("%c#",1);G(21-5,19-1);printf(" / \\");
delay(200);G(21-5,17-1);printf("     ");G(21-5,18-1);printf("   ");G(21-5,19-1);printf("    ");
G(20-5,17-1);printf("\\ /");G(20-5,18-1);printf("-#");G(20-5,19-1);printf(" %c\\",1);
delay(200);G(20-5,17-1);printf("   ");G(20-5,18-1);printf("  ");G(20-5,19-1);printf("   ");
G(19-5,18-1);printf("\\ /");G(19-5,19-1);printf("-#");G(19-5,20-1);printf(" %c\\",1);
delay(200);G(19-5,18-1);printf("   ");G(19-5,19-1);printf("  ");G(19-5,20-1);printf("   ");        
G(18-5,19-1);printf("\\ /");G(18-5,20-1);printf("-#%c",1);G(18-5,21-1);printf("/");
delay(200);G(18-5,19-1);printf("   ");G(18-5,20-1);printf("   ");G(18-5,21-1);printf(" ");
G(17-5,20-1);printf(" %c",1);G(17-5,21-1);printf("/#\\");G(17-5,22-1);printf("/ \\");
delay(200);G(17-5,20-1);printf("  ");G(17-5,21-1);printf("   ");G(17-5,22-1);printf("   \\");

x=12;tecla='a';G(75,2);continue;    
         
         
         }

if(antefase!=9)antefase=9;     
break;// break portinha do jump++ tela 9

case 10: //tela 10 em Hogwarts definitivamente dentro de hogwarts
if(antefase==7){
G(2,15);puts(" ! !");G(2,16);  PR(" ! !_%c____",190);//190
G(2,17);puts(" | _____ |");G(2,18);puts(" ||=====||");
G(2,19);puts(" ||     ||");G(2,20);puts(" ||     ||");
G(2,21);puts("!=========!");G(2,22);puts("  ######  ");delay(3000);}
gotoxy(1,23);
puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
G(2,8);printf("       %c",14);
G(2,9);printf("  %c ",14); 
G(2,11);puts(" ~~ ");
G(2,12);puts(" (( ");
G(2,13);puts("  ))");    
G(2,14);puts(" ((");
G(2,15);puts(" ! !");
G(2,16);  PR(" ! !_%c____",190);//190
G(2,17);puts(" | _____ |");
G(2,18);puts(" ||=====||");
G(2,19);puts(" ||     ||");
G(2,20);puts(" ||     ||");
G(2,21);puts("!=========!");
G(2,22);puts("  ######  ");
if(bolsa==0){gotoxy(42,21);puts("\\_/");G(42,22);printf("(%c)",36);
if(x==42 && y==20 && tecla==32){bolsa=1;continue;}}
G(24,13);puts("  __________________");
G(24,14);puts(" /CONCURSO DE MAGIA \\");
G(24,15);puts("|,,,,,,,______,,,,,,,|");
G(24,16);puts("|,,,,,,|      |,,,,,,|");
G(24,17);puts("|,,,,,,|     c|,,,,,,|");
G(24,18);puts("|,,,,,,|      |,,,,,,|");
G(14,19);puts("====================================");
for(int i=6;i<23;i++){
        gotoxy(58,i);puts("lPl");}
if(antefase!=10)antefase=10;
break;
case 300: // las vegas jogos de azar tela 300
if(forma!=1)if(forma==2);else forma=1;
if(antefase==9){x=48;y=20;antefase=4;}
gotoxy(46,20);puts("!$$$$$!");gotoxy(46,21);puts("!$$$$$!");
gotoxy(46,22);puts("!$$$$$!"); 
gotoxy(2,23);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
gotoxy(2,19);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
gotoxy(2,15);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
gotoxy(2,11);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
gotoxy(2,7);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWW");
G(28,8);puts("W");G(28,9);puts("W");G(28,10);puts("W");
G(20,22);puts("|      |");G(20,21);puts("|      |");G(20,20);puts("|      |");
G(20,18);puts("|      |");G(20,17);puts("|      |");G(20,16);puts("|      |");
G(20,14);puts("|      |");G(20,13);puts("|      |");G(20,12);puts("|      |");
G(20,10);puts("|      |");G(20,9);puts("|      |");G(20,8);puts("|      |");
G(5,12);puts("|   |");
G(5,13);puts("|###|");
G(5,14);puts("|   |");
G(65,16);puts("|   |");
G(65,17);puts("|###|");
G(65,18);puts("|   |");
G(5,20);puts("|   |");
G(5,21);puts("|###|");
G(5,22);puts("|   |");
if(x<9 && y==20 && tecla==32){
clrscr();
G(2,2);printf("Para assistir a m%cgica custa R$ 5.000,00",160);
G(2,3);puts("DESEJA ASSISTIR?(s/n) ");
G(24,3); tecla=getch();
if(tecla=='s' && rs>=5000){
rs=rs-50000;
tecla='a';
copper();
clrscr(); continue;              
                         }
else{
G(2,5);puts("OKAY!");     
     }              

G(2,2);puts("                                                           ");
G(2,3);puts("                                                           ");
G(2,4);puts("                                                           ");
tecla='a';

       
                          } // fim se ver magica
if(x>63  && y==16 && tecla==32){
clrscr();
G(2,2);puts("Para jogar custa R$ 50,00");
G(2,3);puts("DESEJA JOGAR DIGITACAO?(s/n) ");
G(2,6);puts("Regras:1.Os pontos feitos resultar\xC6o");
G(2,7);puts("\trespectivamente ao retorno em dinheiro\n");
G(2,8);printf("\t2.A cada 10 letras ca%cdas uma letra perdida!\n",161);
G(2,9);printf("\te quando 20 letras s%co perdidas o jogo acaba!",198);
G(2,4);puts("R: ");tecla=getche(); //G(1,3);puts(" ");
G(2,2);puts("                                  ");
G(2,3);puts("                                  ");
G(2,6);puts("                                             ");
G(2,7);puts("                                             ");
G(2,8);printf("                                                         ");
G(2,9);printf("                                                         ");

if(tecla!='s'){tecla='a';continue;}
else {
rs=rs-50;
rs+=gamedig();     
tecla='a';
continue;
          }         
         }
if(x>20 && x<25 && tecla==32){
if(andars>2)y=y+4;else y=y-4;
andars=(andars+1)%6;}
if(x<7 && y==12 && rs>0 && tecla==32){
clrscr();
G(2,2);puts("DESEJA JOGAR JOQUEMPO?(s/n) ");
tecla=getche(); G(1,3);puts(" ");
if(tecla!='s'){tecla='a';continue;}
G(2,3);puts("APOSTAS DE:");
scanf("%d",&joquemrs);
if(joquemrs>rs && rs<100000000 && rs<100001){tecla='a';continue;}
G(1,4);puts(" MELHOR DE 12");delay(1500);

       //JOQUEMPOCOMECO
joquemy=0,joquepc=0,teclajoque,joquemeu=0,jqpontpc=0,jqponteu=0;
//for(int i=0;i<20;i++)joquepc=rand()%60;
while(1 && jqpontpc<12 && jqponteu<12){
clrscr();
joquepc=rand()%3+1;
G(50,12);puts("| tesoura | ");
G(50,14);puts("|  pedra  | ");
G(50,16);puts("|  papel  | ");     
G(50,18);puts("|   sai   | ");
G(2,2);
//printf("joquemy=%d,teclajoque=%d,joquemeu=%d,joquepc=%d",joquemy,teclajoque,joquemeu,joquepc);
//if(teclajoque==80){joquemy=(joquemy+2)%8;} if(teclajoque==72){joquemy=(joquemy+6)%8;}
if(joquemy==-2)joquemy=6;
if(joquemeu>0){
if(joquepc==1){G(20,10);puts("  _  _");
               G(20,11);puts(" (_)(_)");
               G(20,12);puts("  //\\\\");
               G(20,13);puts(" //  \\\\"); }               
if(joquepc==2){G(20,10);puts("  ....");
               G(20,11);puts(" ......");
               G(20,12);puts("........");
               G(20,13);puts(" ......"); 
               G(20,14);puts("  ....");               }
if(joquepc==3){G(20,10);puts("\xB0\xB0\xB0\xB0\xB0\xB0\xB0");
               G(20,11);puts("\xB0\xB0\xB0\xB0\xB0\xB0\xB0");
               G(20,12);puts("\xB0\xB0\xB0\xB0\xB0\xB0\xB0");
               G(20,13);puts("\xB0\xB0\xB0\xB0\xB0\xB0\xB0");
               G(20,14);puts("\xB0\xB0\xB0\xB0\xB0\xB0\xB0");  }
if(joquemeu==1){
                G(20,17);puts(" \\\\  //");
                G(20,18);puts("  \\\\//");
                G(20,19);puts(" (\xEE)(\xEE)");
                G(20,20);puts("  \xEE  \xEE");
                }
if(joquemeu==2){G(20,17);puts("  ....");
                G(20,18);puts(" ......");
                G(20,19);puts("........");
                G(20,20);puts(" ......"); 
                G(20,21);puts("  ....");    }
if(joquemeu==3){G(20,17);puts("\xB0\xB0\xB0\xB0\xB0\xB0\xB0");
                G(20,18);puts("\xB0\xB0\xB0\xB0\xB0\xB0\xB0");
                G(20,19);puts("\xB0\xB0\xB0\xB0\xB0\xB0\xB0");
                G(20,20);puts("\xB0\xB0\xB0\xB0\xB0\xB0\xB0");
                G(20,21);puts("\xB0\xB0\xB0\xB0\xB0\xB0\xB0");  }
if(joquemeu!=joquepc){
if(joquemeu-1==joquepc)jqponteu++;
if(joquemeu+1==joquepc)jqpontpc++;
if(joquemeu==1 && joquepc==3)jqponteu++;
if(joquepc==1 && joquemeu==3)jqpontpc++;
                       }
delay(1000);
               }//se joquemeu>0 se usuario escolheu algo != sai
G(49,11+joquemy);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,187);
G(49,12+joquemy);printf("%c",186);G(61,12+joquemy);printf("%c",186);
G(49,13+joquemy);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,188);
G(10,7);printf("PC:%d x VOCE:%d",jqpontpc,jqponteu);
teclajoque=getch();joquemeu=0;
//gif(teclajoque!=-32 && teclajoque!=13 && teclajoque!=27)continue;
if(teclajoque==-32)teclajoque=getch();
//if(teclajoque!=80 || teclajoque!=72 || teclajoque!=13 || teclajoque!=27)continue;
if(teclajoque==80){joquemy=(joquemy+2)%8;delay(20);continue;}
if(teclajoque==72){joquemy=(joquemy-2)%8;delay(20);continue;}
if(teclajoque==27)break;
if(joquemy==6 && teclajoque==13)break;
if(joquemy==4 && teclajoque==13)joquemeu=3;
if(joquemy==2 && teclajoque==13)joquemeu=2;
if(joquemy==0 && teclajoque==13)joquemeu=1;
                   
                  
                   
         }//fimwhile1
clrscr();
G(2,7); puts("                         .");
G(2,8); puts("                        . .");
G(2,10);puts(".       .  ....  .....  .....");
G(2,11);puts(" .     .  .    . .      .");
G(2,12);puts("  .   .   .    . .      ...");
G(2,13);puts("   . .    .    . .      .  ");
G(2,14);puts("    .      ....  .....  .....");
if(jqponteu==12){
rs=rs+joquemrs;

G(2,16);puts("......  ......  ..      . .      .  .......  .      .   ");
G(2,17);puts(".      .      . . .     . .      . .       . .      .   ");
G(2,18);puts(".      .      . .  .    . .      . .       . .      .   ");
G(2,19);puts(".  ... ........ .   .   . ........ .       . .      .   ");
G(2,20);puts(".    . .      . .    .  . .      . .       . .      .   ");
G(2,21);puts(".    . .      . .     . . .      . .       . .      .   ");
G(2,22);puts("...... .      . .      .. .      .  .......   ......    ");
G(20,23);printf(" + %d",joquemrs);
delay(4500);clrscr();
continue;}
else {rs-=joquemrs; 

G(2,16);puts("......  ....... ......    ......    ....... .        .  ");
G(2,17);puts(".     . .       .     .   .      .  .       .        .  ");
G(2,18);puts(".     . .       .     .   .       . .       .        .  ");
G(2,19);puts("......  .....   ......    .       . .....   .        .  ");
G(2,20);puts(".       .       .     .   .       . .       .        .  ");
G(2,21);puts(".       .       .      .  .      .  .        .      .   ");
G(2,22);puts(".       ....... .       . ......    .......   ......    ");
G(20,23);printf(" - %d",joquemrs);
delay(4500); clrscr();
continue;}
       //JOQUEMPOFINAL
       
                          }//fimse vai na loja joquempo
antefase=300;
break;

case 200://escola de magia
if(forma!=1)if(forma==2);else forma=1;
G(14,8);  puts("                           ");
G(14,9);printf("                         ");
G(14,10);   PR("                         ");
if(certrespr<10){G(14,11);   PR("                          ");}
if(certrespr==10){G(14,11);  PR("                          ");}

gotoxy(31,15);puts(" ______    RECEPCAO");
gotoxy(31,16);  PR("|      |  |   %c   |",2);
gotoxy(31,17);puts("|     c|  =========");
gotoxy(31,18);puts("|      |  =========");
gotoxy(5,19);puts("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH");
G(27,11);puts("       ");
if(x>41 && x<49 && tecla==32 && passteste==0){direcional=0;
G(25,8);puts("Charlie Brown:");
G(26,9);puts("Deseja participar do concurso ");
G(27,10);puts("E fazer a prova?((S)im /(N)ao?)");
G(27,11);
tecla=getche();if(tecla=='N' || tecla=='n')puts(" Ok...");G(27,11);puts("  ");
G(25,8);PU("                            ");G(26,9);PU("                                   ");G(27,10);PU("                                   ");
if(tecla=='s' || tecla=='S'){tecla='a';
while(saiprova==0){
G(5,12);PU("|harry ||HERMIONE|");
G(3,13);PR("     %c   VC  %c",25,25);
G(3,14);PR("         %c            --> FALTAM RESPONDER: %d PERGUNTAS...",25,faltamrespr);
G(7,15);printf(" %c       %c        --> <ESPACO> P/ CHUTAR... <P> P/ PULAR",30,30);
G(7,16);printf(" %c   %c   %c       --> <ENTER> P/ TERMINAR PROVA",2,1,2);
if(((tecla==115 || direcional==75) && hermione==0)|| aurelio==1){
G(7,16);printf(" %c  %c    %c  ",2,1,2);aurelio=1;hermione=0;}
if(((tecla==102 || direcional==77) && aurelio==0)|| hermione==1){
G(7,16);printf(" %c    %c  %c  ",2,1,2);hermione=1;aurelio=0;}
G(7,17);  puts(" =   =   =                                              ");
G(7,18);  puts("! ! ! ! ! !                                              "); 
tecla=getche(); G(1,19);puts(" ");if(tecla==-32){direcional=getche();G(1,20);puts(" ");}
if(tecla=='e' || tecla=='d' || direcional==72 || direcional==80){hermione=aurelio=0;tecla=101;}
if(hermione==1 && aurelio==0 && (tecla=='s' || direcional==75)){
hermione=aurelio=0; tecla=101;}
if(aurelio==1 && hermione==0 && (tecla=='f' || direcional==77)){
hermione=aurelio=0; tecla=101;}
if(faltamrespr==0)saiprova=1;
//saiprova faltamrespr=10;certrespr=0;
// hermione 1,2,3,4,5,7,8,10  aurelio  1,2,3,5,6,7,9,10
switch(faltamrespr){
case 1: if((aurelio==1) && (tecla==3 || tecla==22)){certrespr++;faltamrespr--;}
if(hermione==1 && (tecla==3 || tecla==22)){faltamrespr--;}
if(tecla==32){faltamrespr--;}break;
case 2: if((aurelio==1 || hermione ==1) && (tecla==3 || tecla==22)){certrespr++;faltamrespr--;}
if(tecla==32){faltamrespr--;certrespr++;}break;
case 3: if((aurelio==1 || hermione ==1) && (tecla==3 || tecla==22)){certrespr++;faltamrespr--;}
if(tecla==32){faltamrespr--;}break;
case 4: if(hermione==1 && (tecla==3 || tecla==22)){certrespr++;faltamrespr--;}
if(aurelio==1 && (tecla==3 || tecla==22)){faltamrespr--;}
if(tecla==32){faltamrespr--;certrespr++;}break;
case 5: if((aurelio==1 || hermione ==1) && (tecla==3 || tecla==22)){certrespr++;faltamrespr--;}
if(tecla==32){faltamrespr--;certrespr++;}break;
case 6: if(aurelio==1 && (tecla==3 || tecla==22)){certrespr++;faltamrespr--;}
if(hermione==1 && (tecla==3 || tecla==22)){faltamrespr--;}
if(tecla==32)faltamrespr--;break;
case 7: if((aurelio==1 || hermione ==1) && (tecla==3 || tecla==22)){certrespr++;faltamrespr--;}
if(tecla==32)faltamrespr--;break;
case 8: if(hermione==1 && (tecla==3 || tecla==22)){certrespr++;faltamrespr--;}
if(aurelio==1 && (tecla==3 || tecla==22)){faltamrespr--;}
if(tecla==32)faltamrespr--;break;
case 9: if((aurelio==1 || hermione ==1) && (tecla==3 || tecla==22)){certrespr++;faltamrespr--;}
if(tecla==32){faltamrespr--;certrespr++;}break;
case 10:if((aurelio==1 || hermione ==1) && (tecla==3 || tecla==22)){certrespr++;faltamrespr--;}
if(tecla==32)faltamrespr--;break;}//fimswtich 
if(tecla=='p' || tecla=='P')faltamrespr--;
if(tecla==13)saiprova=1;
}}
if(saiprova==1){clrscr();
G(14,8);puts("    NOTAS:     |RESULTADOS|");
G(14,9);printf("HERMIONE: 8  |REPROVADO |");
G(14,10);   PR("AURELIO : 8  |REPROVADO |");
if(certrespr<10){G(14,11);   PR("VC      : %d  |REPROVADO |",certrespr);}
if(certrespr==10){G(14,11);  PR("VC      : %d  | APROVADO |",certrespr);}
getche();
}//ifsaiprova==1
if(certrespr>9 && passteste==0){passteste=1;clrscr(); continue;}
saiprova=0;certrespr=0;hermione=0;aurelio=0;faltamrespr=10; //fimenquanto saiprova==0
} // se (s)im desejando participar do concurso...

if(antefase!=200)antefase=200;
break;

case 11: // tela 11 pedreira CEP  rafa
if(antefase==8) {x=18;y=8;}
//if(antefase==18){x=70;y=11;}
for (int i=9;i<14;i++){G(3,i);puts("                                               ");}
gotoxy(1,23);
if(forma==7 && x==22 && tecla=='s'){x++;}
puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
G(41,15);puts("    ________  ");
G(41,16);puts("   |        |");
G(41,17);puts("   |      c |");
G(41,18);puts("   |        |");
G(41,19);puts("=============");
G(3,19); puts("=====");
G(10,15);puts("=====");
G(3,11); puts("=====");
for(int i=6;i<20;i++){G(20,i);puts("   "); }  
G(17,7); puts(" ___");
G(17,8); puts("|   |");
G(17,9); puts("|  c|");
G(17,10);puts("|   |");
G(17,11);puts("=====");
G(40,11);puts("                          ");
G(23,7);printf("                                ");
G(23,8);printf("                                ");
G(23,9);printf("                                ");
G(23,10);printf("                               ");             
G(23,11);printf("                                ");
G(23,12);printf("                                ");
G(23,13);printf("                                ");
G(54,16);printf("                                ");

if(aranha==0){G(2,9);puts("*");}
if(x==2 && y==8 && tecla==32 && aranha==0){ // se da acao na aranha
G(23,7);printf("\x1: nossa uma ARANHA!!!!!");
                              }
if(pote>0 && (tecla=='p' || tecla=='P') && x==2 && y==8 && aranha==0){
aranha=1;   tecla='a';       continue;
                                                         }
if(aprendeu>20 && (tecla=='M' || tecla=='m')){
G(54,16);printf("Magia mental numero= %d",randomico);
tecla=32;
                               }
if(bolsa==4){
G(11,13);puts("\\ /");
G(11,14);puts("($)");
if(x==11 && y==12 && tecla==32){
bolsa ++; continue;         
                 }             
             }

if(forma!=1 && forma!=2 && x>18){      
for(int i=6;i<20;i++){
G(20,i);puts("!!!"); }            
                         }
G(20,20);printf(" %c ",2);
G(20,21);printf("/A\\");
G(20,22);printf("/ \\");

if(forma==8){
G(23,7);printf("Rafa: Nao adianta fikr invisivel");
G(23,8);printf("  ou esqueceu que eu tenho a");
G(23,9);printf("super visao POWERBATCH!!!!!");             
            
             }
if(x==23 && tecla==32 && y==20 &&(forma==1 || forma==2)){//começa fala gilson honorio
G(23,9);puts("rafa: ");
G(23,10);printf("Teste telap%ctico...",160);
G(23,11);printf("pensei em um n%cmero de 0 a 9",163);
G(23,12);puts("concentre-se e me diga ahn ahn...");
G(23,13);tecla=getche();G(3,13);puts(" ");if(randomico!=(tecla-48)){
for (int i=9;i<14;i++){
G(23,i);puts("                                     ");}
G(23,9);puts("ERRADO...");getche();G(3,10);puts(" ");x++;
clrscr(); continue;}//fimse errado
if(randomico==(tecla-48)){ //se certo correto
for (int i=9;i<14;i++){
G(23,i);puts("                                     ");}
G(23,9);puts("CORRETO!!!!");G(3,10);getche();G(3,10);puts(" ");
G(23,20-1);printf("\\%c/",1);G(23,21-1);  puts(" #");G(23,22-1);  puts("/ \\");
delay(200);G(23,20-1);printf("      ");G(23,21);  puts("  ");G(23,22);  puts("    ");        
G(23,19-1);printf("%c//",1);G(23,20);  puts("/#");G(23,21);  puts("/ \\");
delay(200);G(23,19-1);printf("    ");G(23,20);  puts("  ");G(23,21);  puts("    ");
G(22,18-1);printf("  / /");G(22,19-1);printf("%c#-¬");G(22,20-1);printf(" /");
delay(200);G(22,18-1);printf("     ");G(22,19-1);printf("     ");G(22,20-1);printf("  ");
G(21,17-1);printf(" \\ /");G(21,18-1);printf("%c#",1);G(21,19-1);printf(" / \\");
delay(200);G(21,17-1);printf("     ");G(21,18-1);printf("   ");G(21,19-1);printf("    ");
G(20,17-1);printf("\\ /");G(20,18-1);printf("-#");G(20,19-1);printf(" %c\\",1);
delay(200);G(20,17-1);printf("   ");G(20,18-1);printf("  ");G(20,19-1);printf("   ");
G(19,18-1);printf("\\ /");G(19,19-1);printf("-#");G(19,20-1);printf(" %c\\",1);
delay(200);G(19,18-1);printf("   ");G(19,19-1);printf("  ");G(19,20-1);printf("   ");        
G(18,19-1);printf("\\ /");G(18,20-1);printf("-#%c",1);G(18,21-1);printf("/");
delay(200);G(18,19-1);printf("   ");G(18,20-1);printf("   ");G(18,21-1);printf(" ");
G(17,20-1);printf(" %c",1);G(17,21-1);printf("/#\\");G(17,22-1);printf("/ \\");
delay(200);G(17,20-1);printf("  ");G(17,21-1);printf("   ");G(17,22-1);printf("   \\");

x=17;tecla='a';G(75,2);
G(2,9);puts("            ");
continue;    
                          }//fimse certo correto          
         }//fim fala gilson honorio
if(conhecimento==12){
gotoxy(12,22);puts("c!!");
if(x<15 && x>11 && y==20 && tecla==32){aprendeu++;continue;}}

if(antefase!=11)antefase=11;
G(3,11);puts("=====");
break;

case 12: // tela 12 trem com passaporte codigo morse
if(antefase==9){tecla='a';y=19;}
if(antefase==8){tecla='a';}
if(antefase==13){x=51;y=10;tecla='a';}
G(2,17);   PR(" =, ,=====",190);//190
G(2,18); puts(" | _____ |");
G(2,19); puts(" ||=====||");
G(2,20); puts(" ||     ||  ");
G(2,21); puts(" ||     || ");
G(2,22); puts("!=========!");
gotoxy(2,23);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
G(17,12);puts("          /\\ ");
G(17,13);puts("         /  \\");
G(17,14);puts("        /.-. \\");
G(17,15);puts("       /      \\");
G(17,16);puts("      / ---    \\");
G(17,17);puts("     /          \\");
G(17,18);puts("    /    ..-     \\ ");
G(17,19);puts("   /   -       _  \\");
G(17,20);puts("  /    .      |=|  \\");
G(17,21);puts(" /       .-.  ###   \\");
G(17,22);puts("/                    \\");
G(50,9); puts(" ____");
G(50,10);puts("|    |");
G(50,11);puts("|   c|");
G(50,12);puts("|    |"); 
G(43,13);puts("======================");
G(40,pgpiramide);puts("|=|");
if(x<8 && x>4 && y==19 && tecla==32 && passaporte>0){
tecla='a';tela=9;fase=9;y=10;delay(200);continue;  }
if(x>29 && x<32 && y==20 && tecla==32 && openpiramide!=1){
G(45,16);puts("CODIGO PIRAMIDAICO:");
G(45,17);scanf("%s",&resp);
G(45,16);puts("                   ");
G(45,17);puts("                   ");
if(strlen(resp)<7)
if(resp[0]=='r'&&resp[1]=='o'&&resp[2]=='u'&&resp[3]=='t'&&resp[4]=='e'&&resp[5]=='r')
{
openpiramide=1; 
for(int i=0;i<5;i++){
G(23,18);puts(" ______");
G(23,19);puts("|######|");
G(23,20);puts("|######|");
G(23,21);puts("|######|");
G(23,22);puts("|######|");delay(100);
G(23,18);puts("        ");
G(23,19);puts("        ");
G(23,20);puts("        ");
G(23,21);puts("        ");
G(23,22);puts("        ");delay(100);}
tecla='a';
continue;

                                                                                                                                                                            
}
                          }
if(pgpiramide==21 && x>37 && x<43 && tecla==32 && y==20){
G(51,8);puts("CODIGO MORSE");
G(38,9); puts("A= .-    H= ....            T= -");
G(38,10);puts("B= -...  I= ..              U= ..-");                  
G(38,11);puts("C= -.-.  J= .--- O= ---     V= ...-");
G(38,12);puts("D= -..   K= -.-  P= .--.    W= .--");
G(38,13);puts("E= .     L= .-.. Q= --.-    X= -..-");
G(38,14);puts("F= ..-.  M= --   R= .-.     Y= -.--");
G(38,15);puts("G= --.   N= -.   S= ...     z= --..");
getche();tecla='a';clrscr();continue;
}
if(openpiramide==1){
G(17,17);puts("     /          \\");
G(17,18);puts("    /  ______    \\ ");
G(17,19);puts("   /  |######| _  \\");
G(17,20);puts("  /   |######||=|  \\");
G(17,21);puts(" /    |######|###   \\");
G(17,22);puts("/     |######|       \\");
if(x>23 && x<28&& y==20 && tecla==32){tela=8;fase=8;continue;}
                     } 
if(x>29 && x<32 && y==20 && tecla==32 && openpiramide==1){
quantia=0;
G(45,16);printf("sua: RS %d",sua);
G(45,17); puts("1. extrato");
G(45,18);puts("2. deposito");
tecla=getch();
if(tecla=='1'){
G(55,19);puts("Quantia: ");               
G(55,20);scanf("%d",&quantia);
if(sua>=quantia){sua-=quantia;rs+=quantia;}
               }
if(tecla=='2'){
G(55,19);puts("Quantia: ");               
G(55,20);scanf("%d",&quantia);
if(rs>=quantia){sua+=quantia;rs-=quantia;}               
               }
tecla='a'; clrscr(); continue;
        }
//if(x>4 && x<8 && y==19 && tecla==32){tela=9;fase=9;tecla='a';continue;}
if(aprendeu==14){delay(1500);
clrscr();G(18,19);printf("%c:",1);delay(1500);                 
G(20,20);puts("e");T;G(21,20);puts("s");T;
G(22,20);puts("t");T;G(23,20);puts("a");T;
G(24,20);puts(" eh");T;G(27,20);puts(".");T;
G(29,20);puts(".");T;G(30,20);puts(".");T;
G(20,21);puts("A ");T;G(22,21);puts("P");T;
G(23,21);puts("i");T;G(24,21);puts("r");T;                 
G(25,21);puts("a");T;G(26,21);puts("m");T;
G(27,21);puts("i");T;G(28,21);puts("d");T;
G(29,21);puts("e ");T;G(20,22);puts("L");T;
G(21,22);puts("e");T;G(22,22);puts("n");T;
G(23,22);puts("d");T;G(24,22);puts("a");T;
G(25,22);puts("r");T;G(26,22);puts("i");T;
G(27,22);puts("a");T;G(28,22);puts("!");T; W;
getch();aprendeu++;continue;
                 }

if(antefase!=12)antefase=12;
break; // fim tela 12

case 13: //tela 13 vila tela vila
if(antefase==12){x=19;y=20;tecla='a';}
if(antefase==112){x=52;y=20;tecla='a';}
if(antefase==122){x=41;y=20;}
G(18,19);puts(" ____ ");
G(18,20);puts("|    |");
G(18,21);puts("|   c|");
G(18,22);puts("|    |");
//G(31,18);printf("    %c  ",245);
if(aprendeu<23){G(35,15);puts("\xCF"); }
if(x==34 && y==16 && (tecla=='m' || tecla=='M') && aprendeu>20){ // parangaricu
aprendeu++;continue;                 }
G(32,19);puts("==================");
G(33,20);puts("||\\_/| |   |   |");
G(33,21);puts("|||_|| |  c|   |");
G(33,22);puts("||/ \\| |   |   |");
G(51,19);puts("| 71 |");
G(51,20);puts("|    |");
G(51,21);puts("|   c|");
G(51,22);puts("|    |");
//G(7,19);puts(" ___");
G(7,20);printf("\xDC\xB0\xB0\xDC");
G(7,21);printf("\xB0\xB0\xB8\xB0");
G(7,22);printf("\xDB\xB0\xB0\xDB");
G(1,23);
puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
 
if(antefase!=13)antefase=13;
break; // fim tela 12 fimvila

case 14: //tela 14 teste do pulo diagonal pra ganhar uma graninhazinha...
if(antefase==8){y=20;tecla='a';}
G(7,19);puts(" _____");
G(7,20);puts("|     |");
G(7,21);puts("|    c|");
G(7,22);puts("|     |");
G(1,23);
puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
G(40,22);puts("W");G(40,21);puts("W");
if(antefase!=14)antefase=14;
break;

case 15: // tela 15 returninicio
if(antefase==1){x=12;y=16;}
if(antefase==121){x=34;y=16;}
if(antefase==5){x=47;y=8;}
G(11,15);puts(" _____ ");
G(11,16);puts("|     |");
G(11,17);puts("|    c|");
G(11,18);puts("|     |");
G(11,19);puts("=======");
G(59,18);puts("[=]");
G(59,19);puts(" | ");
G(59,20);puts("====    ====");
G(61,21);  puts("||\\/\\/||");
G(61,22);  puts("||    ||");
G(1,23);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
G(31,14);puts(" _____________");
G(31,15);puts("| _____       |");
G(31,16);puts("||     |      |");
G(31,17);puts("||    c|      |");
G(31,18);puts("||     |      |");
G(21,19);puts("===================================");
  G(45,7); puts(" ____ ");
  G(45,8); puts("|    |");
  G(45,9); puts("|   c|");
  G(45,10);puts("|    |");
G(42,11);puts("============");
if(x>56 && x<63 && y==17 && forma<3 && tecla==32){
G(53,13);puts("Cuidado!!!");
G(53,14);puts("Piranhas mutantes na lagoa!");
G(x+1,y);puts("\x1");
G(x,y+1);puts("/#\\");
G(x,y+2);puts("/ \\");
G(66,19);puts("&");delay(200);G(66,19);puts(" ");
G(66,18);puts("&");delay(200);G(66,18);puts(" ");
G(65,17);puts("&");delay(200);G(65,17);puts(" ");
G(65,16);puts("&");delay(200);G(65,16);puts(" ");
G(64,15);puts("&");delay(200);G(64,15);puts(" ");
G(63,16);puts("&");delay(200);G(63,16);puts(" ");
G(63,18);puts("&");delay(200);G(63,18);puts(" ");     
G(53,13);puts("          ");
G(53,14);puts("                           ");
        }
if(x>62 && x<65 && y>19){morreu=1;continue;}
antefase=15;
break;

 case 16 : //  casa do lliam 
          break;
 case 17 : // mundo espectral tela 17 fase 17
if(fasespectral==0)fasespectral=antefase;
for(int i=23;i>6;i-=4){
G(1,i);
puts("=======================================================================");
                       }
if(tecla=='j' || tecla=='j'){fase=fasespectral; tela=fasespectral;clrscr();
                             antefase=tela;fasespectral=0;continue;}
antefase=17;
                        
           break;
 case 18 : // lugar que só aranha pode ir liga fase 1 lugar que pega mosca
if(antefase==1){x=5;y=20;}
gotoxy(1,23);
puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
G(1,7);puts("                                         ");
gotoxy(4,19);puts("######");
gotoxy(4,20);puts("######");
gotoxy(4,21);puts("######");
gotoxy(4,22);puts("######");
if(mosca==0){G(50,9);puts("    .");}
G(50,11);puts("======="); 
if(x>51 && x<55 && y==8 && tecla==32 && mosca==0){
G(1,7);puts("\x1 : ISSO EH UMA MOSCA!!!");        
        }
if(x>51 && x<55 && y==8 && (tecla=='p' || tecla=='P')&& mosca == 0 ){
G(1,7);puts("\x1 : PEGUEI A MOSCA COM O POTE!!!");        
ZERAPOTE mosca=1;
           }
antefase=18;
           break;
case 19 :  // LORD VOLDMORT tela final tela 19
if(antefase==2){x=69;y=22;}
if(x==70 && y==22 && tecla==32 && forma==7){
fase=2;clrscr(); continue;                  }
gotoxy(1,23);
puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
G(69,20);puts(" _ ");
G(69,21);puts("/_\\");
G(69,22);puts("[ ]");
antefase=19; 
if(forma==7 && y==22 && x>69){tecla='a'; fase=2; continue;}
            break;
 /// telas a fazer fases a fazer telas disponiveis fases disponiveis
 case 20 : break;
 case 21 : break;
 case 22 : break;
 case 23 : break;
 case 24 : break;
 case 25 : break;
 case 26 : break;
 case 27 : break;
 case 28 : break;
 case 29 : break;
 case 30 : break;
 case 31 : break;
 case 32 : break;
 case 33 : break;
 case 34 : break;
 case 35 : break;
 case 36 : break;
 case 37 : break;
 case 38 : break;
 case 39 : break;
 case 40 : break;
 case 41 : break;
 case 42 : break;
 case 43 : break;
 case 44 : break;
 case 45 : break;
 case 46 : break;
 case 47 : break;
 case 48 : break;
 case 49 : break;
 case 121: // casa da TATI tela 121
if(antefase==15){x=48; y=16;}
G(17,7); puts("                                  ");
G(17,8); puts("                                  ");
G(17,9); puts("                                  ");
G(17,10);puts("                                  ");
gotoxy(46,15);puts(" ______ ");
gotoxy(46,16);puts("|      |");
gotoxy(46,17);puts("|     c|");
gotoxy(46,18);puts("|      |");
gotoxy(5,19);puts("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH");
G(20,16);printf(" %c\x1' ",21);
G(20,17);puts(" /T\\");
G(20,18);puts(" / \\");
if(conhecimento<21){ // se conhecimento < 13
G(35,16);printf(" %c\x1' ",21);
G(35,17);puts(" /L\\");
G(35,18);puts(" / \\");
if(x>32 && x<38 && tecla==32){ // caso fale com CRISLAINE
G(17,7);puts("CRISLAINE: Ola!!! Como vai? "); G(17,7);getche(); tecla='a'; continue;
                              } // caso fale com CRISLAINE                    

if(x>18 && x<24 && tecla==32){    // se fala com TATI aprendeu < 13
if(aprendeu<30){G(17,7);puts("TATI: Ola!!! Como vai? ");}
G(20,16);printf(" %c\x1' ",21);
G(20,17);puts(" /T\\"); delay(500);
G(20,16);printf(" \\\x1' ");
G(20,17);puts("  T\\"); delay(500);
G(20,16);printf(" %c\x1' ",21);
G(20,17);puts(" /T\\"); delay(500);
G(20,16);printf(" \\\x1' ");
G(20,17);puts("  T\\"); delay(500);
G(17,7);getche(); tecla='a'; 
G(20,16);printf(" %c\x1' ",21);
G(20,17);puts(" /T\\"); 
                                } // fecha se fala com TATI aprendeu < 13
                    } // fim se conhecimento < 13
else if(conhecimento<99){ // SE CONHECIMENTO >= 13 && SE CONHECIMENTO < 99
     if(x>18 && x<24 && tecla==32){    // se fala com TATI aprendeu > 18
     if(conhecimento>20 && conhecimento<26 && rand()%5<3){
     G(17,7);puts("TATI: NOSSA... queria  ");
     G(17,8);puts("tanto escutar um cd diferente ");
     G(17,9);printf("hj... vc tem um cd de m%csica",163);                                          
     G(17,10);puts("legal com vc? (s/n)");
     G(17,10);tecla=getche();G(17,10);puts(" ");
     G(17,7); puts("                                  ");
     G(17,8); puts("                                  ");
     G(17,9); puts("                                      ");
     G(17,10);puts("                                    ");
     if(tecla=='s' && conhecimento==25){ // fim conhecimento==25
G(17,7); puts("TATI: Nossa que legal, pra mim?         ");delay(2000);
G(17,8); printf("\x1: Nao pra minha vov%c!         ",162);delay(1000);
G(17,9); puts("TATI: Bobo!! Mas muito obrigada!  ");delay(1000);
G(17,10);puts("     vou te dar uma corda em troca.");delay(1000);
getche();
aprendeu=26;clrscr();continue;         } // fim se conhecimento ==25
                                 } // fim se if(x>18 && x<24 && tecla==32)
     else { 
     G(17,7);puts("SOCORROOOOOOOOOOO!!!  ");
     G(17,8);puts("Um tal de Voldmort veio aqui e ");
     G(17,9);puts("Sequestrou a CRISLAINE!!! Salve-a!!!");                                          
            }  // fim else (SOCORRROOOOOOOOOO)
                                   }  // fim se fala com TATI
     } // fim se aprendeu >= 13 && conhecimento < 99
else {
     G(17,7);puts("...");
     }
/*G(x,y);  puts(" \x1 ");
if(forma==1){G(x,y+1);puts("/#\\");}
else {G(x,y+1);puts("/H\\");}
G(x,y+2); puts("/ \\");
while(!kbhit()){//20,16);puts(" '\x1' ");delay(20);//if(kbhit())break;
                G(20,16);puts("'\x1'  ");delay(200);//if(kbhit())break;
                //20,16);puts(" '\x1' ");delay(20);//if(kbhit())break;
                G(20,16);puts("  '\x1'");delay(200);//if(kbhit())break;
                 }
G(x,y);  puts(" \x1 ");
if(forma==1){G(x,y+1);puts("/#\\");}
else {G(x,y+1);puts("/H\\");}
G(x,y+2); puts("/ \\");*/
antefase=121;
    break;
 case 122: // tela 122 YAYA MURILO E youri
if(antefase==13){x=48; y=16;}
G(17,7); puts("                                         ");
G(17,8); puts("                                         ");
G(17,9); puts("                                         ");
G(17,10);puts("                                         ");
gotoxy(46,15);puts(" ______ ");
gotoxy(46,16);puts("|      |");
gotoxy(46,17);puts("|     c|");
gotoxy(46,18);puts("|      |");
gotoxy(5,19);puts("YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY");
G(7,15);puts("   ");
if(rand()%2){G(7+rand()%2,15);puts("Z ");}
G(7,16);puts(" z");
G(7,17);puts(" \x1");
G(7,18);puts("W###W");
G(22,17);puts("_\x1_,");G(25,17);puts(",_\x1_");
G(22,18);puts("_M_");   G(25,18);puts("=_B_");
if(x<11 && tecla==32){G(17,7);puts("SEU MADRUGA: -ZZZZZZZ...");   }
if(tecla==32 && x>19 && x<29){ // se fala com youri e murilo
if(conhecimento>20 && conhecimento <25 && rand()%5<3){
G(17,7);puts("ro: Nossa, eu to com tanta vontade de ");
G(17,8);puts("comer um biscoito, vc tem um biscoito pra ");
G(17,9);puts("me dar? (s/n)");
G(27,9);tecla=getche();
if(conhecimento==24 && tecla=='s'){
G(17,7);puts("Muito obrigado!!!!!!!!!!!!!!!!!!!!!!!!!!!   ");
G(17,8);puts("Tome este CD que eu achei esses dias        ");
G(17,9);puts("Eh de uma banda chamada powerguido          ");
G(17,9);getche();
G(17,7);puts("                                            ");
G(17,8);puts("                                            ");
G(17,9);puts("                                            ");
G(17,7);puts("VC GANHOU UM CD !!!!!!!!!!!!!!!!!!!!!!! ");
//G(17,8);puts("Tome este CD pra que eu achei esses dias  ");
//G(17,9);puts("Eh de uma banda chamada powerguido       ");
aprendeu++;tecla='a';
                    
                    }
else {
G(17,7);puts("                                          ");
G(17,8);puts("                                          ");
G(17,9);puts("             ");
G(17,7);puts("Okay mas se achar um pacote de biscoito ");
G(17,8);puts("Lembra dos amigos ein!");
G(17,8);getche();
tecla='a';continue;     
     }                     
                                        }
else {
G(17,7);puts("ro: Estamos jogando truco!!!");delay(1200);
G(17,8);puts("youri : Seis marreco!!!! Seis!!!!!!!!!!");delay(500);
     }

                         	} // fim se fala com youri e murilo
//G(25,17);puts(",_\x1_");
//G(25,18);puts(" _B_");
    antefase=122;
	break; // fim tela 122 yaya murilo youri
 case 123: // tela 123
	break;
 case 124: // tela 124
	break;
 case 125: // tela 125
	break;
 case 126: // tela 126
	break;
 case 127: // tela 127
	break;
 case 128: // tela 128
	break;
 case 129:break;
 case 130:break;
 case 131:break;
 case 132:break;
 case 133:break;
 case 134:break;
 case 135:break;
 case 136:break;
 case 137:break;




//CASAS  casas CASAS 
/////////////////////////////////////////
case 110: // hotel hub tela 110
if(forma!=1)if(forma==2);else forma=1;
if(antefase==6){x=8;y=20;tecla='a';}
if(antefase==120){x=10;y=8;tecla='a';}
if(antefase==121){x=59;y=12;tecla='a';}
if(antefase==122){x=44;y=12;tecla='a';}
if(antefase==123){x=49;y=16;tecla='a';}
if(antefase==124){x=36;y=16;tecla='a';}
if(antefase==125){x=16;y=16;tecla='a';}
if(antefase==126){x=49;y=20;tecla='a';}
G(46,20);puts("| A1  |");G(46,21);puts("|    c|");G(46,22);puts("|     |");
G(46,16);puts("| B1  |");G(46,17);puts("|    c|");G(46,18);puts("|     |");
G(33,16);puts("| B2  |");G(33,17);puts("|    c|");G(33,18);puts("|     |");
G(13,16);puts("| B3  |");G(13,17);puts("|    c|");G(13,18);puts("|     |");
G(56,12);puts("| C1  |");G(56,13);puts("|    c|");G(56,14);puts("|     |");
G(41,12);puts("| C2  |");G(41,13);puts("|    c|");G(41,14);puts("|     |");
G(8,8);puts("| D1 |");G(8,9);puts("|   c|");G(8,10);puts("|    |");   
G(33,20);puts("| TV  |");G(33,21);puts("|     |");G(33,22);puts("|     |");
gotoxy(2,23);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
gotoxy(2,19);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
gotoxy(2,15);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
gotoxy(2,11);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
gotoxy(2,7);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWW");
G(28,8);puts("W");G(28,9);puts("W");G(28,10);puts("W");
G(20,22);puts("|      |");G(20,21);puts("|      |");G(20,20);puts("|      |");
G(20,18);puts("|      |");G(20,17);puts("|      |");G(20,16);puts("|      |");
G(20,14);puts("|      |");G(20,13);puts("|      |");G(20,12);puts("|      |");
G(20,10);puts("|      |");G(20,9);puts("|      |");G(20,8);puts("|      |");
G(6,20); puts("|       |");G(6,21);puts("|      c|"); G(6,22);puts("|       |"); 
if(x>20 && x<25 && tecla==32){
if(andars>2)y=y+4;else y=y-4;
andars=(andars+1)%6;}
antefase=110;
if(x>8 && x<11 && y==8 && chave>0 && tecla==32){
tela=120;fase=120;continue;       
       }
break; // break; hotel hub (dentro)

//telas dentro do hotel 120 a 127
case 120://quarto D1
if(antefase==110){x=35;y=20;tecla='a';}
gotoxy(5,23);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
G(33,19);puts("|     |");G(33,20);puts("|     |");
G(33,21);puts("|    c|");G(33,22);puts("|     |");
G(42,20);puts("  \x1  \x1");
G(42,21);puts(" /C==A\\");
G(42,22);puts(" / \\/ \\");
G(16,21);puts("|__");
G(16,22);puts(" X ");
if(cabelo==0){G(22,22);puts(","); }
if(x<22 && x>19 && tecla==32 && cabelo==0){cabelo=1;continue;}
if(x>40 && x<51 && tecla==32){
G(20,8); puts("CARECA e ALESSANDRA :");
G(20,9); puts("... ... ... ...");
G(20,10);puts(" SMACK... SMACK...");        
G(20,10);getche();
G(20,8); puts("                            ");
G(20,9); puts("               ");
G(20,10);puts("                  ");        
        }
antefase=120;
break;

case 112: //tela 112 bruxa do 71 dona clotilde
if(antefase==13){x=35;y=20;tecla='a';}
gotoxy(5,23);puts("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
G(33,19);puts("|     |");G(33,20);puts("|     |");
G(33,21);puts("|    c|");G(33,22);puts("|     |");
if(aprendeu<19){G(10,20); puts("  \x1_ U _\x1");}
if(aprendeu<19){G(10,21);puts(" /#-----#\\"); }
if(aprendeu<19){G(10,22);puts(" / \\   / \\");}
G(50,21);puts("=");
G(49,22);puts("|\xEE|");
if(x>46 && x<52 && tecla==32){
G(35,9); puts("Diario da Dona Clotilde");
G(35,10);puts("Eu e o Harry Potter estamos planejando");
G(35,11);puts("uma maneira de combater \"VC SABE QUEM\"");        
G(35,11);getche();
G(35,9); puts("                       ");
G(35,10);puts("                                      ");
G(35,11);puts("                                      ");        
        }
if(x>8 && x<20 && tecla==32){
if(aprendeu<19 && cabelo==0){
G(10,8); puts("POCAO POLI-SUCO");
G(10,9); puts("Dona Clotilde e Harry Potter");
G(10,10);puts("-Esta faltando algum ingredinte!!!");
G(10,11);puts("-????????????????????????????????");
getche(); clrscr(); tecla='a'; continue;  }
if(aprendeu==18 && cabelo!=0){
G(10,8); puts("POCAO POLI-SUCO");
G(10,9); puts("Dona Clotilde e Harry Potter");
G(10,10);puts("-Uhn....uhn......!!");delay(1000);puts("uhn...");
G(10,11);puts("Harry:\"Eh claro falta o fio de cabelo!!!\"");
G(10,12);printf("Voc%c pode nos doar este fio de cabelo?(s/n)",136);
tecla=getche(); if(tecla=='s' || tecla=='S'){aprendeu++; clrscr(); continue;}
                else { clrscr(); continue; }
                }

       
       }
if(aprendeu==20 && cabelo==2){
G(10,8);printf("\x1: U%c!!! Eles desapareceram!!!\n\t\t?????",130);
G(10,8);getch(); printf("\b"); cabelo=0; 
G(10,8);printf("                                             ");                             
                             }
antefase=112;
break;

case 111: // sala de video tela 111
gotoxy(5,23);puts("VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV");
gotoxy(6,19);puts(".   .");
gotoxy(6,20);puts(" \\_/ ");
gotoxy(6,21);puts(" |_|  =");
gotoxy(6,22);puts("||||||||");
G(33,20);puts("|SAIDA|");G(33,21);puts("|     |");G(33,22);puts("|     |");
if(x<10 && tecla==32){//se ve tv
comentv=conhecimento;
if(conhecimento<5)comentv=1;
if(conhecimento==0)comentv=0;
if(randomico==5)comentv=0;
switch(conhecimento){
     case 0: clrscr();
     G(10,9);puts("PALMEIRAS 7 x 0 CORINTHIANS ");delay(2000);W;
     tecla='a';continue;
     break;     
     case 1:clrscr();
     G(10,9); puts("Diretamente do JORNAL NACIONAL");
     G(10,10);puts("A Gissele ");delay(2000);
     G(10,11);puts("Esta desaparecida, e...");delay(2000);
     G(10,12);puts("Seu Irmao (KEVIN) esta muito preocupado...");delay(2000);
     G(10,13);puts("KEVIN: Sniff...");delay(2000);
     G(10,14);puts("Sniff...");delay(2000);tecla='a';continue;break;
     break;
     case 2:  
     case 3:
     case 4:clrscr();
     G(10,9); puts("Um rapaz chamado Kevin Mitinick");
     G(10,10);puts("esta procurando seus 2 diarios ");delay(2000);
     G(10,11);puts("Mesmo sendo ele um CRIMINOSO     ");delay(2000);
     G(10,12);puts("Essas foram as suas palavras durante ");delay(2000);
     G(10,13);puts("entrevista: ");
     G(10,14);puts("-Sniff...Sniff");delay(2000);tecla='a';continue;break;
     break;  

     case 99:     clrscr();
     G(10,10);puts("Um adolescente de 18 anos...");delay(1000);
     G(10,11);puts("tornou-se o segundo homem mais rico do mundo");delay(2000);
     G(10,12);  PR("Seu nome %c William Ribeiro",130 );delay(1000);
     G(10,13);puts("De alguma maneira Este jovem demonstrou sua inteligencia");delay(2000); 
     G(10,14);puts("Desenvolvendo uma formula que cria numeros primos...");delay(2000);
     G(10,15);puts("Esta sendo procurado pela NSA e Agencias secretas");delay(2000);
     G(10,16);puts("Enquanto faz um misterioso acordo com a NASA");delay(2000);
     G(10,17);puts("Ninguem sabe onde ele esta!!!");delay(2000);
     G(10,18);puts("Voce sabe?????"); delay(3500);
     clrscr();
     G(10,10);puts("   /////////////");
     G(10,11);puts(" _| ___    ___ |_");
     G(10,12);puts("(9|( o )||( o )|P)");
     G(10,13);puts(" (|     ==     |) ");
     G(10,14);  PR("  |    %c%c%c%c    |",200,205,205,188);delay(5000);
G(10,15);  PR(" Se o encontrar, estamos dando uma recompensa de");
G(10,16);puts("R$ 1000000,00  P/ quem trazer aqui no estudio 1 autografo dele");
delay(5000);delay(4000);tecla='a';continue;
     default:
             if(rand()%4==1 || aprendeu < 13){
             clrscr();
     G(10,10);puts("O Lord V...");delay(1000);
     G(10,11);puts("Bem, AQUELE-QUE-NAO-DEVE-SER-MENCIONADO");delay(2000);
     G(10,12);puts("Esta aterrorizando a todos....");delay(1000);
     G(10,13);puts("Vejam este video amador....");delay(2000); 
             for (int i2=0;i2<10;i2++){clrscr();
             G(20-i2,15);printf("    %c",30);
             G(20-i2,16);printf("    %c",153);
             G(20-i2,17);printf("__//V__,,",93,93);
    G(20-i2,18);printf("%c%c%c%c%c%c%c%c%c",238,238,238,238,238,238,238,94,94);
             for (int i=10;i<14;i++){
G(10,i);puts("                                                         ");}
if(i2==0){G(10,10);puts("Eu quero a pedra filosofal...");delay(1000);
G(10,11);puts("Tragam-me, ou eu continuarei a destruir!!!");delay(2000);
G(10,12);puts("Td e todos nao estam seguros enquanto eu sobreviver");delay(1000);
G(10,13);puts("Esta eh a nova profecia!!!!");delay(2000); 
G(10,14);puts("HAHAHAHAHAHAHA HAHAHAHAHAHA");getche();}break;}
tecla='a';continue;}
else {
            
     clrscr();
     G(10,10);puts("Uma garota chamada CRISLAINE...");delay(1000);
     G(10,11);puts("Foi sequestrada, e deduzem");delay(2000);
     G(10,12);puts("Que o crime foi executado por ");delay(1000);
     G(10,13);printf("fa%canha de um criminoso bruxo!",135);delay(2000); 
     
     G(10,14);printf("Caso encontrar algo suspeito"); delay(1000);
     G(10,15);printf("DISK den\xA3ncia : 0923-0924 "); delay(1000);
     getche(); tecla='a'; clrscr(); continue;
              
     }
tecla='a'; break;

             
                          }
}//fimse ve tv
antefase=111;
break;

case 101://HOUSE MINEIRO tela 101
if(forma!=1)if(forma==2);else forma=1;
if(aprendeu==0)aprendeu=1;
gotoxy(46,15);puts(" ______ ");
gotoxy(46,16);puts("|      |");
gotoxy(46,17);puts("|     c|");
gotoxy(46,18);puts("|      |");
gotoxy(5,19);puts("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH");
gotoxy(6,14);  puts("       __    _ ");
gotoxy(6,15);  puts("       |_\\  |-|");
gotoxy(6,16);printf("  %c    _X___|=|",1);
gotoxy(6,17);  puts(" |C|=_|___||XX|");
gotoxy(6,18);  puts(" | |  | |  |  |");
if(conhecimento>5){G(3,16);printf(" %c",1);
G(2,17);  puts("/|N|\\");
G(3,18);  puts(" -\\\\");}
gotoxy(56,16); puts("  |HH|");
gotoxy(56,17);puts(" /####\\");
if(tecla==32 && x<25){
if(conhecimento<6 && forma==1){
gotoxy(1,7);puts("KEVIN MITNICK: \n");
puts("PEDI UM LIVRO A IRM\xC7 DO CARA ... ELA FOI COMPRAR FAZ\n");
puts("10 HORAS E ATE AGORA NAO VOLTOU\n");
puts("ESTOU MUITO PREOCUPADO...KD A GISSELE??????");}//fechacon<6
if(conhecimento==6){
gotoxy(1,7);puts("GISSELLE :\n");
puts("Estamos agradecidos por vc ter me salvado!!!\n");
printf("Como prova de nossa gratid%co...\n",198);
puts("Lhe daremos este presente\n");
getche();livro=1;aprendeu++;clrscr();continue;
}
if(conhecimento>7){gotoxy(1,7);puts("KEVIN MITNICK : Obrigado por salvar a Gissele!\n");}
}//caso fale com mineiro || Gissele

// MEXENDO NO PC

if(x==53 && tecla==32){
gotoxy(1,7); mostra=0;
puts("COMPUTADOR CONECTADO AO DO BANCO\n");
printf("1.Valda R$: %d\t2.Andr%c R$:%d\n",harry,130,dimas);
printf("3.BOSSR$:%d\t4.SUA R$:%d\n5.Ro R$: %d",cabrini,sua,hp);
delay(200);gotoxy(46,11);
puts("USUARIO");gotoxy(45,12);tecla=getche();
/*scanf("%d",&usuario);*/ usuario=tecla-48;
if((usuario<6 && usuario>0) ){
if(usuario!=4){
gotoxy(55,11);puts("senha : ");
gotoxy(55,12);scanf("%s",&pc);}}
else if(usuario !=4){gotoxy(55,11);puts("NAO EXISTE USUARIO SOLICITADO!");}
certo=certsenha(pc,usuario,fase); //printf("certo = %d",certo);getche();
switch(usuario){
case 1:{if(certo==1){if(demilton>0){sua=sua+demilton;demilton=0;}
gotoxy(31,13);printf("VC DESVIOU O DINHEIRO DA CONTA VALDA");} //fim usuario1
}break;
case 2:{if(certo==1){if(dimas>0){sua=sua+dimas;dimas=0;}
gotoxy(31,13);puts("VC DESVIOU O DINHEITO DA CONTA do Andre");}
//if(certo==0){gotoxy(31,13);printf("SENHA INCORRETA",certo); certo=2;} //fim usuario1
}break;
case 3:{if(certo==1){if(cabrini>0){sua=sua+cabrini;cabrini=0;}
gotoxy(31,13);puts("VC DESVIOU O DINHEIRO DA CONTA BOSS");}}break;
case 4:gotoxy(40,7);puts("Deseja depositar/tirar(d/t)?");
gotoxy(70,7);pegasua=getche();G(70,7);puts(" ");
if(pegasua=='t'){
gotoxy(45,9);puts("digite a quantia : ");gotoxy(45,10);scanf("%d",&quantia);
if(quantia <= sua){rs=rs+quantia;sua=sua-quantia;}}//fim se pegasua=t
if(pegasua=='d'){
gotoxy(45,9);puts("digite a quantia : ");gotoxy(45,10);scanf("%d",&quantia);
if(quantia <= rs){sua=quantia+sua;rs=rs-quantia;}}//fim se pegasua=d
gotoxy(31,13);puts("                                         "); break;
case 5:{if(certo==1){if(hp>0){sua=sua+hp;hp=0;}
gotoxy(31,13);puts("VC DESVIOU TODO O DINHEIRO DA CONTA DA Ro");}break;}break;
 break;    

           
}//fim switch usuario
if(certo==0 && usuario <6 && usuario >0 && usuario !=4)
{gotoxy(31,13);printf("SENHA INCORRETA",certo); certo=2;}
}//fim ve PC
}// fim se mexe no pc (espaco no local do PC)

}



//fim teste desenho de tela
//fim teste desenho de tela
//fim teste desenho de tela
//fim teste desenho de tela
//fim teste desenho de tela
//fim teste desenho de tela
//fim teste desenho de tela
//fim teste desenho de tela
//fim teste desenho de tela


//imprime o boneco
       randomico=rand()%10;
       int rosto=1;
       for (int i=9;i>0;i--){
                       bonec[i]=muda(forma,i,0);
                       }bonec[0]=32;
       gotoxy(x+1,y); if(forma<3) printf("%c",bonec[1]);
       gotoxy(x,y+1);if(forma<6) printf("%c%c%c",bonec[3],bonec[4],bonec[5]);
       gotoxy(x,y+2);if(forma<9 && forma !=7) printf("%c%c%c",bonec[6],bonec[7],bonec[8]);
       if(forma==6 && y<20 && tecla=='e'){G(x,y+3);puts("   ");}
       if(forma==7){x=x+1;y=y+2;gotoxy(x,y);
                    printf("%c",bonec[7]);}
       
       if(maxpower>1){
       gotoxy(60,1);printf("                     ");
       gotoxy(60,1);printf("x=%d,y=%d,fase=%d",x,y,fase);
       G(60,2);printf("ant=%d\t fesct=%d",antefase,fasespectral);
       // G(70,2);printf("%d",pgpiramide);
//       G(70,2);printf("%d",forma);
       gotoxy(60,3);printf("cont=%d liv=%d r=%d",contlivro,livro,randomico);}
       gotoxy(60,4);printf("bolsa=%d",bolsa);
             if(subir==0)b=cai(x,y,fase,forma); 
             if(y==pgpiramide-3 && fase==12 && x>37 && x<43){b=1;}
             if(y==9 && x-pgindio>-3 && x-pgindio<3 && fase==8){b=1;}
             if(b==0){
//             gotoxy(x,y-1);puts("   ");
             gotoxy(x,y);puts(" ");
             gotoxy(x+2,y);puts(" ");
             y++;delay(100);
             gotoxy(x,y-1);puts("   ");
             gotoxy(x,y);puts(" ");
             gotoxy(x+2,y);puts(" ");
             
             continue;}
             
                /*while(b==0){
                y++;    gotoxy(x,y-1);printf("  ");
         
       gotoxy(x,y);  if(forma<3) printf("%c%c%c\n",bonec[0],bonec[1],bonec[2]);
       gotoxy(x,y+1);if(forma<6) printf("%c%c%c\n",bonec[3],bonec[4],bonec[5]);
       gotoxy(x,y+2);if(forma<9 && forma !=7)printf("%c%c%c\n",bonec[6],bonec[7],bonec[8]); 
       gotoxy(x+1,y+2);if(forma==7)printf("%c",bonec[7]);
       delay(100);
       b=cai(x,y,fase,forma);
                }*/
       if(subir==0) 
       b=cai(x,y,fase,forma);
       gotoxy(75,1);

//le a tecla pressionada teclando movimentacao movimento move anda pula etc
   if(x>37 && x<43 && fase==12 && y==pgpiramide-3){ b=1;}
   if(y==9 && x-pgindio>-3 && x-pgindio<3 && fase==8){b=1;}
       if(x>22 && x<26 && subir==1 && fase ==1 && y==9 && aprendeu>30){
       if(y==9 && x==23){x--;delay(100);}
       if(x<23){subir=0;continue;}
       if(x==23){subir=0;continue;}
       x--;delay(100);subir=1;continue;}
       if(subir==1){delay(100); y--;continue;}
       if(jogoteste==1){ //zuando o jogo
       if(tecla==68){ 
system("cls");system("dir | more"); tecla='a'; 
getch();continue;
                    }
       if(tecla==87){
system("cls"); for(int i=0; i<250;i++)system("echo. william , vc eh foda!");
tecla='a'; continue;
                     }
       if(tecla==84 || tecla==44){
system("cls");system("date/t");system("time/t"); getche();
tecla='a';continue;
                                 }
       } // zuando o jogo
       //le a tecla teclando direcionando o boneco
       if(kbhit() && forma==6){
                  G(x+1,y+3);puts(" ");
                  }
       if(tecla!=1)tecla = getch();
       if(tecla==13 && goku==2)tecla=1;
       direcional=(int)tecla;
       if(direcional==-32){ direcional=getch();
       if(direcional==75)tecla='s';
       if(direcional==77)tecla='f';
       if(direcional==80)tecla='d';
       if(direcional==72)tecla='e';
       if(direcional==73 && fase==12 && pgpiramide>12){
       if(x>37 && x<43 && y==pgpiramide-3)y-=1;
       gotoxy(40,pgpiramide);puts("   ");
       pgpiramide--;     }
       if(direcional==81 && fase==12 && pgpiramide<21){
       //if(x==40 && y==pgpiramide-3)y+=2;
       gotoxy(40,pgpiramide);puts("   ");
       pgpiramide++;}
       if(maxpower>0){
       if(direcional==133)system("color 07");
       if(direcional==134)system("color 02");
       if(direcional==82) system("color 0d");}}//fimifmaxpower fimdirecional
       if(direcional==0){direcional=getch();
       if(direcional==61)system("color 04");
       if(direcional==62)system("color 08");
       if(direcional==64)system("color 09");
       if(direcional==65)system("color 0a");
       if(direcional==66)system("color 0b");
       if(direcional==67)system("color 0c");
       if(direcional==68)system("color 0e"); }
       if(tecla==1){  clrscr();
       andars=0;
       //poder goku
       gotoxy(1,2);puts("Qual a tela:\n");
       puts("a. ksa do BOSS");
       puts("b. casa do Kevin Mitnick");
       puts("c. fora da Loja");
       puts("d. ANDRE");
       puts("e. posto e hotel");
       puts("f. Hogwarts");
       if(aprendeu>13)puts("g. las vegas");                
       if(aprendeu>14)puts("h. Cidade das piramides");
       if(aprendeu>15)puts("i. vila");
       gotoxy(x+1,y+1);tecla=getche();
       if(tecla>64)william=tecla-64;
       if(tecla>96)william=tecla-96;
      // if(tecla>48 && tecla<58)william=tecla-48;
       switch(william){
       case 1: fase=3;x=28;y=11;break;
       case 2: fase=1;x=34;y=16;break;
       case 3: fase=2;x=25;y=16;break;
       case 4: fase=5;x=13;y=20;break;
       case 5: fase=6;x=58;y=20;break;
       case 6: fase=7;x=22;y=20;break;
//       case 7: fase=12;x=22;y=20;break;
       case 7: if(aprendeu<14)break;
               fase=9;x=36;y=20;break;
       case 8: if(aprendeu<15)break;
               fase=12; x=6;y=19;
               tecla='a'; break;        
       case 9:if(aprendeu<16)break;
               fase=13; x=19;y=20;break;
       default : break;
  //     case 8: fase=9;x=22;y=20;break;
       }//fimswitch
       
       tela=fase;
       clrscr();    continue;}
       if(tecla<65 && maxpower>0){
       switch(tecla){
       case 2:speed=0;break;
       //case 3:speed=1;break;
       case 4:speed=2;break;
       case 5:speed=3;break;
       case 6:speed=4;break;
       case 16: speed=speed;break;
       default: break;
       }}
              
       if(tecla==32 && fase==1 && x==25 && y==16 && aprendeu>30){
       subir=1;continue;
       } 
       if(tecla=='e' && x==18 && y==20 && fase==9){
       continue;              
                     }
       if(maxpower>0)if(tecla=='q')mostra=(mostra+1)%2;
       c=topo(x,y,fase,forma); muro=parede(x,y,fase,forma);
       if(forma==1 || (forma==2 && tecla==32)){
       switch(tecla){
                 case 's':if(muro!=0){ x--;
                                  for (int i=0; i<3;i++){                                                
                                  gotoxy(x, y+i); printf("    ");
                                  }
                                  gotoxy(x, y);   printf("_%c \n",rosto);
                                  gotoxy(x, y+1); printf(" %c\\\n",barrig);
                                  gotoxy(x, y+2); printf("< \\" );break;}break;
                 case 'f':if(muro!=1){
                                  x++;
                                  for (int i=0; i<3;i++){
                                      
                                  gotoxy(x-1, y+i); printf("    ");}
                                  gotoxy(x, y);   printf(" %c_\n",rosto);
                                  gotoxy(x, y+1); printf("/%c\n",barrig);
                                  gotoxy(x, y+2); printf("/ >");break;}break;
                 case 'e':        
                      if(c==1){for(int i=0;i<3+jump;i++){
                                  for (int i=0; i<4;i++){
                                  gotoxy(x, y+i);   printf("   ");}
                                  y--;
                                  gotoxy(x, y);   printf("\\%c/\n",rosto);
                                  gotoxy(x, y+1); printf("_%c_\n",barrig);
                                  gotoxy(x, y+2); printf("   ");delay(2*tempo);}
                                   }
                           break;
                 case 'w':        if(diagonal==0)break;
                                  muro=paredep(x,y,fase,forma);
                                  if(c==1 && muro!=0){ // || parede(x-4,y,fase,forma)
                                  for(int i=0;i<4;i++){
                                   for (int i=0; i<3;i++){
                                  gotoxy(x, y+i);   printf("   ");}
                                  y--;x--;
                                  
                                  gotoxy(x, y);   printf("\\%c\n",rosto);
                                  gotoxy(x, y+1); printf(" %c\\ \n",barrig);
                                  gotoxy(x, y+2); printf(" \\\\");delay(2*tempo);}
                                  }   break;        
                     case 'r':    if(diagonal==0)break;
                                  muro=paredep(x,y,fase,forma);
                                  if(c==1 && muro!=1) { // || parede(x+4;y,fase
//                                  if(aprendeu==0)aprendeu=1;
                                  for(int i=0;i<4;i++){
                                   for (int i=0; i<3;i++){
                                  gotoxy(x, y+i);   printf("   ");}
                                  y--;x++;
                                  gotoxy(x, y);   printf(" %c/\n",rosto);
                                  gotoxy(x, y+1); printf("/%c \n",barrig);
                                  gotoxy(x, y+2); printf("//");delay(2*tempo);}
                                }
                           break;                           
                 case'd':{        gotoxy(x, y);   printf("   ");
                                  gotoxy(x, y+1); printf("\\%c/",rosto);
                                  gotoxy(x,y+2);  printf("_%c_",barrig);
                                  delay(700);}break;
                 case 32: {         tela=mudafase(x,y,fase);}  break;
                                 
                 } }
                 
               // MOVIMENTO COM OUTRAS FORMAS
               else{
                    if(forma==7){
                    switch(tecla){ 
                    case 's': if(muro!=0)x=x-2;
                              y=y-2;break;
                    case 'f': if(muro!=1);   y=y-2;
                              if(muro==1)x--;
                              break;
                    case 'e': if(c==1){y=y-2;x--;}
                              if(c==0)if(x<10)x++;
                              break;
                    /*case 'd': if(b==1 && c==1)y++;
                              if(c==0)if(x<10)x=x+3;else y=y-3;*/
                    default: y=y-2;x--;break;
                    for (int i=9;i>0;i--){
                       bonec[i]=muda(forma,i,0);
                       }bonec[0]=32;
       gotoxy(x,y);  if(forma<3) printf("%c%c%c",bonec[0],bonec[1],bonec[2]);
       gotoxy(x,y+1);if(forma<6) printf("%c%c%c",bonec[3],bonec[4],bonec[5]);
       gotoxy(x,y+2);if(forma<9) printf("%c%c%c",bonec[6],bonec[7],bonec[8]);
       //gotoxy(x-1,y+2);if(forma==7)printf("%c",bonec[7]);            
                    
                    }//fimswitch
                    }//fim se forma=7
                    if(forma==6){
                    c=topo(x,y,fase,forma);
                    if(subir==0)b=cai(x,y,fase,forma);
                    //gotoxy(x-2,y-1);puts("   ");
                    //if(tecla=='e'){if(c==1)y=y-2;}
                    //if(tecla=='d'){if(b==0)y++;}
                    switch(tecla){
                     case 'e': if(c==1){y--;}
                              //if(c==0) y--;
                              break;
                   // case 'd': if(b==0)y++;break;
                              //if(c==0)if(x<10)x=x+3;else y=y-3;
                    }
                    }
                    
                    if(forma!=7 && forma !=6){
                    muro=parede(x,y,fase,forma);
                    switch(tecla){ 
                    case 's': if(muro!=0)x--; 
                              break;
                    case 'f': if(muro!=1)x++; 
                              break;
                    default: break;
                    for (int i=9;i>0;i--){
                       bonec[i]=muda(forma,i,0);
                       }bonec[0]=32;
       gotoxy(x,y);  if(forma<3) printf("%c%c%c",bonec[0],bonec[1],bonec[2]);
       gotoxy(x,y+1);puts("   ");if(forma<6)printf("%c%c%c",bonec[3],bonec[4],bonec[5]);
       gotoxy(x,y+2);puts("   ");if(forma<9) {
       printf("%c%c%c",bonec[6],bonec[7],bonec[8]);}
                    
                    } //fim else
                    }   }    
               // FIM MOVIMENTO COM FORMAS > 0
               if(tela!=121)delay(tempo);
               G(x-1,y);  puts("      ");
               G(x-1,y+1);puts("      ");
               G(x-1,y+2);puts("      ");
               //x,y+3);puts("   ");
               while(b==0){y++;
                
             for (int i=0;i<9;i++){
                       bonec[i]=muda(forma,i,0);
                             }
       gotoxy(x,y); if(forma<3)printf("%c%c%c",bonec[0],bonec[1],bonec[2]);
       gotoxy(x,y+1);if(forma<6)printf("%c%c%c",bonec[3],bonec[4],bonec[5]);
       gotoxy(x,y+2);if(forma<9) printf("%c%c%c",bonec[6],bonec[7],bonec[8]);
       //gotoxy(x-1,y+2);if(forma==7)printf("%c",bonec[7]);
       if(forma==6){
         for(int i=7;i<23;i++){ G(x+1,i);puts(" ");}                    
                    }
       delay(tempo);
       if(subir==0)b=cai(x,y,fase,forma);
             
                            }
      // clrscr();
                
                
       }//fim while(tecla != 27)
       clrscr();
       password=qualpassword(conhecimento);
       for (int i=18;i<25;i++){
       gotoxy(i,15);
       printf(" VOLTE SEMPRE, PASSWORD: %d ",password);delay(100); }
       gotoxy(18,11);
       puts("Doun Doun..."); 
       puts("criticas e sujestoes: wil_dum@hotmail.com\n \t\t\tWilliam\n\n");
if(vida==0){
gotoxy(2,2);puts(" ___    __              __ ");         
gotoxy(2,3);puts("|  _   |__|   /\\  /\\   |_   ");
gotoxy(2,4);puts("|___|  |  |  /  \\/  \\  |__ ");delay(100);
gotoxy(2,5);puts(" __         __  __");
gotoxy(2,6);puts("|  |  \\  / |_  |__)");
gotoxy(2,7);puts("|__|   \\/  |__ |  \\");
getche();G(1,8);puts("  ");
G(1,9);
puts("\nDica: \" O Teclado \x82 muito mais do que o jogo pode mostrar!");
printf("\n########################################################\n");
printf("### TODOS OS DIREITOS RESERVADOS A JEREMIAS 9:23,24 ######\n");
printf("###########################################################\n");
            }
       getche();
      delay(3500);
printf("\n########################################################\n");
printf("### TODOS OS DIREITOS RESERVADOS A JEREMIAS 9:23,24 ######\n");
printf(" ### que reza: ############################################\n");
printf("# Assim disse Jeova: \"Nao se gloria o sabio da sua sabedoria,\n");
printf(" nem se glorie o poderoso da sua potencia. Nao se glorie \n");
printf(" o rico das suas riquezas.\" \n");
printf(" \"Mas quem se jacta, jacte-se da seguinte coisa: de \n");
printf(" ter perspicacia e de ter conhecimento de mim, que eu sou Jeova,\n");
printf(" Aquele que usa de benevolencia, de juizo e de justica na terra; \n");
printf(" porque eh destas coisas que me agrado\" , eh a pronunciacao \n");
printf(" de Jeova. ");
printf("###########################################################\n");
delay(50);
}
/* pedir ajuda F1
if(direcional==0){
       direcional=getch();
       if(direcional==59){
       clrscr();
       gotoxy(10,10);puts("AJUDA");getche();}
       }
 RENOMEAR F2
if(direcional==0){
       direcional=getch();
       if(direcional==60){
       clrscr();
       gotoxy(10,10);puts("RENOMEAR");getche();}
       }
 SAIR fechar
if(direcional==0){
       direcional=getch();
       if(direcional==107){
       clrscr();
       gotoxy(10,10);puts("SAIR");getche();}
       }
ATUALIZAR
if(direcional==0){
       direcional=getch();
       if(direcional==63){
       clrscr();
       gotoxy(10,10);puts("ATUALIZAR");getche();}
       }
HOME
if(direciona==-32){
        direcional=getch();
       if(direcional==71){
       clrscr();
       gotoxy(10,10);puts("HOME");getche();}
       }
END
 if(direciona==-32){
        direcional=getch();
       if(direcional==79){
       clrscr();
       gotoxy(10,10);puts("HOME");getche();}
       }
DELETE
if(direciona==-32){
        direcional=getch();
       if(direcional==83){
       clrscr();
       gotoxy(10,10);puts("DELETE");getche();}
       }
INSERT
if(direciona==-32){
        direcional=getch();
       if(direcional==82){
       clrscr();
       gotoxy(10,10);puts("INSERT");getche();}
       }
PAGE UP
if(direciona==-32){
        direcional=getch();
       if(direcional==73){
       clrscr();
       gotoxy(10,10);puts("PGUP");getche();}
       }
  PAGE DOWN
if(direciona==-32){
        direcional=getch();
       if(direcional==81){
       clrscr();
       gotoxy(10,10);puts("PGDOWN");getche();}
       }  
  FECHA PARENTESES
if(tecla==41){
       clrscr();
       gotoxy(10,10);puts("fecha parenteses");getche();}
  IGUAL
  MAIOR
  MENOS
  +
  -
  
   LOCALIZAR CTRL+F   
if(tecla==6)


            SE A VIDA DELE FOR 7 (GATO)
            SONIFEROS  
       */
