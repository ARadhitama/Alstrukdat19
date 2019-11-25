#include "./ADT/kamus.h"

Queue MoveBidak(Bidak B, MATRIKS *M){
    int i, n;
    Queue Q;
    Bidak TempBidak;
    boolean found;
    int pos;

    CreateEmptyQueue(&Q, 100);
    TempBidak=B;


    switch(*B.code) {
        case 'R' : 
        case 'r' : {
           if (B.Position.X == 0) {
               found = false;
               pos = B.Position.X;
               while (!found && (pos<=7)) {
                   pos++;
                   if (&Elmt(*M,pos,B.Position.Y) != ' ') {
                       Elmt(*M,pos,B.Position.Y).Position.X = pos;
                       AddQueue(&Q, Elmt(*M,pos,B.Position.Y));
                   } else {
                       found = true;
                   }
               }
           } else {
               found = false;
               pos = B.Position.X;
               while (!found && (pos <=7)){
                   pos++;
                   if (&Elmt(*M,pos,B.Position.Y) != ' ') {
                       Elmt(*M,pos,B.Position.Y).Position.X = pos;
                       AddQueue(&Q, Elmt(*M,pos,B.Position.Y));
                   } else {
                       found = true;
                   }
               }
               found = false;
               pos = B.Position.X;
               while (!found && (pos >=0)){
                   pos--;
                   if (&Elmt(*M,pos,B.Position.Y) != ' ') {
                       Elmt(*M,pos,B.Position.Y).Position.X = pos;
                       AddQueue(&Q, Elmt(*M,pos,B.Position.Y));
                   } else {
                       found = true;
                   }
           }
           if (B.Position.Y == 0) {
               found = false;
               pos = B.Position.Y;
               while (!found && (pos<=7)) {
                   pos++;
                   if (&Elmt(*M,B.Position.X,pos) != ' ') {
                       Elmt(*M,B.Position.X,pos).Position.Y = pos;
                       AddQueue(&Q, Elmt(*M,B.Position.X,pos));
                   } else {
                       found = true;
                   }
               }
           } else {
               found = false;
               pos = B.Position.Y;
               while (!found && (pos <=7)){
                   pos++;
                   if (&Elmt(*M,B.Position.X,pos) != ' ') {
                       Elmt(*M,B.Position.X,pos).Position.Y = pos;
                       AddQueue(&Q, Elmt(*M,B.Position.X,pos));
                   } else {
                       found = true;
                   }
               }
               found = false;
               pos = B.Position.Y;
               while (!found && (pos >=0)){
                   pos--;
                   if (&Elmt(*M,B.Position.X,pos) != ' ') {
                       Elmt(*M,B.Position.X,pos).Position.Y = pos;
                       AddQueue(&Q, Elmt(*M,B.Position.X,pos));
                   } else {
                       found = true;
                   }
           }
            
           
            break;
        }
        case 'H' : 
        case 'h' : {
           if (B.Position.X = 
            break;
        }
        case 'B' : 
        case 'b' : {  
           if (B.Position.X=0) {
               
           }
           break; 
        }
        case 'Q' : 
        case 'q' : {
            int x=1 , y=1 , a , b ;

            // Horizontal //

            while( B.code[v1][&h1-y] == ' ' )
            {
                if( (h1-y) == -1 ) {
                    break ;        
                } else {
                AddQueue(&Q, B.code[v1][&h1-y]) ;
                y++ ;
                }
            }

            y = 1 ;

            while( B.code[v1][&h1+y] == ' ' )
            {
                if( (h1+y) == 8 ) {
                    break ;
                }
                AddQueue(&Q, B.code[v1][&h1+y]) ;
                y++ ;
            }

            // vertical //

            x = 1 ;

            while( B.code[v1-x][&h1] == ' ' )
            {
                if( (v1-x) == -1 ) {
                    break ;
                } else {
                AddQueue(&Q, B.code[v1-x][&h1]) ;
                x++ ;
                }
            }

            x = 1 ;

            while( B.code[v1+x][&h1] == ' ' ) {
                if( (v1+x) == 8 ) {
                    break ;
                } else {
                AddQueue(&Q, B.code[v1+x][&h1]) ;
                x++ ;
                }
            }

            // Diagonal  //

            a = 1;
            b = 1 ;

            while( B.code[v1-a][&h1+b] == ' ' )
            {
                if( (v1-a) == -1 || (h1+b) == 8 ) {
                    break ;
                } else {
                AddQueue(&Q, B.code[v1-a][&h1+b]) ;
                a++ ;
                b++ ;
                }
            }


            a = 1;
            b = 1 ;

            while( B.code[v1+a][&h1-b] == ' ' )
            {
                if( (v1+a) == 8 || (h1-b) == -1 ) {
                    break ;
                } else {
                AddQueue(&Q, B.code[v1+a][&h1-b]) ;
                a++ ;
                b++ ;
                }
            }

            a = 1;
            b = 1 ;


            while( B.code[v1+a][&h1+b] == ' ' )
            {
                if( (v1+a) == 8 || (h1+b) == 8 ) {
                    break ;
                }
                AddQueue(&Q, B.code[v1+a][&h1+b]) ;
                a++ ;
                b++ ;
            }

            a = 1 ;
            b = 1 ;

            while( B.code[v1-a][&h1-b] == ' ' )
            {
                if( (v1-a) == -1 || (h1-b) == -1 ) {
                    break ;
                } else {
                AddQueue(&Q, B.code[v1-a][&h1-b]) ;
                a++ ;
                b++ ;
                }
            }
            break;
        }
        case 'K' : 
        case 'k' : {
            if(B.code[v1][&h1+1] = ' ') {
                AddQueue(&Q, B.code[v1][&h1+1]) ;
            }
            if(B.code[v1][&h1-1] = ' ') {
                AddQueue(&Q, B.code[v1][&h1-1]) ;
            }
            if(B.code[v1+1][&h1] = ' ') {
                AddQueue(&Q, B.code[v1+1][&h1]) ;
            }
            if(B.code[v1-1][&h1] = ' ') {
                AddQueue(&Q, B.code[v1-1][&h1]) ;
            }
            if(B.code[v1+1][&h1+1] = ' ') {
                AddQueue(&Q, B.code[v1+1][&h1+1]) ;
            }
            if(B.code[v1-1][&h1-1] = ' ') {
                AddQueue(&Q, B.code[v1-2][&h1-1]) ;
            }
            if(B.code[v1-1][&h1+1] = ' ') {
                AddQueue(&Q, B.code[v1-1][&h1+1]) ;
            }
            if(B.code[v1+1][&h1-1] = ' ') {
                AddQueue(&Q, B.code[v1+1][&h1-1]) ;
            } 
            break;  
        }
        case 'P' : {
            if (B.Position.X=7) {
                if (B.code[v1-1][&h1] = ' ') {
                    AddQueue(&Q, B.code[v1-1][&h1]) ;
                } else if (B.code[v1-2][&h1] = ' ') {
                    AddQueue(&Q, B.code[v1-2][&h1]) ;
                } 
            } else {
                if (B.code[v1-1][&h1] = ' ' ) {
                    AddQueue(&Q, B.code[v1-1][&h1]) ;
                }
            }
            break;
        }
        case 'p' : {
            if (B.Position.X=2) {
                if (B.code[v1+1][&h1] = ' ') {
                    AddQueue(&Q, B.code[v1+1][&h1]) ;
                } else if (B.code[v1+2][&h1] = ' ') {
                    AddQueue(&Q, B.code[v1+2][&h1]) ;
                } 
            } else {
                if (B.code[v1+1][&h1] = ' ' ) {
                    AddQueue(&Q, B.code[v1+1][&h1]) ;
                }
            }
            break;
        }
    }
}


Queue cekGerak (MATRIKS *M, List *L) {
    int i, n, h1, v1;
    addressQ P;
    Queue Q;
    Bidak B;

    CreateEmptyQueue(&Q, 100);

    while (info(P)!=NilQ) {

    switch(*B.code) {
        case 'R' : 
        case 'r' : {
          
            n=v1;
            
            while( B.code[v1][&n-1] == ' ' )
            {
            if( n == 0 ) { break ; }
            AddQueue(&Q, B.code[v1][&h1]) ;
            n-- ;
            }

            n=v1 ;

            while( B.code[v1][&n+1] == ' '  && (n+1) <= 7 )
            {
                AddQueue(&Q, B.code[v1][&h1]) ;
                ++n ;
            }

            n = h1 ;

            while( B.code[n-1][&h1] == ' ' && n > -1 )
            {
                AddQueue(&Q, B.code[v1][&h1]) ;
                --n ;
            }

            n = h1 ;

            while( (B.code[n+1][&h1] == ' ') && ( (n) <= 7 ) )
            {
                AddQueue(&Q, B.code[v1][&h1]) ;
                ++n ;
            }    
            break;
        }
        case 'H' : 
        case 'h' : {
            if(B.code[v1+2][&h1+1] = ' ') {
                if((v1<8) && (h1<8)) { 
                    AddQueue(&Q, B.code[v1][&h1]) ;
                }
            }
            if( B.code[v1+2][&h1-1] == ' ' ) {
                if((v1<8) && (h1>-1)) { 
                    AddQueue(&Q, B.code[v1][&h1]) ;
                }
            }

            if( B.code[v1+1][&h1+2] == ' ' ) {  
                if((v1<8) && (h1<8)) { 
                    AddQueue(&Q, B.code[v1][&h1]) ;
                }
            }
            if( B.code[v1-1][&h1+2] == ' ' ) {  
                if((v1>-1) && (h1<8)) { 
                    AddQueue(&Q, B.code[v1][&h1]) ;
                } 
            }

            if (B.code[v1-2][&h1-1]== ' ' ) {
                if((v1>-1) && (h1>-1)) { 
                    AddQueue(&Q, B.code[v1][&h1]) ;
                }
            }

            if( B.code[v1-2][&h1+1] == ' ' )  {
                if((v1>-1) && (h1<8)) { 
                    AddQueue(&Q, B.code[v1][&h1]) ;
                }
            }

            if( B.code[h1+1][&v1-2] == ' ' ) {
                if((h1<8) && (v1>-1)) { 
                    AddQueue(&Q, B.code[v1][&h1]) ;
                }
            }

            if( B.code[v1-1][&h1-2] == ' ' )
            {   
                if((v1>-1) && (h1>-1)) { 
                    AddQueue(&Q, B.code[v1][&h1]) ;
                }
        }
            break;
        }
        case 'B' : 
        case 'b' : {
         i = 1;
            n = 1;

            while (B.code[v1-i][&h1+n] = ' ') {
                if( (v1-i) == -1 || (h1+n) == 8 ) {
                    break ;
                } else {
                AddQueue(&Q, B.code[v1][&h1]) ;
                i++ ;
                n++ ;
                }
            } 

            i = 1;
            n = 1;

            while (B.code[v1+i][&h1-n] = ' ') {
                if( (v1+i) == 8 || (h1-n) == -1 ) {
                    break ;
                } else {
                AddQueue(&Q, B.code[v1][&h1]) ;
                i++ ;
                n++ ;
                }
            } 

            i = 1;
            n = 1;

            while (B.code[v1+i][&h1+n] = ' ') {
                if( (v1+i) == 8 || (h1+n) == 8 ) {
                    break ;
                } else {
                AddQueue(&Q, B.code[v1][&h1]) ;
                i++ ;
                n++ ;
                }
            } 

            i = 1;
            n = 1;
            
            while (B.code[v1-i][&h1-n] = ' ') {
                if( (v1-i) == -1 || (h1-n) == -1 ) {
                    break ;
                } else {
                AddQueue(&Q, B.code[v1][&h1]) ;
                i++ ;
                n++ ;
                }
            } 
           break; 
        }
        case 'Q' : 
        case 'q' : {
            int x=1 , y=1 , a , b ;

            // Horizontal //

            while( B.code[v1][&h1-y] == ' ' )
            {
                if( (h1-y) == -1 ) {
                    break ;        
                } else {
                AddQueue(&Q, B.code[v1][&h1]) ;
                y++ ;
                }
            }

            y = 1 ;

            while( B.code[v1][&h1+y] == ' ' )
            {
                if( (h1+y) == 8 ) {
                    break ;
                }
                AddQueue(&Q, B.code[v1][&h1]) ;
                y++ ;
            }

            // vertical //

            x = 1 ;

            while( B.code[v1-x][&h1] == ' ' )
            {
                if( (v1-x) == -1 ) break ;
                AddQueue(&Q, B.code[v1][&h1]) ;
                x++ ;
            }

            x = 1 ;

            while( B.code[v1+x][&h1] == ' ' )
            {
                if( (v1+x) == 8 ) break ;
                AddQueue(&Q, B.code[v1][&h1]) ;
                x++ ;
            }

            // Diagonal  //

            a = 1;
            b = 1;

            while( B.code[v1-a][&h1+b] == ' ' )
            {
                if( (v1-a) == -1 || (h1+b) == 8 ) {
                    break ;
                } else {
                AddQueue(&Q, B.code[v1][&h1]) ;
                a++ ;
                b++ ;
                }
            }


            a = 1;
            b = 1;

            while( B.code[v1+a][&h1-b] == ' ' )
            {
                if( (v1+a) == 8 || (h1-b) == -1 ) {
                    break ;
                } else {
                AddQueue(&Q, B.code[v1][&h1]) ;
                a++ ;
                b++ ;
                }
            }

            a = 1;
            b = 1;


            while( B.code[v1+a][&h1+b] == ' ' )
            {
                if( (v1+a) == 8 || (h1+b) == 8 ) {
                    break ;
                }
                AddQueue(&Q, B.code[v1][&h1]) ;
                a++ ;
                b++ ;
            }

            a = 1 ;
            b = 1 ;

            while( B.code[v1-a][&h1-b] == ' ' )
            {
                if( (v1-a) == -1 || (h1-b) == -1 ) {
                    break ;
                } else {
                AddQueue(&Q, B.code[v1][&h1]) ;
                a++ ;
                b++ ;
                }
            }
            break;
        }
        case 'K' : 
        case 'k' : {
            if(B.code[v1][&h1+1] = ' ') {
                AddQueue(&Q, B.code[v1][&h1]) ;
            }
            if(B.code[v1][&h1-1] = ' ') {
                AddQueue(&Q, B.code[v1][&h1]) ;
            }
            if(B.code[v1+1][&h1] = ' ') {
                AddQueue(&Q, B.code[v1][&h1]) ;
            }
            if(B.code[v1-1][&h1] = ' ') {
                AddQueue(&Q, B.code[v1][&h1]) ;
            }
            if(B.code[v1+1][&h1+1] = ' ') {
                AddQueue(&Q, B.code[v1][&h1]) ;
            }
            if(B.code[v1-1][&h1-1] = ' ') {
                AddQueue(&Q, B.code[v1][&h1]) ;
            }
            if(B.code[v1-1][&h1+1] = ' ') {
                AddQueue(&Q, B.code[v1][&h1]) ;
            }
            if(B.code[v1+1][&h1-1] = ' ') {
                AddQueue(&Q, B.code[v1][&h1]) ;
            } 
            break;  
        }
        case 'P' : {
            if (B.Position.X=7) {
                if (B.code[v1-1][&h1] = ' ') {
                    AddQueue(&Q, B.code[v1][&h1]) ;
                } else if (B.code[v1-2][&h1] = ' ') {
                    AddQueue(&Q, B.code[v1][&h1]) ;
                } 
            } else {
                if (B.code[v1-1][&h1] = ' ') {
                    AddQueue(&Q, B.code[v1][&h1]) ;
                }
            }
            break;
        }
        case 'p' : {
             if (B.Position.X=2) {
                if (B.code[v1+1][&h1] = ' ') {
                    AddQueue(&Q, B.code[v1][&h1]) ;
                } else if (B.code[v1+2][&h1] = ' ') {
                    AddQueue(&Q, B.code[v1][&h1]) ;
                } 
            } else {
                if (B.code[v1+1][&h1] = ' ') {
                    AddQueue(&Q, B.code[v1][&h1]) ;
                }
            }
            break;
        }
    }
    P = next(P);
    }
}

void printBisaGerak(Queue Q) {
    int i, v1, h1;
    Bidak B;

    for(i=1;i<=NBElmtQueue(Q);i++){
        DelQueue(&Q, &B);
        printf(B.code[v1][&h1]);
        AddQueue(&Q, B);
    }
    return 0;
}

void printGerak(Queue Q) {
    int i, v1, h1;
    Bidak B;

    for(i=1;i<=NBElmtQueue(Q);i++){
        DelQueue(&Q, &B);
        printf(B.code[v1][&h1]);
        AddQueue(&Q, B);
    }

    return 0;
}