#include "./ADT/kamus.h"

int main() {
    /* KAMUS */
    MATRIKS Board;
    boolean Exit;
    char Command;
    Bidak P1, P2, P3, P4, P5, P6, P7, P8, R1, R2, H1, H2, B1, B2, Q, K, p1, p2, p3, p4, p5, p6, p7, p8, r1, r2, h1, h2, b1, b2, q, k, digerak, titikGerak, temp;
    Queuelist turn;
    Queue bisaGerak, bidakGerak;
    List white, black;
    int gerak, opsiGerak, i, j;
    Stack move; 

    /* ALGORITMA */
    printMainMenu();    
    CreateEmptyQueueList(&turn);
    CreateEmptyQueue(&bisaGerak, 16);
    CreateEmptyQueue(&bidakGerak, 100);
    CreateEmptyListLinear(&white);
    CreateEmptyListLinear(&black);
    CreateEmptyStack(&move);
    printf("Command : ");
    scanf("%c\n", &Command);
    switch (Command) {
        case '1' :{
            MakeMATRIKS(8,8,&Board);
        
            Exit = false;
            
            /* assign bidak */
            /** Pion **/
            P1.code = 'P';
            P1.Position.X = 0;
            P1.Position.Y = 6;
            P2.code = 'P';
            P2.Position.X = 1;
            P2.Position.Y = 6;
            P3.code = 'P';
            P3.Position.X = 2;
            P3.Position.Y = 6;
            P4.code = 'P';
            P4.Position.X = 3;
            P4.Position.Y = 6;
            P5.code = 'P';
            P5.Position.X = 4;
            P5.Position.Y = 6;
            P6.code = 'P';
            P6.Position.X = 5;
            P6.Position.Y = 6;
            P7.code = 'P';
            P7.Position.X = 6;
            P7.Position.Y = 6;
            P8.code = 'P';
            P8.Position.X = 7;
            P8.Position.Y = 6;

            p1.code = 'p';
            p1.Position.X = 0;
            p1.Position.Y = 1;
            p2.code = 'p';
            p2.Position.X = 1;
            p2.Position.Y = 1;
            p3.code = 'p';
            p3.Position.X = 2;
            p3.Position.Y = 1;
            p4.code = 'p';
            p4.Position.X = 3;
            p4.Position.Y = 1;
            p5.code = 'p';
            p5.Position.X = 4;
            p5.Position.Y = 1;
            p6.code = 'p';
            p6.Position.X = 5;
            p6.Position.Y = 1;
            p7.code = 'p';
            p7.Position.X = 6;
            p7.Position.Y = 1;
            p8.code = 'p';
            p8.Position.X = 7;
            p8.Position.Y = 1;

            /** Rook **/
            R1.code = 'R';
            R1.Position.X = 0;
            R1.Position.Y = 7;
            R2.code = 'R';
            R2.Position.X = 7;
            R2.Position.Y = 7;

            r1.code = 'r';
            r1.Position.X = 0;
            r1.Position.Y = 0;
            r2.code = 'r';
            r2.Position.X = 7;
            r2.Position.Y = 0;

            /** Horse **/
            H1.code = 'H';
            H1.Position.X = 1;
            H1.Position.Y = 7;
            H2.code = 'H';
            H2.Position.X = 6;
            H2.Position.Y = 7;

            h1.code = 'h';
            h1.Position.X = 1;
            h1.Position.Y = 0;
            h2.code = 'h';
            h2.Position.X = 6;
            h2.Position.Y = 0;

            /** Bishop **/
            B1.code = 'B';
            B1.Position.X = 2;
            B1.Position.Y = 7;
            B2.code = 'B';
            B2.Position.X = 5;
            B2.Position.Y = 7;

            b1.code = 'b';
            b1.Position.X = 2;
            b1.Position.Y = 0;
            b2.code = 'b';
            b2.Position.X = 5;
            b2.Position.Y = 0;

            /** King & Queen **/
            K.code = 'K';
            K.Position.X = 3;
            K.Position.Y = 7;
            Q.code = 'Q';
            Q.Position.X = 4;
            Q.Position.Y = 7;

            k.code = 'k';
            k.Position.X = 3;
            k.Position.Y = 0;
            q.code = 'k';
            q.Position.X = 4;
            q.Position.Y = 0;

            /* Assign Board */
            (Elmt(Board,7,7)) = R2; InsVFirst (&black, R2); 
            (Elmt(Board,6,7)) = H2; InsertLast (&black, &H2);
            (Elmt(Board,5,7)) = B2; InsertLast (&black, &B2);
            (Elmt(Board,4,7)) = Q; InsertLast (&black, &Q);
            (Elmt(Board,3,7)) = K; InsertLast (&black, &K);
            (Elmt(Board,2,7)) = B1; InsertLast (&black, &B1);
            (Elmt(Board,1,7)) = H1; InsertLast (&black, &H1);
            (Elmt(Board,0,7)) = R1; InsertLast (&black, &R1);
            (Elmt(Board,0,6)) = P1; InsertLast (&black, &P1);
            (Elmt(Board,1,6)) = P2; InsertLast (&black, &P2);
            (Elmt(Board,2,6)) = P3; InsertLast (&black, &P3);
            (Elmt(Board,3,6)) = P4; InsertLast (&black, &P4);
            (Elmt(Board,4,6)) = P5; InsertLast (&black, &P5);
            (Elmt(Board,5,6)) = P6; InsertLast (&black, &P6);
            (Elmt(Board,6,6)) = P7; InsertLast (&black, &P7);
            (Elmt(Board,7,6)) = P8; InsertLast (&black, &P8);

            Elmt(Board,7,0) = r2; InsVFirst (&white, r2);
            Elmt(Board,6,0) = h2; InsertLast (&white, &h2);
            Elmt(Board,5,0) = b2; InsertLast (&white, &b2);
            Elmt(Board,4,0) = q; InsertLast (&white, &q);
            Elmt(Board,3,0) = k; InsertLast (&white, &k);
            Elmt(Board,2,0) = b1; InsertLast (&white, &b1);
            Elmt(Board,1,0) = h1; InsertLast (&white, &h1);
            Elmt(Board,0,0) = r1; InsertLast (&white, &r1);
            Elmt(Board,0,1) = p1; InsertLast (&white, &p1);
            Elmt(Board,1,1) = p2; InsertLast (&white, &p2);
            Elmt(Board,2,1) = p3; InsertLast (&white, &p3);
            Elmt(Board,3,1) = p4; InsertLast (&white, &p4);
            Elmt(Board,4,1) = p5; InsertLast (&white, &p5);
            Elmt(Board,5,1) = p6; InsertLast (&white, &p6);
            Elmt(Board,6,1) = p7; InsertLast (&white, &p7);
            Elmt(Board,7,1) = p8; InsertLast (&white, &p8);

            for (i=0; i<=7; i++) {
                for(j=2; j<=5; j++) {
                    Elmt(Board,i,j).code = " ";
                }
            }
            Map(&Board);
            while ((!Exit) || (NbElmtQueueList(turn) <= 50)) {
                if ((IsEmptyQueueList(turn) || (InfoTailQL(turn) == 'b'))) {          // white turn
                    printCommand();
                    printf("Command : ");
                    scanf("%c\n", &Command);
                    switch (Command) {
                        case '1' : {

                            bisaGerak = cekGerak(&Board, &white);
                            printBisaGerak(bisaGerak);
                            scanf("%d\n", &gerak);
                            for (i = 1; i<=gerak; i++) {
                                DelQueue(&bisaGerak, &digerak);
                            }   
                            bidakGerak = MoveBidak(digerak, &Board);
                            printGerak(bidakGerak);
                            scanf("%d\n", &opsiGerak);
                            for (i = 1; i<opsiGerak; i++) {
                                DelQueue(&bidakGerak, &titikGerak);
                            }
                            DelP(&white, Elmt(Board, digerak.Position.X, digerak.Position.Y));

                            if (Elmt(Board, titikGerak.Position.X, titikGerak.Position.Y).code != ' ') {
                                DelP (&black, Elmt(Board, titikGerak.Position.X, titikGerak.Position.Y));
                            }
                            
                            Elmt(Board, titikGerak.Position.X, titikGerak.Position.Y) = Elmt(Board, digerak.Position.X, digerak.Position.Y);
                            Elmt(Board, digerak.Position.X, digerak.Position.Y).code = " ";

                            Elmt(Board, titikGerak.Position.X, titikGerak.Position.Y).Position.X = titikGerak.Position.X;
                            Elmt(Board, titikGerak.Position.X, titikGerak.Position.Y).Position.Y = titikGerak.Position.Y;

                            Elmt(Board, titikGerak.Position.X, titikGerak.Position.Y).prevPos.X = digerak.Position.X;
                            Elmt(Board, titikGerak.Position.X, titikGerak.Position.Y).prevPos.Y = digerak.Position.Y;
                            
                            InsertLast (&white, &(Elmt(Board, titikGerak.Position.X, titikGerak.Position.Y)));
                            PushStack(&move, Elmt(Board, titikGerak.Position.X, titikGerak.Position.Y));
                            AddQueueList(&turn, 'w');
                        }
                        case '2' : {
                            AddQueueList(&turn, 'b');
                        }
                        case '3' : { // undo
                            PopStack(&move, &temp);
                            Elmt(Board, temp.prevPos.X, temp.prevPos.Y) = Elmt(Board, temp.Position.X, temp.Position.Y);
                            Elmt(Board, temp.Position.X, temp.Position.Y).code = " ";
                            Elmt(Board, temp.prevPos.X, temp.prevPos.Y).Position.X = temp.prevPos.X;
                            Elmt(Board, temp.prevPos.X, temp.prevPos.Y).Position.Y = temp.prevPos.Y;
                            DelQueueList(&turn, &temp);

                            PopStack(&move, &temp);
                            Elmt(Board, temp.prevPos.X, temp.prevPos.Y) = Elmt(Board, temp.Position.X, temp.Position.Y);
                            Elmt(Board, temp.Position.X, temp.Position.Y).code = " ";
                            Elmt(Board, temp.prevPos.X, temp.prevPos.Y).Position.X = temp.prevPos.X;
                            Elmt(Board, temp.prevPos.X, temp.prevPos.Y).Position.Y = temp.prevPos.Y;
                            DelQueueList(&turn, &temp);

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
                        
                        }
                        case '2' : {
                            Add(&turn, 'b');
                        }
                        case '3' : {
                            PopStack(&move, &temp);
                            Elmt(Board, temp.prevPos.X, temp.prevPos.Y) = Elmt(Board, temp.Position.X, temp.Position.Y);
                            Elmt(Board, temp.Position.X, temp.Position.Y).code = " ";
                            Elmt(Board, temp.prevPos.X, temp.prevPos.Y).Position.X = temp.prevPos.X;
                            Elmt(Board, temp.prevPos.X, temp.prevPos.Y).Position.Y = temp.prevPos.Y;
                            DelQueueList(&turn, &temp);
                            
                            PopStack(&move, &temp);
                            Elmt(Board, temp.prevPos.X, temp.prevPos.Y) = Elmt(Board, temp.Position.X, temp.Position.Y);
                            Elmt(Board, temp.Position.X, temp.Position.Y).code = " ";
                            Elmt(Board, temp.prevPos.X, temp.prevPos.Y).Position.X = temp.prevPos.X;
                            Elmt(Board, temp.prevPos.X, temp.prevPos.Y).Position.Y = temp.prevPos.Y;
                            DelQueueList(&turn, &temp);
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
                Map(&Board);
            }
        }
    }
}