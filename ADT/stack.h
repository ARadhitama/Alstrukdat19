#ifndef __STACK_H__
#define __STACK_H__
#include "boolean.h"
#include "kamus.h"

#define NilStack 0 /* Nil adalah stack dengan elemen kosong */
#define MaxElStack 100

typedef Bidak infotypeStack;
typedef int addressStack; /* indeks tabel */

/* Versi I : dengan menyimpan tabel dan alamat top secara eksplisit */
typedef struct {
    infotypeStack T[MaxElStack+1]; /* tabel penyimpan elemen */
    addressStack TOPStack; /* alamat TOP: elemen puncak */
} Stack;
/* Definisi stack S kosong : S.TOP = Nil
   Elemen yang dipakai menyimpan nilai Stack T[1]..T[MaxEl]
   Jika S adalah Stack maka akses elemen :
   S.T[(S.TOP)] untuk mengakses elemen TOP
   S.TOP adalah alamat elemen TOP */

/* Definisi akses dengan Selektor : */
#define TopStack(S) (S).TOPStack
#define InfoTopStack(S) (S).T[(S).TOPStack]

/* ********* Prototype ********* */

/* *** Konstruktor/Kreator *** */
void CreateEmptyStack(Stack *S);
/* I.S. Sembarang
   F.S. Membuat sebuah stack S yang kosong berkapasitas MaxEl
   jadi indeksnya antara 1..MaxEl
   Ciri stack kosong : TOP bernilai Nil */

/* ********* Predikat Untuk test keadaan KOLEKSI ********* */
boolean IsEmptyStack(Stack S);
/* Mengirim true jika Stack kosong: lihat definisi di atas */
boolean IsFullStack(Stack S);
/* Mengirim true jika tabel penampung nilai elemen stack penuh */

/* ********** Operator Dasar Stack ********* */
void PushStack(Stack *S,infotypeStack X);
/* Menambahkan X sebagai elemen Stack S.
   I.S. S mungkin kosong, tabel penampung elemen stack TIDAK penuh
   F.S. X menjadi TOP yang baru, TOP bertambah 1 */
void PopStack(Stack *S,infotypeStack *X);
/* Menghapus X dari Stack S.
   I.S. S tidak kosong
   F.S. X adalah nilai elemen TOP yang lama, TOP berkurang 1 */

#endif // __STACK_H__