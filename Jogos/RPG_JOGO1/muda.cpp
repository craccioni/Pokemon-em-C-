#include<stdio.h>
#include<stdlib.h>
    int muda(int u, int d, int e){
     char b; int c=34;
     char fig[15]; 
     switch(u){
             case 1:{
      if (e==0){ // pessoa normal reta
      if (d==0)d=2;if(d==1)c=1; if(d==2)c=32; if(d==3)c=47; if (d==4)c=35; 
      if(d==5)c=92; if(d==6)c=47; if(d==7)c=32; if(d==8)c=92;}
     
     
      if (e==1){ //pessoa normal direita
      if (d==0)c=95; if(d==1)c=1; if(d==2)c=32; if(d==3)c=32; if (d==4)c=35; 
      if(d==5)c=92; if(d==6)c=47; if(d==7)c=32; if(d==8)c=62;}
                  
      if (e==2){ // pessoa normal esquerda
      if (d==0)c=32; if(d==1)c=1; if(d==2)c=95; if(d==3)c=47; if (d==4)c=35; 
      if(d==5)c=32; if(d==6)c=47; if(d==7)c=32; if(d==8)c=62;}}
              break;
              case 2:{ //pessoa H reta
if (e==0) { if (d==0)c=32; if(d==1)c=1; if(d==2)c=32; if(d==3)c=47; if (d==4)c=72; 
      if(d==5)c=92; if(d==6)c=47; if(d==7)c=32; if(d==8)c=92;}
          
if (e==1) {if (d==0)c=95; if(d==1)c=1; if(d==2)c=32; if(d==3)c=32; if (d==4)c=72; 
      if(d==5)c=92; if(d==6)c=60; if(d==7)c=32; if(d==8)c=92;}
if (e==2) {if (d==0)c=95; if(d==1)c=1; if(d==2)c=32; if(d==3)c=32; if (d==4)c=72; 
      if(d==5)c=92; if(d==6)c=60; if(d==7)c=32; if(d==8)c=92;}}
              break;
              case 3: //policial P ´´
if (e==0 || e==1 || e==2) { if (d==0)c=95; if(d==1)c=95; if(d==2)c=95; if(d==3)c=239; if (d==4)c=239; 
              if(d==5)c=32; if(d==6)c=44; if(d==7)c=44; if(d==8)c=44;}break;
  /*       if (e==1) {if (d==0)c=95; if(d==1)c=1; if(d==2)c=32; if(d==3)c=32; if (d==4)c=80; 
              if(d==5)c=92; if(d==6)c=60; if(d==7)c=32; if(d==8)c=92;}
         if (e==2) {if (d==0)c=95; if(d==1)c=1; if(d==2)c=32; if(d==3)c=32; if (d==4)c=80; 
              if(d==5)c=92; if(d==6)c=60; if(d==7)c=32; if(d==8)c=92;}break;*/
              case 6:  //aranha
              if(e==0) if(d==7)c=42;if(d==6)c=32;if(d==8)c=32;
                       break;
              case 7: //mosca 
              if(e==0) if(d==7)c=46;
              //if(d==6)c=32;if(d==8)c=32;
              break;
              case 8://invisibilidade ___
              if(d==6)c=32;if(d==7)c=32;if(d==8)c=32;
              break;
      
              }
     b=c;
     return(b); }
     
            
     
