#include "kamus.h"

Stack MoveBidak(Bidak B, MATRIKS *M){
    switch (Bidak.code) {
        case 'r':
        case 'R': {
            break;
        }
        case 'h':
        case 'H': {
            break;
        }
        case 'b':
        case 'B': {
            break;
        }
        case 'q':
        case 'Q': {
            break;
        }
        case 'k':
        case 'K': {
            break;
        }
        case 'p':{
            break;
        }
        case 'P':{
            break;
        }
    }
}


boolean cekGerak (MATRIKS *M, Bidak B) {
int i, n, h1, v1;

    found = false;

    switch(Bidak.code) {
        case 'R' : 
        case 'r' : {
            i = 1;
            n = 1;

            while (B.code(*M,v1-i,h1+n) = Nil) {
                if( (v1-i) == -1 || (h1+n) == 8 ) {
                    break ;
                } else {
                printf( "%d%d , " , v1-i , h1+n ) ;
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
                printf( "%d%d , " , v1+i , h1-n ) ;
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
                printf( "%d%d , " , v1+i , h1+n ) ;
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
                printf( "%d%d , " , v1-i , h1-n ) ;
                i++ ;
                n++ ;
                }
            } 
           break; 
        }
        case 'H' : 
        case 'h' : {
            if(B.code(*M,v1+2,h1+1) = Nil) {
                if((v1<8) && (h1<8)) { 
                    printf( "%d%d, " ,v1+2 , h1+1) ;
                }
            }
            if( B.code(*M,v1+2,h1-1) == Nil ) {
                if((v1<8) && (h1>-1) { 
                    printf( "%d%d, " ,h1+2 , v1+1) ;
                }
            }

            if( B.code(*M,v1+1,h1+2) == Nil ) {  
                if((v1<8) && (h1<8)) { 
                    printf( "%d%d, " ,v1+1 , h1+2) ;
                }
            }
            if( B.code(*M,v1-1,h1+2) == Nil ) {  
                if((v1>-1) && (h1<8)) { 
                    printf( "%d%d, " ,v1-1 , h1+2) ;
                } 
            }

            if( (B.code*M,v1-2,h1-1)== Nil )
            {
                if((v1>-1) && (h1>-1)) { 
                    printf( "%d%d, " ,v1-2 , h1-1) ;
                }
            }

            if( B.code(*M,v1-2,h1+1) == Nil )  {
                if((v1>-1) && (h1<8)) { 
                    printf( "%d%d, " ,v1-2 , h1+1) ;
                }
            }

            if( B.code(*M,h1+1,v1-2) == Nil ) {
                if((h1<8) && (v1>-1)) { 
                    printf( "%d%d, " ,v1+1 , h1-2) ;
                }
            }

            if( B.code(*M,v1-1,h1-2) == Nil )
            {   
                if((v1>-1) && (h1>-1)) { 
                    printf( "%d%d, " ,v1-1 , h1-2) ;
                }
        }
            break;
        }
        case 'B' : 
        case 'b' : {
        
            n=v1;
            
            while( B.code(*M,v1,n-1) == Nil )
            {
            if( n == 0 ) { break ; }
            printf( "%d%d , " , v1 , n-1 ) ;
            n-- ;
            }

            n=v1 ;

            while( B.code(*M,v1,n+1) == Nil  && (n+1) <= 7 )
            {
                printf( "%d%d , " , v1 , n+1 ) ;
                ++n ;
            }

            n = h1 ;

            while( B.code(*M,n-1,h1) == Nil && n > -1 )
            {
                printf( "%d%d , " , n-1 , h1 ) ;
                --n ;
            }

            n = h1 ;

            while( (B.code(*M,n+1,h1) == ' ') && ( (n) <= 7 ) )
            {
                printf( "%d%d , " , n+1 , h1 ) ;
                ++n ;
            }    
            break;
        }
        case 'Q' : 
        case 'q' : {
            int x=1 , y=1 , a , b ;
            printf( "Available are: " ) ;

            // Horizontal //

            while( B.code(*M,v1,h1-y) == Nil )
            {
                if( (h1-y) == -1 ) {
                    break ;        
                } else {
                printf( "%d%d , " , v1 , h1-y ) ;
                y++ ;
                }
            }

            y = 1 ;

            while( B.code(*M,v1,h1+y) == Nil )
            {
                if( (h1+y) == 8 ) {
                    break ;
                }
                printf( "%d%d , " , v1 , h1+y ) ;
                y++ ;
            }

            // vertical //

            x = 1 ;

            while( board[v1-x][h1] == Nil )
            {
                if( (v1-x) == -1 ) break ;
                printf( "%d%d , " , v1-x , h1 ) ;
                x++ ;
            }

            x = 1 ;

            while( B.code(*M,v1+x,h1) == Nil )
            {
                if( (v1+x) == 8 ) break ;
                printf( "%d%d , " , v1+x , h1 ) ;
                x++ ;
            }

            // Diagonal  //

            a = 1 , b = 1 ;

            while( board[v1-a][h1+b] == Nil )
            {
                if( (v1-a) == -1 || (h1+b) == 8 ) {
                    break ;
                } else {
                printf( "%d%d , " , v1-a , h1+b ) ;
                a++ ;
                b++ ;
                }
            }


            a = 1 , b = 1 ;

            while( board[v1+a][h1-b] == Nil )
            {
                if( (v1+a) == 8 || (h1-b) == -1 ) {
                    break ;
                } else {
                printf( "%d%d , " , v1+a , h1-b ) ;
                a++ ;
                b++ ;
                }
            }

            a = 1 , b = 1 ;


            while( board[v1+a][h1+b] == Nil )
            {
                if( (v1+a) == 8 || (h1+b) == 8 ) {
                    break ;
                }
                printf( "%d%d , " , v1+a , h1+b ) ;
                a++ ;
                b++ ;
            }

            a = 1 ;
            b = 1 ;

            while( board[v1-a][h1-b] == Nil )
            {
                if( (v1-a) == -1 || (h1-b) == -1 ) {
                    break ;
                } else {
                printf( "%d%d , " , v1-a , h1-b ) ;
                a++ ;
                b++ ;
                }
            }
            break;
        }
        case 'K' : 
        case 'k' : {
            if(B.code(*M,v1,h1+1)) {
                printf( "%d%d , " , v1 , h1+1 ) ;
            }
            if(B.code(*M,v1,h1-1)) {
                printf( "%d%d , " , v1 , h1-1 ) ;
            }
            if(B.code(*M,v1+1,h1)) {
                printf( "%d%d , " , v1+1 , h1 ) ;
            }
            if(B.code(*M,v1-1,h1)) {
                printf( "%d%d , " , v1-1 , h1 ) ;
            }
            if(B.code(*M,v1+1,h1+1)) {
                printf( "%d%d , " , v1+1 , h1+1 ) ;
            }
            if(B.code(*M,v1-1,h1-1)) {
                printf( "%d%d , " , v1-1 , h1-1 ) ;
            }
            if(B.code(*M,v1-1,h1+1)) {
                printf( "%d%d , " , v1-1 , h1+1 ) ;
            }
            if(B.code(*M,v1+1,h1-1)) {
                printf( "%d%d , " , v1+1 , h1-1 ) ;
            } 
            break;  
        }
        case 'P' : {
            if (B.code.x=7) {
                if (B.code(*M,v1-1,h1) = Nil) {
                    printf("%d%d , ", v1-1,h1);
                } else if (B.code(*M,v1-2,h1) = Nil) {
                    printf("%d%d , ", v1-2,h1);
                } 
            } else {
                if (B.code(*M,v1-1,h1) = Nil) {
                    printf("%d%d , ", v1-1,h1);
                }
            }
            break;
        }
        case 'p' : {
            if (B.code.x=2) {
                if (B.code(*M,v1+1,h1) = Nil) {
                    printf("%d%d , ", v1+1,h1);
                } else if (B.code(*M,v1+2,h1) = Nil) {
                    printf("%d%d , ", v1+2,h1);
                } 
            } else {
                if (B.code(*M,v1+1,h1) = Nil) {
                    printf("%d%d , ", v1+1,h1);
                }
            }
            break;
        }
    }
}

void printBisaGerak(MATRIKS *M) {
    return 0;
}

void printGerak(Bidak B, MATRIKS *M) {
    return 0;
}