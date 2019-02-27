#include <stdio.h>
#include <string.h>
//#include "snakef2.cpp"
int coment(int x, int y, int fase, int conhecimento){
    int b=0;
    switch(fase){
     case 1: {
              if(x<5 && y==20)b=10001;
              if(x>59 && y==16)b=1010;
              if(x<26 && x>12 && y==16 )b=1002;
              if(x<4 && y==16)b=1003;
              if(x<54 && x>40 && y==16)b=1004;
              if(((x>64 && y<69)||(x>32 && x<36)) && y==20)b=1005;
              if(y==16 && x>46 && x<51)b=1003;
              if(x==25 && y==16)b=1007;
              }break;
      case 2: {if(x>4 && x<10 && y==20)b=1003;
               if(x>9 && x<24 && y<20)b=1008;
               if(x<5 && y<20)b=1003;
           
               }break;
      case 3: if(x>22 && x<32 && y==11)b=1018;
              break;
      case 5: if(x>24 && x<30)b=1012;break;
      case 7: if(x==18)b=1016;break;
      case 8: if(x>34)b=1014;break;
      case 10: if(x<12)b=1017;break;
      case 12: if(x>38 && x<43)b=1013;break;
      case 15: 
	       if(x<43 && x>31 && y==16)b=1022;
	       if(x>55)b=1023;	
               break;
      case 101: {if(x<25)b=1011;
                if(x>46 && x<51)b=1003;
                if(x>50)b=1015;
                if(x==53)b=1009;
                
                }break;
      case 102: if((x>46 && x<51)|| x==53)b=1011;
                if(x>30 && x<36 && conhecimento>7)b=1019;
                if(x>37 && x<43 && conhecimento>0)b=1020;
                if(x==18)b=1021;
                 break;
      case 121: b=1024;

		break;             
                 }
     
      return(b);
    }
    
 // senha
 
 int certsenha(char pc[20],int usuario,int fase){
            int b=0;int cont=0;
            for(int i=0;i<strlen(pc);i++)
             if(pc[i]<97)pc[i]+=32;
            switch(fase){
            case 101:{ 
                 if(usuario==1){
                 if(pc[0]=='d')cont++;
                 if(pc[1]=='i')cont++;
                 if(pc[2]=='v')cont++;
                 if(pc[3]=='i')cont++;
                 if(pc[4]=='n')cont++;
                 if(pc[5]=='a')cont++;
//                 if(pc[6]=='d')cont++;
//                 if(pc[7]=='o')cont++;
//                 if(pc[8]=='d')cont++;
//                 if(pc[9]=='o')cont++;
                 
                 }
                 if(usuario==2){
                 if(pc[0]=='e')cont++;
                 if(pc[1]=='m')cont++;
                 if(pc[2]=='b')cont++;
                 if(pc[3]=='e')cont++;
                 if(pc[4]=='d')cont++;
                 if(pc[5]=='f')cont++;
                 if(pc[6]=='i')cont++;
                 if(pc[7]=='l')cont++;
                 if(pc[8]=='e')cont++;
                 
                                  }
                 if(usuario==3){
                 if(pc[0]=='b')cont++;
                 if(pc[1]=='u')cont++;                                
                 if(pc[2]=='j')cont++;                                
                 if(pc[3]=='i')cont++;                                
                 if(pc[4]=='g')cont++;                                
                 if(pc[5]=='a')cont++;
                 if(pc[6]=='n')cont++;                                
                 if(pc[7]=='g')cont++;                                
                 if(pc[8]=='a')cont++;                                                                  
//                 if(pc[7]=='@')cont++;                                
                 }
                 if(usuario==5){
                 if(pc[0]=='d')cont++;
                 if(pc[1]=='e')cont++;
                 if(pc[2]=='b')cont++;
                 if(pc[3]=='u')cont++;
                 if(pc[4]=='g')cont++;
//                 if(pc[5]=='n')cont++;
//                 if(pc[6]=='o')cont++;
//                 if(pc[7]=='r')cont++;
//                 if(pc[8]=='i')cont++;
//                 if(pc[9]=='a')cont++;
                 }
                  
                 }break;
                 }
                  if(cont==6 && b==0 && fase==101 && usuario ==1)b=1;
                  if(cont==9 && b==0 && fase==101 && usuario ==2)b=1;
                  if(cont==9 && b==0 && fase==101 && usuario ==3)b=1;
                  if(cont==5 && b==0 && fase==101 && usuario==5)b=1;
                  
                    return (b);
                    }
 int passwordfase(int password){
        int aprendeu=100;
        if(password==200506)aprendeu=1;
        if(password==748901)aprendeu=2;
        if(password==778833)aprendeu=3;
        if(password==151500)aprendeu=4;
        if(password==180990)aprendeu=5;
	if(password==190880)aprendeu=6;
    	if(password==281888)aprendeu=8;
     	if(password==322440)aprendeu=10;
        if(password==123457)aprendeu=12;
        if(password==655360)aprendeu=14;
        if(password==655361)aprendeu=15;
    	if(password==131072)aprendeu=16;
        if(password==262144)aprendeu=18;
        if(password==692413)aprendeu=20;
        if(password==692431)aprendeu=22;
        if(password==121239)aprendeu=24;
        if(password==224871)aprendeu=25;
        if(password==243215)aprendeu=27;
        if(password==111123)aprendeu=31;
        if(password==142640)aprendeu=33;
        if(password==153351)aprendeu=34;
        if(password==101010)aprendeu=41;
        if(password==888889)aprendeu=51;
        if(password==999987)aprendeu=61;
        if(password==561100)aprendeu=71;
        if(password==161086)aprendeu=81;
        if(password==404363)aprendeu=91;
        if(password==120888)aprendeu=99;
        if(password==199990)aprendeu=1000;
        if(password==180687)aprendeu=1001;//niver da angelica 1bbk 4andre
        if(password==593360)aprendeu=1002;
        if(password==910688)aprendeu=1003;//01/6/1988 bbk
        if(password==170100)aprendeu=1004;
        if(password==931089)aprendeu=1005;
        if(password==970200)aprendeu=1006;
        if(password==593361)aprendeu=1007;
        if(password==436339)aprendeu=1008;
        if(password>432100 && password<432200)aprendeu=password-432100;
        return(aprendeu);
        }
 int qualpassword(int conhecimento){
        int password=0;
        if(conhecimento>0) password=200506;
        if(conhecimento>1) password=748901;
        if(conhecimento>2) password=778833;
        if(conhecimento>3) password=151500;
        if(conhecimento>4) password=180990;
        if(conhecimento>5) password=190880;
        if(conhecimento>7) password=281888;
        if(conhecimento>9) password=322440;
        if(conhecimento>11)password=123457;
        if(conhecimento>13)password=655360;
        if(conhecimento>14)password=655361;
        if(conhecimento>15)password=131072;
        if(conhecimento>17)password=262144;
        if(conhecimento>19)password=692413;     
        if(conhecimento>21)password=692431;
	    if(conhecimento>23)password=121239;
     	if(conhecimento>24)password=224871;
        if(conhecimento>26)password=243215;
       	if(conhecimento>29)password=111123;
       	if(conhecimento>31)password=142640;
       	if(conhecimento>33)password=153351;
        if(conhecimento>39)password=101010;
        if(conhecimento>49)password=888889;
        if(conhecimento>59)password=999987;        
        if(conhecimento>69)password=561100;                            
        if(conhecimento>79)password=161086;
        if(conhecimento>89)password=404363;
        if(conhecimento==99)password=120888;                
        
        return(password);
     
     
     }
