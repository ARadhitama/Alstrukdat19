#include "kamus.h"

void New(MATRIKS *M) {
    
    Elmt(*M,8,8) = 'R';
    Elmt(*M,7,8) = 'H';
    Elmt(*M,6,8) = 'B';
    Elmt(*M,5,8) = 'Q';
    Elmt(*M,4,8) = 'K';
    Elmt(*M,3,8) = 'B';
    Elmt(*M,2,8) = 'H';
    Elmt(*M,1,8) = 'R';
    Elmt(*M,1,7) = 'P';
    Elmt(*M,2,7) = 'P';
    Elmt(*M,3,7) = 'P';
    Elmt(*M,4,7) = 'P';
    Elmt(*M,5,7) = 'P';
    Elmt(*M,6,7) = 'P';
    Elmt(*M,7,7) = 'P';
    Elmt(*M,8,7) = 'P';

    Elmt(*M,8,1) = 'r';
    Elmt(*M,7,1) = 'h';
    Elmt(*M,6,1) = 'b';
    Elmt(*M,5,1) = 'k';
    Elmt(*M,4,1) = 'q';
    Elmt(*M,3,1) = 'b';
    Elmt(*M,2,1) = 'h';
    Elmt(*M,1,1) = 'r';
    Elmt(*M,1,2) = 'p';
    Elmt(*M,2,2) = 'p';
    Elmt(*M,3,2) = 'p';
    Elmt(*M,4,2) = 'p';
    Elmt(*M,5,2) = 'p';
    Elmt(*M,6,2) = 'p';
    Elmt(*M,7,2) = 'p';
    Elmt(*M,8,2) = 'p';

}