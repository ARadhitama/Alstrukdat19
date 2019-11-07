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
    char name;
    POINT Position;
} Bidak;

/**** UI FUNCTION ***/

void Map(MATRIKS *M);
void AssignMatriks (Bidak B, Point P);
void printCommand();

/**** MOVE FUNCTION ****/

Queue MoveRook(Bidak B);
Queue MoveKnight(Bidak B);
Queue MoveBishop(Bidak B);
Queue MoveQueen(Bidak B);
Queue MoveKing(Bidak B);
Queue MovePion(Bidak B);

/**** GAME FUNCTION ****/

void New(MATRIKS *M)