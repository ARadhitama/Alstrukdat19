/* Implementasi UI */

#include "./ADT/kamus.h"

void Map(MATRIKS *M) {
    /* kamus */
    int i,j;

    /* algoritma */
    printf("    a   b   c   d   e   f   g   h\n");
    printf("\n");
    printf("8 |");
    for (i=0;i<=7;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,7).code);
        printf(" |");
    }
    printf(" 8\n");
    printf("7 |");
    for (i=0;i<=7;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,6).code);
        printf(" |");
    }
    printf(" 7\n");
    printf("6 |");
    for (i=0;i<=7;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,5).code);
        printf(" |");
    }
    printf(" 6\n");
    printf("5 |");
    for (i=0;i<=7;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,4).code);
        printf(" |");
    }
    printf(" 5\n");
    printf("4 |");
    for (i=0;i<=7;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,3).code);
        printf(" |");
    }
    printf(" 4\n");
    printf("3 |");
    for (i=0;i<=7;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,2).code);
        printf(" |");
    }
    printf(" 3\n");
    printf("2 |");
    for (i=0;i<=7;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,1).code);
        printf(" |");
    }
    printf(" 2\n");
    printf("1 |");
    for (i=0;i<=7;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,0).code);
        printf(" |");
    }
    printf(" 1\n");
    printf("\n");
    printf("    a   b   c   d   e   f   g   h\n");
}

void AssignMatriks (Bidak B, POINT P) {
    B.Position.X = P.X;
    B.Position.Y = P.Y;
}

void printCommand() {
    printf("1. MOVE\n");
    printf("2. SPECIAL MOVE\n");
    printf("3. UNDO \n");
    printf("4. SAVE\n");
    printf("5. EXIT\n");
}

void printMainMenu() {
    printf("1. NEW GAME\n");
    printf("2. LOAD GAME\n");
    printf("3. LEADERBOARD\n");
}