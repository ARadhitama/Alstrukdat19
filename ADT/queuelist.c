#include "queuelist.h"

/* Prototype manajemen memori */
void AlokasiQL (addressQL *P, infotypeQL X) {
	/* Kamus Lokal */

	/* Algoritma */
	*P = (addressQL) malloc (sizeof (ElmtQueuelist));
	if (*P != NilQL) {
    	InfoQL(*P) = X;
    	NextQL(*P) = NilQL;
  	}
  	else {
    	*P = NilQL;
  	}
}
/* I.S. Sembarang */
/* F.S. Alamat P dialokasi, jika berhasil maka Info(P)=X dan
 Next(P)=Nil */
/* P=Nil jika alokasi gagal */
void DealokasiQL (addressQL P) {
	/* Kamus Lokal */

	/* Algoritma */
	free(P);
}
/* I.S. P adalah hasil alokasi, P != Nil */
/* F.S. Alamat P didealokasi, dikembalikan ke sistem */

boolean IsEmptyQueueList (Queuelist Q) {
	/* Kamus Lokal */

	/* Algoritma */
	return ((HeadQL(Q) == NilQL) && (TailQL(Q) == NilQL));
}
/* Mengirim true jika Q kosong: HEAD(Q)=Nil and TAIL(Q)=Nil */
int NbElmtQueueList (Queuelist Q) {
	/* Kamus Lokal */
	int count = 0;
	addressQL P;

	/* Algoritma */
	if (!IsEmptyQueueList(Q)) {
		P = HeadQL(Q);
		while (P != NilQL) {
			count++;
			P = NextQL(P);
		}
	}
	return count;
}
/* Mengirimkan banyaknya elemen Queuelist. Mengirimkan 0 jika Q kosong */
/*** Kreator ***/
void CreateEmptyQueueList (Queuelist * Q) {
	/* Kamus Lokal */

	/* Algoritma */
	HeadQL(*Q) = NilQL;
	TailQL(*Q) = NilQL;
}
/* I.S. sembarang */
/* F.S. Sebuah Q kosong terbentuk */
/*** Primitif Add/Delete ***/
void AddQueueList (Queuelist * Q, infotypeQL X) {
/* Proses: Mengalokasi X dan menambahkan X pada bagian TAIL dari Q
 jika alokasi berhasil; jika alokasi gagal Q tetap */
/* Pada dasarnya adalah proses insert last */
/* I.S. Q mungkin kosong */
/* F.S. X menjadi TAIL, TAIL "maju" */
	/* Kamus Lokal */
	addressQL P;

	/* Algoritma */
	AlokasiQL(&P,X);
	if (P!=NilQL) {
		if (IsEmptyQueueList(*Q)) {
			HeadQL(*Q) = P;
		}
		else {
			NextQL(TailQL(*Q)) = P;
		}
		TailQL(*Q) = P;
	} /* else: alokasi gagal, Q tetap */
}
void DelQueueList (Queuelist * Q, infotypeQL * X) {
/* Proses: Menghapus X pada bagian HEAD dari Q dan mendealokasi
 elemen HEAD */
/* Pada dasarnya operasi delete first */
/* I.S. Q tidak mungkin kosong */
/* F.S. X = nilai elemen HEAD pd I.S., HEAD "mundur" */
	/* Kamus Lokal */
	addressQL P;

	/* Algoritma */
	*X = InfoHeadQL(*Q);
	P = HeadQL(*Q);
	HeadQL(*Q) = NextQL(HeadQL(*Q));
	if (HeadQL(*Q)==NilQL) {
 		TailQL(*Q) = NilQL;
	}
	NextQL(P) = NilQL;
	DealokasiQL(P);
}