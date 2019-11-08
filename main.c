#include "kamus.h"

Int main() {
    /* KAMUS */
    MATRIKS Board;
    boolean Exit;
    char Command;
    Bidak P1,P2,P3,P4,P5,P6,P7,P8,R1,

    /* ALGORITMA */
    MakeMATRIKS(8,8,Board);
    New(*Board);

    Exit = false;
    do {
        printCommand();
        printf("\n");
        printf("Command : ");
        scanf("%c\n", &Command);
        switch (Command) {
            case '1' : {
                
            }
            case '2' : {

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