#include "stack.h"

/* ********* Prototype ********* */

/* *** Konstruktor/Kreator *** */
void CreateEmptyStack(Stack *S) {
  /* Kamus Lokal */

  /* Algoritma */
  TopStack(*S) = NilStack;
}
/* I.S. Sembarang
   F.S. Membuat sebuah stack S yang kosong berkapasitas MaxEl
   jadi indeksnya antara 1..MaxEl
   Ciri stack kosong : TOP bernilai Nil */

/* ********* Predikat Untuk test keadaan KOLEKSI ********* */
boolean IsEmptyStack(Stack S) {
  /* Kamus Lokal */

  /* Algoritma */
  return (TopStack(S) == NilStack);
}
/* Mengirim true jika Stack kosong: lihat definisi di atas */
boolean IsFullStack(Stack S) {
  /* Kamus Lokal */

  /* Algoritma */
  return (TopStack(S) == MaxElStack);
}
/* Mengirim true jika tabel penampung nilai elemen stack penuh */

/* ********** Operator Dasar Stack ********* */
void PushStack(Stack *S, infotypeStack X) {
  /* Kamus Lokal */

  /* Algoritma */
  TopStack(*S)++;
  InfoTopStack(*S) = X;
}
/* Menambahkan X sebagai elemen Stack S.
   I.S. S mungkin kosong, tabel penampung elemen stack TIDAK penuh
   F.S. X menjadi TOP yang baru, TOP bertambah 1 */
void PopStack(Stack *S, infotypeStack *X) {
  /* Kamus Lokal */

  /* Algoritma */
  *X = InfoTopStack(*S);
  TopStack(*S)--;
}
/* Menghapus X dari Stack S.
   I.S. S tidak kosong
   F.S. X adalah nilai elemen TOP yang lama, TOP berkurang 1 */