/* Struktur Data Universal */
/* Header yang berisi fungsi-fungsi yang dibutuhkan game */

#ifndef _KAMUS_H_
#define _KAMUS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./ADT/boolean.h"
#include "./ADT/array.h"
#include "./ADT/point.h"
#include "./ADT/listlinier.h"
#include "./ADT/stack.h"
#include "./ADT/stacklist.h"
#include "./ADT/queuelist.h"
#include "./ADT/matriks.h"
#include "./ADT/mesin_kata.h"

typedef struct {
    char code;
    POINT Position;
} Bidak;

typedef struct {
    int turn;
    boolean whiteTurn
} States;
/**** UI FUNCTION ***/

void Map(MATRIKS *M);
void AssignMatriks (Bidak B, Point P);
void printCommand();
void printMainMenu();

/**** MOVE FUNCTION ****/

Stack MoveRook(Bidak B);
Stack MoveKnight(Bidak B);
Stack MoveBishop(Bidak B);
Stack MoveQueen(Bidak B);
Stack MoveKing(Bidak B);
Stack MovePion(Bidak B);
boolean cekGerak (MATRIKS *M, Bidak B);

/**** GAME FUNCTION ****/

void New(MATRIKS *M)

/**** GAME RULES ****/
 
 boolean cekSkak ();
 boolean cekSkakMat();
 boolean whiteTurn(int turn);