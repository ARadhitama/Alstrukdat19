#include "kamus.h"

Int main() {
    /* KAMUS */
    MATRIKS Board;
    boolean Exit;
    char Command;
    Bidak P1,P2,P3,P4,P5,P6,P7,P8,R1;
    States game;

    /* ALGORITMA */
    printMainMenu();
    printf("Command : ");
    scanf("%c\n", &Command);
    switch (Command) {
        case '1' :{
            MakeMATRIKS(8,8,Board);
            New(*Board);
            game.turn = 1;
            Exit = false;

            do {
                printCommand();
                printf("Command : ");
                scanf("%c\n", &Command);
                switch (Command) {
                    case '1' : {
                        game.turn++;
                    }
                    case '2' : {
                        game.turn++;
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

            } while (!Exit)
        }
    }
}