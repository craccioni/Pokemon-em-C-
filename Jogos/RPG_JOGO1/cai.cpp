#include<stdio.h>
int cai(int x,int y,int fase,int forma){
    int b=1;
    switch(fase){
    case 1:
    if(x>65){  if(y>0){if(y<=10 || (y>11 && y<20)) b=0;}}
    if(x<=65 && y<16)b=0;
    if(x>14 && x<24 && y==9){b=1;}
    if(x>39 && y==11 && x<55)b=1;
    break;
    case 2:
         if(y<16)b=0;
         if(x>32 && x<36 && y<20)b=0;
         if(x>55 && x<58 && y<20)b=0;
         if(x>7 && x<24 && y==8)b=1;
         break;
    case 3:
         if(y<20)b=0;
         if(y==7 && x>20 && x<35)b=1;
         //if(y==8 && x>1 && x<19){b=1;break;}
         if(y==11 && x>17 && x<49)b=1;
         if(y==12 && x>5 && x<13)b=1;
         if(y==8 && x<19)b=1;
         if(y==15 && x>66)b=1;
         if(y==15 && x>28 && x<44)b=1;
         if(y==16 && x>2 && x<10)b=1;
         break;
    case 4:{
         if(x>1 && x<71 && y<8)b=0;break;
         if(x>1 && x<71 && y<12)b=0;break;
         if(x>1 && x<71 && y<16)b=0;break;
         if(x>1 && x<71 && y<20)b=0;break;
         }break;
    case 5:{
         if(x>7 && x<18 && y<12){if(y==11){b=1;break;}
         else b=1;   }
         if(x>1 && x<71 && y<20)b=0;
         if(x>38 && x<54 && y==16)b=11;
         }break;
    case 6: if(y<20)b=0; 
            if(x>44 && x<64 && y==11)b=1;
            if(x>43 && x<65 && y==14)b=1;
            if(x>15 && x<32 && y==7)b=1;
           break;
    
    case 7: if(y<20)b=0;
            if(x<12 && y<19)b=0;
            if(x<12 &&  y==18)b=1;
            break;
    case 8: if(y<20)b=0;
            if(x>3 && x<19 && y==15)b=1;
            if(x>14 && x<30 && y==13)b=1;
            if(x>29 && x<55 && y==11)b=1;
            if(x<19 && y==7)b=1;
            break;
    case 9: if(x>66 && y<16) b=0; 
            if(y<20)b=0;
            if(y==15 && x>66)b=1;
            if(x>32 && x<40 && y==15)b=1;
            if(x<59 && y==11)b=1;
            if(x<12 && y<11)b=0;
            if(x<12 && y==10)b=1;
            break;
    case 10:if(y<20)b=0;
            if(x<12 && y<19)b=0;
            if(x<12 &&  y==18)b=1;
            if(x>11 && x<50 && y==16)b=1;
            break;          
    case 11:    if(x>1 && x<71 && y<20)b=0;
                if(x>38 && x<54 && y==16)b=1;
                if(x>1 && x<8 && y==16)b=1;
                if(x>1 && x<8 && y==8)b=1;
                if(x>7 && x<15 && y==12)b=1;
                if(x>14 && x<22 && y==8)b=1;
                break;
    case 12: if(y<20)b=0;
             if(y==14 && x<12 && x>1)b=1;
             if(y==19 && x<12)b=1;
             if(y==10 && x>40 && x<65)b=1;  
             break;
    case 13: if(y<20)b=0;
             if(x<50 && x>29 && y==16)b=1;
             break;
    case 14:
    if(y<20)b=0;
    if(x<41 && x>37 && y==18)b=1;
            break;
    case 15:
         if(y<20)b=0;
         if(x>8 && x<18 && y==16)b=1;
         if(x>18 && x<56 && y==16)b=1;
         if(x>56 && x<63 && y==17)b=1;
         if(x>64 && y==17)b=1; 
         if(x>28 && x<46 && y==12)b=1;
         if(x<54 && y==8 && x>39)b=1;
         break;
    case 17: b=0;  // mundo espectral
             if(y%4==0)b=1;
             break;
    case 18:  b=0;
              if(y==20)b=1;
              if(x>47 && x<57 && y==8)b=1;
//              if(y==16)b=0;
              break;
    case 102: b=1;if(y<16)b=0;       break;
    case 110: break;
    case 122:
    case 121: {b=1;if(y<16)b=0;}
              break;
    case 200: if(y<16)b=0;break;
    case 300: break;
    default: if(y<20)b=0;break;
    }
        
    if(fase==102 || fase==101 || fase == 121){b=1;if(y<16)b=0;}
    if(forma==7)b=1;
    if(forma==6){if(y<22)b=1;else b=0;}
    return(b);    
    }

