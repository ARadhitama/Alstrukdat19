/* Struktur Data Universal */
/* Header yang berisi fungsi-fungsi yang dibutuhkan game */

#ifndef _KAMUS_H_
#define _KAMUS_H_

#include "stdlib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "boolean.h"
#include "array.h"
#include "point.h"
#include "listlinier.h"
#include "stack.h"
#include "stack.h"
#include "queuelist.h"
#include "queue.h"
#include "matriks.h"

typedef struct {
    char *code;
    POINT Position;
    POINT prevPos;
} Bidak;

/**** UI FUNCTION ***/

void Map(MATRIKS *M);
void printCommand();
void printMainMenu();

/**** MOVE FUNCTION ****/

Queue MoveBidak(Bidak B, MATRIKS *M);
Queue cekGerak (MATRIKS *M, List *L);
void printGerak(Queue Q);
void printBisaGerak(Queue Q);

/**** GAME FUNCTION ****/

void New(MATRIKS *M);

/**** GAME RULES ****/
 
//  boolean cekSkak ();
//  boolean cekSkakMat();
 
 #endif
 
