/* File : Queuelistlist.h */
/* Representasi Queuelist dengan list berkait dengan first (HEAD) dan last (TAIL) */
#ifndef _QueueLIST_H
#define _QueueLIST_H
#include "boolean.h"
#include <stdlib.h>
#include "stdlib.h"
#include "point.h"
#include "bidak.h"

/* Konstanta */
#define NilQL NULL

/* Deklarasi infotype */
typedef char infotypeQL;

/* Queuelist dengan representasi berkait dengan pointer */
typedef struct tElmtQueuelist * addressQL;
typedef struct tElmtQueuelist {
	infotypeQL InfoQL;
	addressQL NextQL;
} ElmtQueuelist;

/* Type Queuelist dengan ciri HEAD dan TAIL : */
typedef struct {
	addressQL HEADQL;  /* alamat penghapusan */
	addressQL TAILQL;  /* alamat penambahan */
} Queuelist;

/* Selektor */
#define HeadQL(Q) (Q).HEADQL
#define TailQL(Q) (Q).TAILQL
#define InfoHeadQL(Q) (Q).HEADQL->InfoQL
#define InfoTailQL(Q) (Q).TAILQL->InfoQL
#define NextQL(P) (P)->NextQL
#define InfoQL(P) (P)->InfoQL

/* Prototype manajemen memori */
void AlokasiQL (addressQL *P, infotypeQL X);
/* I.S. Sembarang */
/* F.S. Alamat P dialokasi, jika berhasil maka Info(P)=X dan
        Next(P)=Nil */
/*      P=Nil jika alokasi gagal */
void DealokasiQL (addressQL  P);
/* I.S. P adalah hasil alokasi, P != Nil */
/* F.S. Alamat P didealokasi, dikembalikan ke sistem */
boolean IsEmptyQueueList (Queuelist Q);
/* Mengirim true jika Q kosong: HEAD(Q)=Nil and TAIL(Q)=Nil */
int NbElmtQueueList(Queuelist Q);
/* Mengirimkan banyaknya elemen Queuelist. Mengirimkan 0 jika Q kosong */
/*** Kreator ***/
void CreateEmptyQueueList (Queuelist * Q);
/* I.S. sembarang */
/* F.S. Sebuah Q kosong terbentuk */
/*** Primitif Add/Delete ***/
void AddQueueList (Queuelist * Q, infotypeQL X);
/* Proses: Mengalokasi X dan menambahkan X pada bagian TAIL dari Q
   jika alokasi berhasil; jika alokasi gagal Q tetap */
/* Pada dasarnya adalah proses insert last */
/* I.S. Q mungkin kosong */
/* F.S. X menjadi TAIL, TAIL "maju" */
void DelQueueList (Queuelist * Q, infotypeQL * X);
/* Proses: Menghapus X pada bagian HEAD dari Q dan mendealokasi
   elemen HEAD */
/* Pada dasarnya operasi delete first */
/* I.S. Q tidak mungkin kosong */
/* F.S. X = nilai elemen HEAD pd I.S., HEAD "mundur" */

#endif