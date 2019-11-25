#include "Queuelist.h"

/* Prototype manajemen memori */
void AlokasiQL (address *P, infotype X) {
	/* Kamus Lokal */

	/* Algoritma */
	*P = (address) malloc (sizeof (ElmtQueuelist));
	if (*P != Nil) {
    	Info(*P) = X;
    	Next(*P) = Nil;
  	}
  	else {
    	*P = Nil;
  	}
}
/* I.S. Sembarang */
/* F.S. Alamat P dialokasi, jika berhasil maka Info(P)=X dan
 Next(P)=Nil */
/* P=Nil jika alokasi gagal */
void DealokasiQL (address P) {
	/* Kamus Lokal */

	/* Algoritma */
	free(P);
}
/* I.S. P adalah hasil alokasi, P != Nil */
/* F.S. Alamat P didealokasi, dikembalikan ke sistem */

boolean IsEmptyQueueList (Queuelist Q) {
	/* Kamus Lokal */

	/* Algoritma */
	return ((Head(Q) == Nil) && (TailQL(Q) == Nil));
}
/* Mengirim true jika Q kosong: HEAD(Q)=Nil and TAIL(Q)=Nil */
int NbElmtQueueList (Queuelist Q) {
	/* Kamus Lokal */
	int count = 0;
	address P;

	/* Algoritma */
	if (!IsEmptyQueueList(Q)) {
		P = Head(Q);
		while (P != Nil) {
			count++;
			P = Next(P);
		}
	}
	return count;
}
/* Mengirimkan banyaknya elemen Queuelist. Mengirimkan 0 jika Q kosong */
/*** Kreator ***/
void CreateEmptyQueueList (Queuelist * Q) {
	/* Kamus Lokal */

	/* Algoritma */
	Head(*Q) = Nil;
	Tail(*Q) = Nil;
}
/* I.S. sembarang */
/* F.S. Sebuah Q kosong terbentuk */
/*** Primitif Add/Delete ***/
void AddQueueList (Queuelist * Q, infotype X) {
/* Proses: Mengalokasi X dan menambahkan X pada bagian TAIL dari Q
 jika alokasi berhasil; jika alokasi gagal Q tetap */
/* Pada dasarnya adalah proses insert last */
/* I.S. Q mungkin kosong */
/* F.S. X menjadi TAIL, TAIL "maju" */
	/* Kamus Lokal */
	address P;

	/* Algoritma */
	Alokasi(&P,X);
	if (P!=Nil) {
		if (IsEmptyQueueList(*Q)) {
			Head(*Q) = P;
		}
		else {
			Next(Tail(*Q)) = P;
		}
		Tail(*Q) = P;
	} /* else: alokasi gagal, Q tetap */
}
void DelQueueList (Queuelist * Q, infotype * X) {
/* Proses: Menghapus X pada bagian HEAD dari Q dan mendealokasi
 elemen HEAD */
/* Pada dasarnya operasi delete first */
/* I.S. Q tidak mungkin kosong */
/* F.S. X = nilai elemen HEAD pd I.S., HEAD "mundur" */
	/* Kamus Lokal */
	address P;

	/* Algoritma */
	*X = InfoHead(*Q);
	P = Head(*Q);
	Head(*Q) = Next(Head(*Q));
	if (Head(*Q)==Nil) {
 		Tail(*Q) = Nil;
	}
	Next(P) = Nil;
	Dealokasi(P);
}