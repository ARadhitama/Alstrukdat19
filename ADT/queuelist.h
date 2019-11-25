/* File : Queuelistlist.h */
/* Representasi Queuelist dengan list berkait dengan first (HEAD) dan last (TAIL) */
#ifndef _QueueLIST_H
#define _QueueLIST_H
#include "boolean.h"
#include <stdlib.h>
#include "stdlib.h"
#include "point.h"
#include "../kamus.h"

/* Konstanta */
#define Nil NULL

/* Deklarasi infotype */
typedef char infotype;

/* Queuelist dengan representasi berkait dengan pointer */
typedef struct tElmtQueuelist * address;
typedef struct tElmtQueuelist {
	infotype Info;
	address Next;
} ElmtQueuelist;

/* Type Queuelist dengan ciri HEAD dan TAIL : */
typedef struct {
	address HEAD;  /* alamat penghapusan */
	address TAIL;  /* alamat penambahan */
} Queuelist;

/* Selektor */
#define Head(Q) (Q).HEAD
#define Tail(Q) (Q).TAIL
#define InfoHead(Q) (Q).HEAD->Info
#define InfoTail(Q) (Q).TAIL->Info
#define Next(P) (P)->Next
#define Info(P) (P)->Info

/* Prototype manajemen memori */
void Alokasi (address *P, infotype X);
/* I.S. Sembarang */
/* F.S. Alamat P dialokasi, jika berhasil maka Info(P)=X dan
        Next(P)=Nil */
/*      P=Nil jika alokasi gagal */
void Dealokasi (address  P);
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
void AddQueueList (Queuelist * Q, infotype X);
/* Proses: Mengalokasi X dan menambahkan X pada bagian TAIL dari Q
   jika alokasi berhasil; jika alokasi gagal Q tetap */
/* Pada dasarnya adalah proses insert last */
/* I.S. Q mungkin kosong */
/* F.S. X menjadi TAIL, TAIL "maju" */
void DelQueueList (Queuelist * Q, infotype * X);
/* Proses: Menghapus X pada bagian HEAD dari Q dan mendealokasi
   elemen HEAD */
/* Pada dasarnya operasi delete first */
/* I.S. Q tidak mungkin kosong */
/* F.S. X = nilai elemen HEAD pd I.S., HEAD "mundur" */

#endif