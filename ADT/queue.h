/* Modul ADT Queue � Alternatif I */
/* *** Deklarasi Queue yang diimplementasi dengan tabel kontigu *** */
/* *** HEAD dan TAIL adalah alamat elemen pertama dan terakhir *** */
/* *** Queue mampu menampung MaxEl buah elemen *** */

#ifndef __QUEUE_H__
#define __QUEUE_H__

#include "bidak.h"
#include "boolean.h"
#include <stdlib.h>

/* *** konstanta *** */
#define NilQ 0

/* *** Definisi elemen dan address *** */
typedef Bidak infotypeQ;
typedef int addressQ; /* indeks tabel */

/* *** Definisi Type Queue *** */
typedef struct {
    infotypeQ *TQ; /* tabel penyimpan elemen */
    addressQ HEADQ; /* alamat penghapusan */
    addressQ TAILQ; /* alamat penambahan */
    int MaxElQ; /* maksimum banyaknya elemen queue */
} Queue;

/* Definisi Queue kosong: Head = Nil; TAIL = Nil. */
/* Catatan implementasi: T[0] tidak pernah dipakai */

/* Definisi akses dengan Selektor */
#define HeadQ(Q) (Q).HEADQ
#define TailQ(Q) (Q).TAILQ
#define InfoHeadQ(Q) (Q).TQ[(Q).HEADQ]
#define InfoTailQ(Q) (Q).TQ[(Q).TAILQ]
#define MaxElQ(Q) (Q).MaxElQ

/* *** Predikat Pemeriksaan Kondisi Queue *** */
boolean IsEmptyQueue(Queue Q);
/* Mengirim true jika Q kosong */
boolean IsFullQueue(Queue Q);
/* Mengirim true jika tabel penampung elemen Q sudah penuh yaitu mengandung
MaxEl elemen */
int NBElmtQueue(Queue Q);
/* Mengirimkan banyaknya elemen queue. Mengirimkan 0 jika Q kosong. */

/* *** Konstruktor *** */
void CreateEmptyQueue(Queue *Q,int Max);
/* I.S. Max terdefinisi }
   F.S. Sebuah Q kosong terbentuk dan salah satu kondisi sbb :
   Jika alokasi berhasil, tabel memori dialokasi berukuran Max
   atau : jika alokasi gagal, Q kosong dg Maksimum elemen=0
   Proses : Melakukan alokasi memori dan membuat sebuah Q kosong */

/* *** Destruktor *** */
void DeAlokasiQueue(Queue *Q);
/* Proses : Mengembalikan memori Q
   I.S. Q pernah dialokasi
   F.S. Q menjadi tidak terdefinisi lagi, MaxEl(Q) diset 0 */

/* *** Operator-Operator Dasar Queue *** */
void AddQueue(Queue *Q,infotypeQ X);
/* Proses : Menambahkan X pada Q dengan aturan FIFO
   I.S. Q mungkin kosong, tabel penampung elemen Q TIDAK penuh
   F.S. X menjadi TAIL yang baru, TAIL "maju" */
void DelQueue(Queue *Q,infotypeQ *X);
/* Proses: Menghapus elemen pertama pada Q dengan aturan FIFO
   I.S. Q tidak kosong
   F.S. X = nilai elemen HEAD pada I.S.,
        Jika Queue masih isi : HEAD diset tetap = 1, elemen-elemen setelah
        HEAD yang lama digeser ke "kiri", TAIL = TAIL � 1;
        Jika Queue menjadi kosong, HEAD = TAIL = Nil. */

#endif // __QUEUE_H__