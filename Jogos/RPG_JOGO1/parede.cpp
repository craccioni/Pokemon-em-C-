#include <stdio.h>
int parede(int x,int y, int fase,int forma){
    int b=2;
    switch(fase){case 1: {if(x<3)b=0;if(x>69)b=1;   }
                         break;
                 case 2: {
                         if(x>37 && x<40 && (y==20 || y<20))b=1;
                         if(x<44 && x>42 && (y==20 || y<20))b=0;
                         if(x<3)b=0;if(x>69)b=1;   }
                         break; 
                 case 3:{
                      if(x<3)b=0;if(x>69)b=1;
                      }break;
                 case 4:{ //dentro do shopping
                      if(x<7)b=0;if(x>60)b=1;
                      if(x>24 && y==8)b=1;
                                          }break;
                 case 5:{
                      if(x<3)b=0;if(x>69)b=1;
                      if(forma!=8 && x<36 && x>29 && y>9)b=0;
                       if(forma!=8 && x>28 && x<35 && y>9)b=1;
                                          
                      }break;
                 case 6:{
                      if(x<3)b=0;if(x>69)b=1;
                      }break;
                 case 7:{
                      if(x<3)b=0;if(x>69)b=1;
                      if(forma==2)break;
                      if(y<12)break;
                      if(x<19 && x>10){b=0;break;}
                      if(x>7 && x<16){b=1;break;}
                      
                      }break;
                 case 8: 
                       if(x<3)b=0;if(x>48)b=1;
                       break;
                 case 9: if(x<3)b=0; if(x>69)b=1;
                 if(x==18 && y==20)b=0;
                 break;
                 case 10:  { if(x<3)b=0;
                             if(x>69)b=1;
                             if(x>54 && x<56)b=1;
                             if(x<62 && x>57)b=0; }  
                         break;
                 case 11: if(x<3)b=0;if(x>69)b=1;
                          if(x==23)b=0;
                          break;
                 case 14: if(x<3)b=0;if(x>69)b=1;
                          if(x==37 && y==20)b=1;
                          if(x==41 && y==20)b=0;
                          break;
                 case 15:
                      if(x<3)b=0;if(x>69)b=1;
                      if(x==58 && y>19)b=1;
                      if(forma==7 && x==59 && y>19)b=1;                      
                         break;
              case 101: {if(x<24)b=0;if(x>51)b=1; } 
                         break;
              case 102: {if(x<19)b=0; if(x>52)b=1;}break;
              case 110: if(x<3)b=0;if(x>68)b=1; // hotel
                        if(x<3)b=0;if(x>69)b=1;
                        if(x>24 && y==8)b=1; 
                        break;
              case 111: {if(x<6)b=0; if(x>52)b=1;}break;
              case 112: if(x<6)b=0; if(x>52)b=1;break;
              case 120: if(x<6)b=0; if(x>52)b=1;break;
              case 122:
              case 121: {if(x<7)b=0; if(x>52)b=1;}break;
              case 200:  {if(x<24)b=0;if(x>51)b=1; } break; //ksa do ronney
              case 300: if(x>68)b=1;if(x<6)b=0; //las vegas
                        if(x>24 && y==8)b=1;
                        if(x>24 && y==8)b=1;
                        break;
              default:  if(x<3)b=0;if(x>69)b=1;
              break;
            
     }
     if(forma==7){switch(fase){
                               case 15:
                                        if(x==59 && y>19)b=1;
                                        break;                                    
                               default:{if(x<5)b=0;if(x>69)b=1;}
                                        if(fase==2 && x>38 && x<40 && y<20)b=1;
                                        break;
                                        }
                   } // forma de mosca
     if(forma==2) {switch(fase){
                               case 101: if(x>53)b=1;
                                         if(x==52)b=2;
                               case 102: if(x>53)b=1;
                                         if(x==52)b=2;
                               }}
     if(forma==8){switch(fase){
                               case 8: b=2;
                                       if(x>69)b=1;             
                                       if(x<3)b=0;
                               
                               }
                  } // forma de invisível
    return (b);
    }
