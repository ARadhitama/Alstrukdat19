#include "kamus.h"

Queue MoveBidak(Bidak B, MATRIKS *M){
    int i, n, h1, v1;

    CreateEmptyQueue(Q);

    switch(Bidak.code) {
        case 'R' : 
        case 'r' : {
           n=h1;
            
            while( B.code(*M,v1,n-1) == Nil )
            {
            if( n == 0 ) { break ; }
            AddQueue(*Q, B.code(*M,v1,n-1)) ;
            n-- ;
            }

            n=h1 ;

            while( B.code(*M,v1,n+1) == Nil  && (n+1) <= 7 )
            {
                AddQueue(*Q, B.code(*M,v1,n+1)) ;
                ++n ;
            }

            n = h1 ;

            while( B.code(*M,n-1,h1) == Nil && n > -1 )
            {
                AddQueue(*Q, B.code(*M,n-1,h1)) ;
                --n ;
            }

            n = h1 ;

            while( (B.code(*M,n+1,h1) == Nil) && ( (n) <= 7 ) )
            {
                AddQueue(*Q, B.code(*M,n+1,h1)) ;
                ++n ;
            }    
            break;
        }
        case 'H' : 
        case 'h' : {
            if(B.code(*M,v1+2,h1+1) = Nil) {
                if((v1<8) && (h1<8)) { 
                    AddQueue(*Q, B.code(*M,v1+2,h1+1)) ;
                }
            }
            if( B.code(*M,v1+2,h1-1) == Nil ) {
                if((v1<8) && (h1>-1)) { 
                    AddQueue(*Q, B.code(*M,v1+2,h1+1)) ;
                }
            }

            if( B.code(*M,v1+1,h1+2) == Nil ) {  
                if((v1<8) && (h1<8)) { 
                    AddQueue(*Q, B.code(*M,v1+1,h1+2)) ;
                }
            }
            if( B.code(*M,v1-1,h1+2) == Nil ) {  
                if((v1>-1) && (h1<8)) { 
                    AddQueue(*Q, B.code(*M,v1-1,h1+2)) ;
                } 
            }

            if( (B.code*M,v1-2,h1-1)== Nil )
            {
                if((v1>-1) && (h1>-1)) { 
                    AddQueue(*Q, B.code(*M,v1-2,h1-1)) ;
                }
            }

            if( B.code(*M,v1-2,h1+1) == Nil )  {
                if((v1>-1) && (h1<8)) { 
                    AddQueue(*Q, B.code(*M,v1-2,h1+1)) ;
                }
            }

            if( B.code(*M,h1+1,v1-2) == Nil ) {
                if((h1<8) && (v1>-1)) { 
                    AddQueue(*Q, B.code(*M,v1+1,h1-2)) ;
                }
            }

            if( B.code(*M,v1-1,h1-2) == Nil )
            {   
                if((v1>-1) && (h1>-1)) { 
                    AddQueue(*Q, B.code(*M,v1-1,h1-2)) ;
                }
        }
            break;
        }
        case 'B' : 
        case 'b' : {  
            i = 1;
            n = 1;

            while (B.code(*M,v1-i,h1+n) = Nil) {
                if( (v1-i) == -1 || (h1+n) == 8 ) {
                    break ;
                } else {
                AddQueue(*Q, B.code(*M,v1-i,h1+n)) ;
                i++ ;
                n++ ;
                }
            } 

            i = 1;
            n = 1;

            while (B.code(*M,v1+i,h1-n) = Nil) {
                if( (v1+i) == 8 || (h1-n) == -1 ) {
                    break ;
                } else {
                AddQueue(*Q, B.code(*M,v1+i,h1-n)) ;
                i++ ;
                n++ ;
                }
            } 

            i = 1;
            n = 1;

            while (B.code(*M,v1+i,h1+n) = Nil) {
                if( (v1+i) == 8 || (h1+n) == 8 ) {
                    break ;
                } else {
                AddQueue(*Q, B.code(*M,v1+i,h1+n)) ;
                i++ ;
                n++ ;
                }
            } 

            i = 1;
            n = 1;
            
            while (B.code(*M,v1-i,h1-n) = Nil) {
                if( (v1-i) == -1 || (h1-n) == -1 ) {
                    break ;
                } else {
                AddQueue(*Q, B.code(*M,v1-i,h1-n)) ;
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

            while( B.code(*M,v1,h1-y) == Nil )
            {
                if( (h1-y) == -1 ) {
                    break ;        
                } else {
                AddQueue(*Q, B.code(*M,v1,h1-y)) ;
                y++ ;
                }
            }

            y = 1 ;

            while( B.code(*M,v1,h1+y) == Nil )
            {
                if( (h1+y) == 8 ) {
                    break ;
                }
                AddQueue(*Q, B.code(*M,v1,h1+y)) ;
                y++ ;
            }

            // vertical //

            x = 1 ;

            while( B.code(*M,v1-x,h1) == Nil )
            {
                if( (v1-x) == -1 ) break ;
                AddQueue(*Q, B.code(*M,v1-x,h1)) ;
                x++ ;
            }

            x = 1 ;

            while( B.code(*M,v1+x,h1) == Nil )
            {
                if( (v1+x) == 8 ) break ;
                AddQueue(*Q, B.code(*M,v1+x,h1)) ;
                x++ ;
            }

            // Diagonal  //

            a = 1 , b = 1 ;

            while( B.code(*M,v1-a,h1+b) == Nil )
            {
                if( (v1-a) == -1 || (h1+b) == 8 ) {
                    break ;
                } else {
                AddQueue(*Q, B.code(*M,v1-a,h1+b)) ;
                a++ ;
                b++ ;
                }
            }


            a = 1 , b = 1 ;

            while( B.code(*M,v1+a,h1-b) == Nil )
            {
                if( (v1+a) == 8 || (h1-b) == -1 ) {
                    break ;
                } else {
                AddQueue(*Q, B.code(*M,v1+a,h1-b)) ;
                a++ ;
                b++ ;
                }
            }

            a = 1 , b = 1 ;


            while( B(*M,v1+a,h1+b) == Nil )
            {
                if( (v1+a) == 8 || (h1+b) == 8 ) {
                    break ;
                }
                AddQueue(*Q, B.code(*M,v1+a,h1+b)) ;
                a++ ;
                b++ ;
            }

            a = 1 ;
            b = 1 ;

            while( B.code(*M,v1-a,h1-b) == Nil )
            {
                if( (v1-a) == -1 || (h1-b) == -1 ) {
                    break ;
                } else {
                AddQueue(*Q, B.code(*M,v1-a,h1-b)) ;
                a++ ;
                b++ ;
                }
            }
            break;
        }
        case 'K' : 
        case 'k' : {
            if(B.code(*M,v1,h1+1) = Nil) {
                AddQueue(*Q, B.code(*M,v1,h1+1)) ;
            }
            if(B.code(*M,v1,h1-1) = Nil) {
                AddQueue(*Q, B.code(*M,v1,h1-1)) ;
            }
            if(B.code(*M,v1+1,h1) = Nil) {
                AddQueue(*Q, B.code(*M,v1+1,h1)) ;
            }
            if(B.code(*M,v1-1,h1) = Nil) {
                AddQueue(*Q, B.code(*M,v1-1,h1)) ;
            }
            if(B.code(*M,v1+1,h1+1) = Nil) {
                AddQueue(*Q, B.code(*M,v1+1,h1+1)) ;
            }
            if(B.code(*M,v1-1,h1-1) = Nil) {
                AddQueue(*Q, B.code(*M,v1-2,h1-1)) ;
            }
            if(B.code(*M,v1-1,h1+1) = Nil) {
                AddQueue(*Q, B.code(*M,v1-1,h1+1)) ;
            }
            if(B.code(*M,v1+1,h1-1) = Nil) {
                AddQueue(*Q, B.code(*M,v1+1,h1-1)) ;
            } 
            break;  
        }
        case 'P' : {
            if (B.code.x=7) {
                if (B.code(*M,v1-1,h1) = Nil) {
                    AddQueue(*Q, B.code(*M,v1-1,h1)) ;
                } else if (B.code(*M,v1-2,h1) = Nil) {
                    AddQueue(*Q, B.code(*M,v1-2,h1)) ;
                } 
            } else {
                if (B.code(*M,v1-1,h1) = Nil) {
                    AddQueue(*Q, B.code(*M,v1-1,h1)) ;
                }
            }
            break;
        }
        case 'p' : {
            if (B.code.x=2) {
                if (B.code(*M,v1+1,h1) = Nil) {

                    AddQueue(*Q, B.code(*M,v1+1,h1)) ;
                } else if (B.code(*M,v1+2,h1) = Nil) {
                    AddQueue(*Q, B.code(*M,v1+2,h1)) ;
                } 
            } else {
                if (B.code(*M,v1+1,h1) = Nil) {
                    AddQueue(*Q, B.code(*M,v1+1,h1)) ;
                }
            }
            break;
        }
    }
}


Queue cekGerak (MATRIKS *M, listlinier *L) {
int i, n, h1, v1,;

    CreateEmptyQueue(Q);

    while (info(P)!=Nil) {

    switch(Bidak.code) {
        case 'R' : 
        case 'r' : {
          
            n=v1;
            
            while( B.code(*M,v1,n-1) == Nil )
            {
            if( n == 0 ) { break ; }
            AddQueue(*Q, B.code(*M,v1,h1)) ;
            n-- ;
            }

            n=v1 ;

            while( B.code(*M,v1,n+1) == Nil  && (n+1) <= 7 )
            {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
                ++n ;
            }

            n = h1 ;

            while( B.code(*M,n-1,h1) == Nil && n > -1 )
            {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
                --n ;
            }

            n = h1 ;

            while( (B.code(*M,n+1,h1) == Nil) && ( (n) <= 7 ) )
            {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
                ++n ;
            }    
            break;
        }
        case 'H' : 
        case 'h' : {
            if(B.code(*M,v1+2,h1+1) = Nil) {
                if((v1<8) && (h1<8)) { 
                    AddQueue(*Q, B.code(*M,v1,h1)) ;
                }
            }
            if( B.code(*M,v1+2,h1-1) == Nil ) {
                if((v1<8) && (h1>-1)) { 
                    AddQueue(*Q, B.code(*M,v1,h1)) ;
                }
            }

            if( B.code(*M,v1+1,h1+2) == Nil ) {  
                if((v1<8) && (h1<8)) { 
                    AddQueue(*Q, B.code(*M,v1,h1)) ;
                }
            }
            if( B.code(*M,v1-1,h1+2) == Nil ) {  
                if((v1>-1) && (h1<8)) { 
                    AddQueue(*Q, B.code(*M,v1,h1)) ;
                } 
            }

            if( (B.code*M,v1-2,h1-1)== Nil )
            {
                if((v1>-1) && (h1>-1)) { 
                    AddQueue(*Q, B.code(*M,v1,h1)) ;
                }
            }

            if( B.code(*M,v1-2,h1+1) == Nil )  {
                if((v1>-1) && (h1<8)) { 
                    AddQueue(*Q, B.code(*M,v1,h1)) ;
                }
            }

            if( B.code(*M,h1+1,v1-2) == Nil ) {
                if((h1<8) && (v1>-1)) { 
                    AddQueue(*Q, B.code(*M,v1,h1)) ;
                }
            }

            if( B.code(*M,v1-1,h1-2) == Nil )
            {   
                if((v1>-1) && (h1>-1)) { 
                    AddQueue(*Q, B.code(*M,v1,h1)) ;
                }
        }
            break;
        }
        case 'B' : 
        case 'b' : {
         i = 1;
            n = 1;

            while (B.code(*M,v1-i,h1+n) = Nil) {
                if( (v1-i) == -1 || (h1+n) == 8 ) {
                    break ;
                } else {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
                i++ ;
                n++ ;
                }
            } 

            i = 1;
            n = 1;

            while (B.code(*M,v1+i,h1-n) = Nil) {
                if( (v1+i) == 8 || (h1-n) == -1 ) {
                    break ;
                } else {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
                i++ ;
                n++ ;
                }
            } 

            i = 1;
            n = 1;

            while (B.code(*M,v1+i,h1+n) = Nil) {
                if( (v1+i) == 8 || (h1+n) == 8 ) {
                    break ;
                } else {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
                i++ ;
                n++ ;
                }
            } 

            i = 1;
            n = 1;
            
            while (B.code(*M,v1-i,h1-n) = Nil) {
                if( (v1-i) == -1 || (h1-n) == -1 ) {
                    break ;
                } else {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
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

            while( B.code(*M,v1,h1-y) == Nil )
            {
                if( (h1-y) == -1 ) {
                    break ;        
                } else {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
                y++ ;
                }
            }

            y = 1 ;

            while( B.code(*M,v1,h1+y) == Nil )
            {
                if( (h1+y) == 8 ) {
                    break ;
                }
                AddQueue(*Q, B.code(*M,v1,h1)) ;
                y++ ;
            }

            // vertical //

            x = 1 ;

            while( B.code(*M,v1-x,h1) == Nil )
            {
                if( (v1-x) == -1 ) break ;
                AddQueue(*Q, B.code(*M,v1,h1)) ;
                x++ ;
            }

            x = 1 ;

            while( B.code(*M,v1+x,h1) == Nil )
            {
                if( (v1+x) == 8 ) break ;
                AddQueue(*Q, B.code(*M,v1,h1)) ;
                x++ ;
            }

            // Diagonal  //

            a = 1;
            b = 1;

            while( B.code(*M,v1-a,h1+b) == Nil )
            {
                if( (v1-a) == -1 || (h1+b) == 8 ) {
                    break ;
                } else {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
                a++ ;
                b++ ;
                }
            }


            a = 1;
            b = 1;

            while( B.code(*M,v1+a,h1-b) == Nil )
            {
                if( (v1+a) == 8 || (h1-b) == -1 ) {
                    break ;
                } else {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
                a++ ;
                b++ ;
                }
            }

            a = 1;
            b = 1;


            while( B.code(*M,v1+a,h1+b) == Nil )
            {
                if( (v1+a) == 8 || (h1+b) == 8 ) {
                    break ;
                }
                AddQueue(*Q, B.code(*M,v1,h1)) ;
                a++ ;
                b++ ;
            }

            a = 1 ;
            b = 1 ;

            while( B.code(*M,v1-a,h1-b) == Nil )
            {
                if( (v1-a) == -1 || (h1-b) == -1 ) {
                    break ;
                } else {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
                a++ ;
                b++ ;
                }
            }
            break;
        }
        case 'K' : 
        case 'k' : {
            if(B.code(*M,v1,h1+1) = Nil) {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
            }
            if(B.code(*M,v1,h1-1) = Nil) {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
            }
            if(B.code(*M,v1+1,h1) = Nil) {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
            }
            if(B.code(*M,v1-1,h1) = Nil) {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
            }
            if(B.code(*M,v1+1,h1+1) = Nil) {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
            }
            if(B.code(*M,v1-1,h1-1) = Nil) {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
            }
            if(B.code(*M,v1-1,h1+1) = Nil) {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
            }
            if(B.code(*M,v1+1,h1-1) = Nil) {
                AddQueue(*Q, B.code(*M,v1,h1)) ;
            } 
            break;  
        }
        case 'P' : {
            if (B.code.x=7) {
                if (B.code(*M,v1-1,h1) = Nil) {
                    AddQueue(*Q, B.code(*M,v1,h1)) ;
                } else if (B.code(*M,v1-2,h1) = Nil) {
                    AddQueue(*Q, B.code(*M,v1,h1)) ;
                } 
            } else {
                if (B.code(*M,v1-1,h1) = Nil) {
                    AddQueue(*Q, B.code(*M,v1,h1)) ;
                }
            }
            break;
        }
        case 'p' : {
            if (B.code.x=2) {
                if (B.code(*M,v1+1,h1) = Nil) {
                    AddQueue(*Q, B.code(*M,v1,h1)) ;
                } else if (B.code(*M,v1+2,h1) = Nil) {
                    AddQueue(*Q, B.code(*M,v1,h1)) ;
                } 
            } else {
                if (B.code(*M,v1+1,h1) = Nil) {
                    AddQueue(*Q, B.code(*M,v1,h1)) ;
                }
            }
            break;
        }
    }
    }
}

void printBisaGerak(Queue Q, MATRIKS *M) {
    int i, v1, h1;

    for(i=1;i<=NbElmt(Q);i++){
        DelQueue(*Q, B);
        printf(B.code(*M,v1,h1));
        AddQueue(*Q, B);
    }
    return 0;
}

void printGerak(Queue Q) {
    int i, v1, h1;

    for(i=1;i<=NbElmt(Q);i++){
        DelQueue(*Q, B);
        printf(B.code(*M,v1,h1));
        AddQueue(*Q, B);
    }

    return 0;
}