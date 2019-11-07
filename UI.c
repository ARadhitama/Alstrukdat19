/* Implementasi UI */

#include "kamus.h"

void Map(MATRIKS *M) {
    /* kamus */
    int i,j;

    /* algoritma */
    printf("    a   b   c   d   e   f   g   h\n");
    printf("\n");
    printf("8 |");
    for (i=1;i<=8;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,8));
        printf(" |");
    }
    printf(" 8\n");
    printf("7 |");
    for (i=1;i<=8;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,7));
        printf(" |");
    }
    printf(" 7\n");
    printf("6 |");
    for (i=1;i<=8;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,6));
        printf(" |");
    }
    printf(" 6\n");
    printf("5 |");
    for (i=1;i<=8;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,5));
        printf(" |");
    }
    printf(" 5\n");
    printf("4 |");
    for (i=1;i<=8;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,4));
        printf(" |");
    }
    printf(" 4\n");
    printf("3 |");
    for (i=1;i<=8;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,3));
        printf(" |");
    }
    printf(" 3\n");
    printf("2 |");
    for (i=1;i<=8;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,2));
        printf(" |");
    }
    printf(" 2\n");
    printf("1 |");
    for (i=1;i<=8;i++) {
        printf(" ");
        printf("%c", Elmt(*M,i,1));
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