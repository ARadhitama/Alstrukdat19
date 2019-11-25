
#include "listlinier.h"
#include <stdio.h>
#include "stdlib.h"

#define Nil NULL

/* PROTOTYPE */
/****************** TEST LIST KOSONG ******************/
boolean IsEmptyListLinear (List L) {
	/* Kamus Lokal */

	/* Algoritma */
	return (First(L) == Nil);
}
/* Mengirim true jika list kosong */

/****************** PEMBUATAN LIST KOSONG ******************/
void CreateEmptyListLinear (List *L) {
	/* Kamus Lokal */

	/* Algoritma */
	First(*L) = Nil;
}
/* I.S. sembarang             */
/* F.S. Terbentuk list kosong */

/****************** Manajemen Memori ******************/
address AlokasiListLinear (infotype X) {
	/* Kamus Lokal */
	address P;

	/* Algoritma */
	P = (address) malloc (sizeof(ElmtList));
  	if (P != NULL) {
    	Info(P) = X;
    	Next(P) = Nil;
    	return P;
  	}
  	else {                                                        /* Alokasi gagal */
    	return Nil;
  	}
}
/* Mengirimkan address hasil alokasi sebuah elemen */
/* Jika alokasi berhasil, maka address tidak nil, dan misalnya */
/* menghasilkan P, maka info(P)=X, Next(P)=Nil */
/* Jika alokasi gagal, mengirimkan Nil */
void DealokasiListLinear (address *P) {
	/* Kamus Lokal */

	/* Algoritma */
	// *P = Nil;
	free(*P);
}
/* I.S. P terdefinisi */
/* F.S. P dikembalikan ke sistem */
/* Melakukan dealokasi/pengembalian address P */

/****************** PENCARIAN SEBUAH ELEMEN LIST ******************/
address Search (List L, infotype X) {
	/* Kamus Lokal */
	address P;

	/* Algoritma */
	P = First(L);
	while (P != Nil) {
		if (Info(P) == X) {
			return P;
		}
		else {
			P = Next(P);
		}
	}
	return Nil;
}
/* Mencari apakah ada elemen list dengan info(P)= X */
/* Jika ada, mengirimkan address elemen tersebut. */
/* Jika tidak ada, mengirimkan Nil */
//bool FSearch (List L, address P) {
//	/* Kamus Lokal */
//	address Pt;
//	
//	/* Algoritma */
//	Pt = First(L);
//	while (Pt != Nil) {
//		if (Pt == P) {
//			return true;
//		}
//		else {
//			Pt = Next(Pt);
//		}
//	}
//	return false;
//}
/* Mencari apakah ada elemen list yang beralamat P */
/* Mengirimkan true jika ada, false jika tidak ada */
//address SearchPrec (List L, infotype X) {
	/* Kamus Lokal */
//	address P, Prec;
//	
//	/* Algoritma */
//	P = First(L);
//	Prec = Nil;
//	while (P != Nil) {
//		if (Info(P) == X) {
//			return Prec;
//		}
//		else {
//			Prec = P;
//			P = Next(P);
//		}
//	}
//	return Nil;
//}
/* Mengirimkan address elemen sebelum elemen yang nilainya=X */
/* Mencari apakah ada elemen list dengan Info(P)=X */
/* Jika ada, mengirimkan address Prec, dengan Next(Prec)=P dan Info(P)=X. */
/* Jika tidak ada, mengirimkan Nil */
/* Jika P adalah elemen pertama, maka Prec=Nil */
/* Search dengan spesifikasi seperti ini menghindari */
/* traversal ulang jika setelah Search akan dilakukan operasi lain */

/****************** PRIMITIF BERDASARKAN NILAI ******************/
/*** PENAMBAHAN ELEMEN ***/
void InsVFirst (List *L, infotype X) {
	/* Kamus Lokal */
	address P;
	
	/* Algoritma */
	P = Alokasi(X);
	if (P != Nil) {
		InsertFirst(L, P);
	}

	// address PIns;
	// PIns = Alokasi(X);
	// if (PIns != Nil) {
	// 	if (!IsEmpty(*L)) {
	// 		Next(PIns) = First(*L);
	// 	}
	// 	First(*L) = PIns;
	// }
}
/* I.S. L mungkin kosong */
/* F.S. Melakukan alokasi sebuah elemen dan */
/* menambahkan elemen pertama dengan nilai X jika alokasi berhasil */
void InsVLast (List *L, infotype X) {
	/* Kamus Lokal */
	address P;
	
	/* Algoritma */
	P = Alokasi(X);
	if (P != Nil) {
		InsertLast(L, P);
	}

	// address PIns, PLast;
	// PIns = Alokasi(X);
	// if (PIns != Nil) {
	// 	if (IsEmpty(*L)) {
	// 		InsVFirst(L,X);
	// 	}else{
	// 		PLast = First(*L);
	// 		while (Next(PLast) != Nil) {
	// 			PLast = Next(PLast);
	// 		}
	// 		Next(PLast) = PIns;
	// 	}
	// }
}
/* I.S. L mungkin kosong */
/* F.S. Melakukan alokasi sebuah elemen dan */
/* menambahkan elemen list di akhir: elemen terakhir yang baru */
/* bernilai X jika alokasi berhasil. Jika alokasi gagal: I.S.= F.S. */

