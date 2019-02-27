#include<stdio.h>
int topo(int x,int y,int fase,int forma){
    int c=1;

    switch(fase){
    case 1:{
    if(x<65){if(y>19 && y<23) c=0;}
    if(x>65 && y<20 && y>14)c=0;
    if(x>14 && x<24)c=0;
    if(x>32 && y>19 && x<36)c=1;} break;
    case 3:{
         if(y<11 && y>0)c=0;
         }break;
    case 4: c=0;break;
    case 10: c=1;break;
    //case 101: c=0;break;
    
    default: if(y<8)c=0; break;
    }//fimswitch
        if(forma==6){
        switch(fase){case 1: if(y<5)c=0; else c=1;//  if(y>19)c=0;
                     if(x>14 && x<24 && y>12 && y<15)c=0;
                     if(((x>1 && x<33)|| (x>37 && x<65)) && y>19)c=0; break;
                     default : if(y<7)c=0;
          
    }//fim switch 
    }//fim forma=6
    if(fase>100)c=0;
    return(c);    
    }
    
