#include <stdio.h>
       int mudafase(int x,int y,int fase){
           int b=0;
           switch(fase){
           case 1:{if(x>46 && x<51 && y==16)b=101;
                   if(x<4 && y==16)b=2;   
                   if(x>48 && x<52 && y==20)b=15;
                   if(x>68 && y==11)b=18;            
                }break;
           case 2:{if(x<4 && y==16)b=1;
                   if(x>4 && x<10 && y==20)b=3;
                   if(x>16 && x<20 && y==16)b=4;
                   if(y==18 && x>47 && x<50)b=19;
                   } break;
           case 3:{
                   if(x>4 && x<10 && y==20)b=2;
                   if(x>26 && x<30 && y==11)b=102;
                   if(x>4 && x<8 && y==8)b=5;
                   if(x>39 && y<44 && y==11)b=6;
                   if(x>32 && x<39 && y==20)b=7;
                   if(x>69 && y==15)b=9;
                   } break;
           case 4: if(x>46 && x<50 && y==20)b=2;break;
           case 5: if(x>4 && x<8 && y==20)b=3;
                   if(x>44 && x<51 && y==16)b=11;
                   if(x>11 && x<14 && y==11)b=15;
                   break;
           case 6: if(x>3 && x<8 && y==20)b=3;
                   if(x>19 && x<25 && y==20)b=110;break;
           case 7: if(x>32 && x<39 && y==20)b=3;
                   if(x<8 && x>4 && y==18)b=10;        break;
           case 8: if(x>23 && x<28&& y==20)b=12;
                   if(x>7 && x<11 && y==15)b=14;
                   if(x==3 && y==7 ) b=11;
                   break;
           case 9: if(x>69 && y==15)b=3;
                   if(x>48 && x<52 && y==11)b=300;
                   break;
           case 10: if(x<8 && x>4 && y==18)b=7;
                    if(x>31 && x<36 && y==16)b=200;  break;       
           case 11:if(x>44 && x<51 && y==16)b=5;
                   if(x==18 && y==8)b=8;
                    break;
           case 12:if(x>50 && x<53 && y==10)b=13; break;
           case 13:if(x>18 && x<21 && y==20)b=12; 
                   if(x>51 && x<54 && y==20)b=112;
                   if(x==41 && y==20)b=122;
                   break;
           case 14: if(x>7 && x<11 && y==20)b=8;
                    break;
           case 15: 
                    if(x>8 && x<17 && y==16)b=1;
                    if(x>32 && x<36 && y==16)b=121;
                    if(x>45 && x<48 && y==8)b=5;
                    break;
           case 16: break;
           case 17: break;
           case 18: 
                      if(x>3 && x<7 && y==20)b=1;
                      break;
           case 19: // final
                    if(y==22 && x>69)b=2; 
                    break;
           case 101:{ if(x>46 && x<51 && y==16)b=1;}break;                        
           case 102: if(x>46 && x<51 && y==16)b=3;break;
           case 110: if(x>6 && x<12 && y==20)b=6;
                     if(x>33 && x<37 && y==20)b=111;
                     break;                        
           case 111: if(x>33 && x<37 && y==20)b=110;
                     break;
           case 112: if(x>33 && x<37 && y==20)b=13;
                     break;     
           case 120:if(x<37 && x>33 && y==20)b=110;
                     break;
           case 121: // ksa da thais
	            if(x>46 && x<51 && y==16)b=15;
                    break;
           case 122: if(x>46 && x<51 && y==16)b=13;
                     break;
           case 123:
                    break;
           case 124:
                    break;
           case 125:
                    break;
           case 126:
                    break;
           
           case 200: if(x>31 && x<36 && y==16)b=10;break;
           case 300: if(x>46 && x<50 && y==20)b=9;break;
                      
                      }
           return (b); }