/*** PENGHAPUSAN ELEMEN ***/
void DelVFirst (List *L, infotype *X) {
	/* Kamus Lokal */
	address P;
	
	/* Algoritma */
	DelFirst(L, &P);
	*X = Info(P);
	Dealokasi(&P);

	// address PDel;
	// *X = Info(First(*L));
	// PDel = First(*L);
	// First(*L) = Next(First(*L));
	// Dealokasi(&PDel);
}
/* I.S. List L tidak kosong  */
/* F.S. Elemen pertama list dihapus: nilai info disimpan pada X */
/*      dan alamat elemen pertama di-dealokasi */
void DelVLast (List *L, infotype *X) {
	/* Kamus Lokal */
	address P;
	
	/* Algoritma */
	DelLast(L, &P);
	*X = Info(P);
	Dealokasi(&P);

	// address PDel,PPrev;
	// PPrev = Nil;
	// PDel = First(*L);
	// while (Next(PDel) != Nil) {
	// 	PPrev = PDel;
	// 	PDel = Next(PDel);
	// }
	// *X = Info(PDel);
	// if (PPrev == Nil) {
	// 	First(*L) = Nil;
	// } else {
	// 	Next(PPrev) = Nil;
	// }
	// Dealokasi(&PDel);
}
/* I.S. list tidak kosong */
/* F.S. Elemen terakhir list dihapus: nilai info disimpan pada X */
/*      dan alamat elemen terakhir di-dealokasi */

/****************** PRIMITIF BERDASARKAN ALAMAT ******************/
/*** PENAMBAHAN ELEMEN BERDASARKAN ALAMAT ***/
void InsertFirst (List *L, address P) {
	/* Kamus Lokal */

	/* Algoritma */
	Next(P) = First(*L);
	First(*L) = P;

	// if (!IsEmpty(*L)) {
	// 	Next(P) = First(*L);
	// }
	// First(*L) = P;
}
/* I.S. Sembarang, P sudah dialokasi  */
/* F.S. Menambahkan elemen ber-address P sebagai elemen pertama */
void InsertAfter (List *L, address P, address Prec) {
	/* Kamus Lokal */

	/* Algoritma */
	Next(P) = Next(Prec);
	Next(Prec) = P;
}
/* I.S. Prec pastilah elemen list dan bukan elemen terakhir, */
/*      P sudah dialokasi  */
/* F.S. Insert P sebagai elemen sesudah elemen beralamat Prec */
void InsertLast (List *L, address P) {
	/* Kamus Lokal */
	address Last;

	/* Algoritma */
	if (IsEmptyListLinear(*L)) {
		InsertFirst(L, P);
	}
	else {
		Last = First(*L);
		while (Next(Last) != Nil) {
			Last = Next(Last);
		}
		InsertAfter(L, P, Last);
	}

	// if (IsEmpty(*L)) {
	// 	InsertFirst(L,P);
	// }else{
	// 	address PLast;
	// 	PLast = First(*L);
	// 	while (Next(PLast) != Nil) {
	// 		PLast = Next(PLast);
	// 	}
	// 	Next(P) = Nil;
	// 	Next(PLast) = P;
	// }
}
/* I.S. Sembarang, P sudah dialokasi  */
/* F.S. P ditambahkan sebagai elemen terakhir yang baru */

