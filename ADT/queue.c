#include "queue.h"

/******** IMPLEMENTASI ********/

/* *** Predikat Pemeriksaan Kondisi Queue *** */
boolean IsEmptyQueue(Queue Q) {
  /* Kamus Lokal */

  /* Algoritma */
  return ((HeadQ(Q) == Nil) && (TailQ(Q) == Nil));
}
/* Mengirim true jika Q kosong */
boolean IsFullQueue(Queue Q) {
  /* Kamus Lokal */

  /* Algoritma */
  return (TailQ(Q) == MaxElQ(Q));
}
/* Mengirim true jika tabel penampung elemen Q sudah penuh yaitu mengandung
MaxEl elemen */
int NBElmtQueue(Queue Q) {
  /* Kamus Lokal */

  /* Algoritma */
  return (TailQ(Q) - HeadQ(Q) + 1);
}
/* Mengirimkan banyaknya elemen queue. Mengirimkan 0 jika Q kosong. */

/* *** Konstruktor *** */
void CreateEmptyQueue(Queue *Q, int Max) {
  /* Kamus Lokal */

  /* Algoritma */
  (*Q).TQ = (infotype *) malloc ((Max + 1) * sizeof(infotype));
  if ((*Q).TQ != NULL) {
    MaxElQ(*Q) = Max;
    HeadQ(*Q) = Nil;
    TailQ(*Q) = Nil;
  }
  else {                                                        /* Alokasi gagal */
    MaxElQ(*Q) = Nil;
  }
}
/* I.S. Max terdefinisi }
   F.S. Sebuah Q kosong terbentuk dan salah satu kondisi sbb :
   Jika alokasi berhasil, tabel memori dialokasi berukuran Max
   atau : jika alokasi gagal, Q kosong dg Maksimum elemen=0
   Proses : Melakukan alokasi memori dan membuat sebuah Q kosong */

/* *** Destruktor *** */
void DeAlokasi(Queue *Q) {
  /* Kamus Lokal */

  /* Algoritma */
  MaxElQ(*Q) = Nil;
  free((*Q).TQ);
}
/* Proses : Mengembalikan memori Q
   I.S. Q pernah dialokasi
   F.S. Q menjadi tidak terdefinisi lagi, MaxEl(Q) diset 0 */

/* *** Operator-Operator Dasar Queue *** */
void AddQueue(Queue *Q, infotype X) {
  /* Kamus Lokal */

  /* Algoritma */
  if (IsEmptyQueue(*Q)) {
    HeadQ(*Q) = 1;
    TailQ(*Q) = 1;
  }
  else {
    HeadQ(*Q)++;
    TailQ(*Q)++;
  }
  InfoTailQ(*Q) = X;
}
/* Proses : Menambahkan X pada Q dengan aturan FIFO
   I.S. Q mungkin kosong, tabel penampung elemen Q TIDAK penuh
   F.S. X menjadi Tail yang baru, Tail "maju" */
void DelQueue(Queue *Q, infotype *X) {
  /* Kamus Lokal */
  address i;

  /* Algoritma */
  *X = InfoHeadQ(*Q);
  if (HeadQ(*Q) == TailQ(*Q)) {                                  /* Set menjadi queue kosong */
    HeadQ(*Q) = Nil;
    TailQ(*Q) = Nil;
  }
  else {
    for (i = 1; i <= TailQ(*Q); i++) {
      *((*Q).TQ+i) = *((*Q).TQ+i+1);
    }
    TailQ(*Q)--;
  }
}
/* Proses: Menghapus elemen pertama pada Q dengan aturan FIFO
   I.S. Q tidak kosong
   F.S. X = nilai elemen Head pada I.S.,
        Jika Queue masih isi : Head diset tetap = 1, elemen-elemen setelah
        Head yang lama digeser ke "kiri", Tail = Tail � 1;
        Jika Queue menjadi kosong, Head = Tail = Nil. */