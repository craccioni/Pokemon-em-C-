#include <stdio.h>
int paredep(int x,int y, int fase,int forma){
    int b=2;
    switch(fase){case 1: {if(x<2+4)b=0;if(x>69-4)b=1; 
                          if(x<28 && x>14){b=0;}
                          if(x>9 && x<14){b=1;}
                        }break;
                 case 2: {
                         if(x>36-4 && x<40+4 && (y==20 || y<20))b=1;
                         if(x<44+4 && x>42-4 && (y==20 || y<20))b=0;
                         if(x<2+4)b=0;if(x>69-4)b=1;   }
                         break; 
                 case 5: if(x>24)b=1;
                   if(x<=2+4)b=0;if(x>69-4)b=1;break;
                 case 6: if(x<22 && x>11)b=0;if(x>4 && x<12)b=1;
                         break;
                 case 7: if(x<=21 && x>11)b=0;if(x>4 && x<17)b=1;break;
                case 10:  { if(x<2+4)b=0;if(x>69-4)b=1;
                              }  
                         break;
                case 11: 
                     if(x<7)b=0;if(x>65)b=1;
                     if(x<28 && x>22)b=0;
                     break;
                case 101: {if(x<24+4)b=0;if(x>52-4)b=1; } 
                         break;
                default:  if(x<7)b=0;if(x>65)b=1;
    
    
     }
     if(x<2+4)b=0;if(x>69-4)b=1;
     if(forma==7){switch(fase){
                               default:{if(x<2)b=0;if(x>69)b=1;}break;
                               }}
    return (b);
    }