/*** PENGHAPUSAN SEBUAH ELEMEN ***/
void DelFirst (List *L, address *P) {
	/* Kamus Lokal */

	/* Algoritma */
	*P = First(*L);
	First(*L) = Next(First(*L));
	Next(*P) = Nil;
}
/* I.S. List tidak kosong */
/* F.S. P adalah alamat elemen pertama list sebelum penghapusan */
/*      Elemen list berkurang satu (mungkin menjadi kosong) */
/* First element yg baru adalah suksesor elemen pertama yang lama */
void DelP (List *L, infotype X) {
	/* Kamus Lokal */
	address Prec, Pdel;

	/* Algoritma */
	Prec = First(*L);
	if (Info(Prec) == X) {
		DelFirst(L, &Pdel);
	}
	else {
		while (Info(Next(Prec)) != X) {
			Prec = Next(Prec);
		}
		DelAfter(L, &Pdel, Prec);
	}

	// if (!IsEmpty(*L)) {
	// 	address Pt,PPrev;
	// 	PPrev = Nil;
	// 	Pt = First(*L);
	// 	while (Next(Pt) != Nil && Info(Pt) != X) {
	// 		PPrev = Pt;
	// 		Pt = Next(Pt);
	// 	}
	// 	if (Info(Pt) == X) {
	// 		if (PPrev == Nil) {
	// 			First(*L) = Next(First(*L));
	// 		} else {
	// 			Next(PPrev) = Next(Pt);
	// 		}
	// 		Dealokasi(&Pt);
	// 	}
	// }
}
/* I.S. Sembarang */
/* F.S. Jika ada elemen list beraddress P, dengan info(P)=X  */
/* Maka P dihapus dari list dan di-dealokasi */
/* Jika tidak ada elemen list dengan info(P)=X, maka list tetap */
/* List mungkin menjadi kosong karena penghapusan */
void DelLast (List *L, address *P) {
	/* Kamus Lokal */
	address Last, PrecLast;

	/* Algoritma */
	Last = First(*L);
	PrecLast = Nil;
	while (Next(Last) != Nil) {
		PrecLast = Last;
		Last = Next(Last);
	}
	*P = Last;
	if (PrecLast == Nil) {
		First(*L) = Nil;
	}
	else {
		Next(PrecLast) = Nil;
	}
	// Next(*P) = Nil;
}
/* I.S. List tidak kosong */
/* F.S. P adalah alamat elemen terakhir list sebelum penghapusan  */
/*      Elemen list berkurang satu (mungkin menjadi kosong) */
/* Last element baru adalah predesesor elemen terakhir yg lama, */
/* jika ada */
void DelAfter (List *L, address *Pdel, address Prec) {
	/* Kamus Lokal */

	/* Algoritma */
	*Pdel = Next(Prec);
	Next(Prec) = Next(Next(Prec));
	Next(*Pdel) = Nil;
}
/* I.S. List tidak kosong. Prec adalah anggota list  */
/* F.S. Menghapus Next(Prec): */
/*      Pdel adalah alamat elemen list yang dihapus  */

/****************** PROSES SEMUA ELEMEN LIST ******************/
void PrintInfo (List L) {
	/* Kamus Lokal */
	address P;

	/* Algoritma */
	printf("[");
	P = First(L);
	while (P != Nil) {
		printf("%d", Info(P));
		if (Next(P) != Nil) {
			printf(",");
		}
		P = Next(P);
	}
	printf("]");
}
/* I.S. List mungkin kosong */
/* F.S. Jika list tidak kosong, isi list dicetak ke kanan: [e1,e2,...,en] */
/* Contoh : jika ada tiga elemen bernilai 1, 20, 30 akan dicetak: [1,20,30] */
/* Jika list kosong : menulis [] */
/* Tidak ada tambahan karakter apa pun di awal, akhir, atau di tengah */
int NbElmt (List L) {
	/* Kamus Lokal */
	address P;
	int count;

	/* Algoritma */
	count = 0;
	if (!IsEmptyListLinear(L)) {
		P = First(L);
		do {
			count++;
			P = Next(P);
		} while (P != Nil);
	}
	return count;

	// int count=0;
	// if (!IsEmpty(L)) {
	// 	address Pt = First(L);
	// 	while (Pt != Nil) {
	// 		count++;
	// 		Pt = Next(Pt);
	// 	}
	// }
	// return count;
}
/* Mengirimkan banyaknya elemen list; mengirimkan 0 jika list kosong */

/*** Prekondisi untuk Max/Min/rata-rata : List tidak kosong ***/
 infotype Max (List L){
 	address Pt;
 	infotype max;
 	Pt = Next(First(L));
 	max = Info(First(L));
 	while (Pt != Nil) {
 		if (Info(Pt)>max) {
 			max = Info(Pt);
 		}
 		Pt = Next(Pt);
 	}
 	return max;
 }
/* Mengirimkan nilai Info(P) yang maksimum */

/****************** PROSES TERHADAP LIST ******************/
 void Konkat1 (List *L1, List *L2, List *L3){
 	CreateEmpty(L3);
 	address PTemp;
 	while (!IsEmptyListLinear(*L1)) {
 		DelFirst(L1,&PTemp);
 		InsertLast(L3,PTemp);
 	}
 	while (!IsEmptyListLinear(*L2)) {
 		DelFirst(L2,&PTemp);
 		InsertLast(L3,PTemp);
 	}
 }
/* I.S. L1 dan L2 sembarang */
/* F.S. L1 dan L2 kosong, L3 adalah hasil konkatenasi L1 & L2 */
/* Konkatenasi dua buah list : L1 dan L2    */
/* menghasilkan L3 yang baru (dengan elemen list L1 dan L2) */
/* dan L1 serta L2 menjadi list kosong.*/
/* Tidak ada alokasi/dealokasi pada prosedur ini */