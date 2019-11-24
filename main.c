#include "kamus.h"

Int main() {
    /* KAMUS */
    MATRIKS Board;
    boolean Exit;
    char Command;
    Bidak P1, P2, P3, P4, P5, P6, P7, P8, R1, R2, H1, H2, B1, B2, Q, K, p1, p2, p3, p4, p5, p6, p7, p8, r1, r2, h1, h2, b1, b2, q, k;
    Queuelist turn;

    /* ALGORITMA */
    printMainMenu();    
    CreateEmpty(&turn);
    printf("Command : ");
    scanf("%c\n", &Command);
    switch (Command) {
        case '1' :{
            MakeMATRIKS(8,8,Board);
        
            Exit = false;
            
            /* assign bidak */
            /** Pion **/
            P1.code = 'P';
            P1.Position.X = 1;
            P1.Position.Y = 7;
            P2.code = 'P';
            P2.Position.X = 2;
            P2.Position.Y = 7;
            P3.code = 'P';
            P3.Position.X = 3;
            P3.Position.Y = 7;
            P4.code = 'P';
            P4.Position.X = 4;
            P4.Position.Y = 7;
            P5.code = 'P';
            P5.Position.X = 5;
            P5.Position.Y = 7;
            P6.code = 'P';
            P6.Position.X = 6;
            P6.Position.Y = 7;
            P7.code = 'P';
            P7.Position.X = 7;
            P7.Position.Y = 7;
            P8.code = 'P';
            P8.Position.X = 8;
            P8.Position.Y = 7;

            p1.code = 'p';
            p1.Position.X = 1;
            p1.Position.Y = 2;
            p2.code = 'p';
            p2.Position.X = 2;
            p2.Position.Y = 2;
            p3.code = 'p';
            p3.Position.X = 3;
            p3.Position.Y = 2;
            p4.code = 'p';
            p4.Position.X = 4;
            p4.Position.Y = 2;
            p5.code = 'p';
            p5.Position.X = 5;
            p5.Position.Y = 2;
            p6.code = 'p';
            p6.Position.X = 6;
            p6.Position.Y = 2;
            p7.code = 'p';
            p7.Position.X = 7;
            p7.Position.Y = 2;
            p8.code = 'p';
            p8.Position.X = 8;
            p8.Position.Y = 2;

            /** Rook **/
            R1.code = 'R';
            R1.Position.X = 1;
            R1.Position.Y = 8;
            R2.code = 'R';
            R2.Position.X = 8;
            R2.Position.Y = 8;

            r1.code = 'r';
            r1.Position.X = 1;
            r1.Position.Y = 1;
            r2.code = 'r';
            r2.Position.X = 8;
            r2.Position.Y = 1;

            /** Horse **/
            H1.code = 'H';
            H1.Position.X = 2;
            H1.Position.Y = 8;
            H2.code = 'H';
            H2.Position.X = 7;
            H2.Position.Y = 8;

            h1.code = 'h';
            h1.Position.X = 2;
            h1.Position.Y = 1;
            h2.code = 'h';
            h2.Position.X = 7;
            h2.Position.Y = 1;

            /** Bishop **/
            B1.code = 'B';
            B1.Position.X = 3;
            B1.Position.Y = 8;
            B2.code = 'B';
            B2.Position.X = 6;
            B2.Position.Y = 8;

            b1.code = 'b';
            b1.Position.X = 3;
            b1.Position.Y = 1;
            b2.code = 'b';
            b2.Position.X = 6;
            b2.Position.Y = 1;

            /** King & Queen **/
            K.code = 'K';
            K.Position.X = 4;
            K.Position.Y = 8;
            Q.code = 'Q';
            Q.Position.X = 5;
            Q.Position.Y = 8;

            k.code = 'k';
            k.Position.X = 4;
            k.Position.Y = 1;
            q.code = 'k';
            q.Position.X = 5;
            q.Position.Y = 1;

            /* Assign Board */
            Elmt(Board,8,8) = R2;
            Elmt(Board,7,8) = H2;
            Elmt(Board,6,8) = B2;
            Elmt(Board,5,8) = Q;
            Elmt(Board,4,8) = K;
            Elmt(Board,3,8) = B1;
            Elmt(Board,2,8) = H1;
            Elmt(Board,1,8) = R1;
            Elmt(Board,1,7) = P1;
            Elmt(Board,2,7) = P2;
            Elmt(Board,3,7) = P3;
            Elmt(Board,4,7) = P4;
            Elmt(Board,5,7) = P5;
            Elmt(Board,6,7) = P6;
            Elmt(Board,7,7) = P7;
            Elmt(Board,8,7) = P8;

            Elmt(Board,8,1) = r2;
            Elmt(Board,7,1) = h1;
            Elmt(Board,6,1) = b2;
            Elmt(Board,5,1) = q;
            Elmt(Board,4,1) = k;
            Elmt(Board,3,1) = b1;
            Elmt(Board,2,1) = h1;
            Elmt(Board,1,1) = r1;
            Elmt(Board,1,2) = p1;
            Elmt(Board,2,2) = p2;
            Elmt(Board,3,2) = p3;
            Elmt(Board,4,2) = p4;
            Elmt(Board,5,2) = p5;
            Elmt(Board,6,2) = p6;
            Elmt(Board,7,2) = p7;
            Elmt(Board,8,2) = p8;

            while ((!Exit) || (NbElmt(turn) <= 50)) {
                if ((IsEmpty(turn) || InfoTail(turn) == 'b') {          // white turn
                    printCommand();
                    printf("Command : ");
                    scanf("%c\n", &Command);
                    switch (Command) {
                        case '1' : {
                            Add(&turn, 'w');
                        }
                        case '2' : {
                            Add(&turn, 'w');
                        }
                        case '3' : {

                        }
                        case '4' : {

                        }
                        case '5' : {
                            Exit = true;
                        }
                        default : {
                            printf("Command salah!\n");
                        }
                    }
                } else {                                                // black turn
                    printCommand();
                    printf("Command : ");
                    scanf("%c\n", &Command);
                    switch (Command) {
                        case '1' : {
                            Add(&turn, 'b');
                        }
                        case '2' : {
                            Add(&turn, 'b');
                        }
                        case '3' : {

                        }
                        case '4' : {

                        }
                        case '5' : {
                            Exit = true;
                        }
                        default : {
                            printf("Command salah!\n");
                        }
                    }
                }
            }
        }
    }
}