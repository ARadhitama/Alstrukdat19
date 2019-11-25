
#include "listlinier.h"
#include <stdio.h>
#include "stdlib.h"


/* PROTOTYPE */
/****************** TEST LIST KOSONG ******************/
boolean IsEmptyListLinear (List L) {
	/* Kamus Lokal */

	/* Algoritma */
	return (FirstL(L) == NilL);
}
/* Mengirim true jika list kosong */

/****************** PEMBUATAN LIST KOSONG ******************/
void CreateEmptyListLinear (List *L) {
	/* Kamus Lokal */

	/* Algoritma */
	FirstL(*L) = NilL;
}
/* I.S. sembarang             */
/* F.S. Terbentuk list kosong */

/****************** Manajemen Memori ******************/
addressL AlokasiListLinear (infotypeL X) {
	/* Kamus Lokal */
	addressL P;

	/* Algoritma */
	P = (addressL) malloc (sizeof(ElmtList));
  	if (P != NilL) {
    	InfoL(P) = X;
    	NextL(P) = NilL;
    	return P;
  	}
  	else {                                                        /* Alokasi gagal */
    	return NilL;
  	}
}
/* Mengirimkan address hasil alokasi sebuah elemen */
/* Jika alokasi berhasil, maka address tidak nil, dan misalnya */
/* menghasilkan P, maka info(P)=X, Next(P)=Nil */
/* Jika alokasi gagal, mengirimkan Nil */
void DealokasiListLinear (addressL *P) {
	/* Kamus Lokal */

	/* Algoritma */
	// *P = Nil;
	free(*P);
}
/* I.S. P terdefinisi */
/* F.S. P dikembalikan ke sistem */
/* Melakukan dealokasi/pengembalian address P */

/****************** PENCARIAN SEBUAH ELEMEN LIST ******************/
addressL SearchL (List L, infotypeL X) {
	/* Kamus Lokal */
	addressL P;

	/* Algoritma */
	P = FirstL(L);
	while (P != NilL) {
		if (InfoL(P) == X) {
			return P;
		}
		else {
			P = NextL(P);
		}
	}
	return NilL;
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
void InsVFirst (List *L, infotypeL X) {
	/* Kamus Lokal */
	addressL P;
	
	/* Algoritma */
	P = AlokasiListLinear(X);
	if (P != NilL) {
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
void InsVLast (List *L, infotypeL X) {
	/* Kamus Lokal */
	addressL P;
	
	/* Algoritma */
	P = AlokasiListLinear(X);
	if (P != NilL) {
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
void DelVFirst (List *L, infotypeL *X) {
	/* Kamus Lokal */
	addressL P;
	
	/* Algoritma */
	DelFirst(L, &P);
	*X = InfoL(P);
	DealokasiListLinear(&P);

	// address PDel;
	// *X = Info(First(*L));
	// PDel = First(*L);
	// First(*L) = Next(First(*L));
	// Dealokasi(&PDel);
}
/* I.S. List L tidak kosong  */
/* F.S. Elemen pertama list dihapus: nilai info disimpan pada X */
/*      dan alamat elemen pertama di-dealokasi */
void DelVLast (List *L, infotypeL *X) {
	/* Kamus Lokal */
	addressL P;
	
	/* Algoritma */
	DelLast(L, &P);
	*X = InfoL(P);
	DealokasiListLinear(&P);

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
void InsertFirst (List *L, addressL P) {
	/* Kamus Lokal */

	/* Algoritma */
	NextL(P) = FirstL(*L);
	FirstL(*L) = P;

	// if (!IsEmpty(*L)) {
	// 	Next(P) = First(*L);
	// }
	// First(*L) = P;
}
/* I.S. Sembarang, P sudah dialokasi  */
/* F.S. Menambahkan elemen ber-address P sebagai elemen pertama */
void InsertAfter (List *L, addressL P, addressL Prec) {
	/* Kamus Lokal */

	/* Algoritma */
	NextL(P) = NextL(Prec);
	NextL(Prec) = P;
}
/* I.S. Prec pastilah elemen list dan bukan elemen terakhir, */
/*      P sudah dialokasi  */
/* F.S. Insert P sebagai elemen sesudah elemen beralamat Prec */
void InsertLast (List *L, addressL P) {
	/* Kamus Lokal */
	addressL Last;

	/* Algoritma */
	if (IsEmptyListLinear(*L)) {
		InsertFirst(L, P);
	}
	else {
		Last = FirstL(*L);
		while (NextL(Last) != NilL) {
			Last = NextL(Last);
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
void DelFirst (List *L, addressL *P) {
	/* Kamus Lokal */

	/* Algoritma */
	*P = FirstL(*L);
	FirstL(*L) = NextL(FirstL(*L));
	NextL(*P) = NilL;
}
/* I.S. List tidak kosong */
/* F.S. P adalah alamat elemen pertama list sebelum penghapusan */
/*      Elemen list berkurang satu (mungkin menjadi kosong) */
/* First element yg baru adalah suksesor elemen pertama yang lama */
void DelP (List *L, infotypeL X) {
	/* Kamus Lokal */
	addressL Prec, Pdel;

	/* Algoritma */
	Prec = FirstL(*L);
	if (InfoL(Prec) == X) {
		DelFirst(L, &Pdel);
	}
	else {
		while (InfoL(NextL(Prec)) != X) {
			Prec = NextL(Prec);
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
void DelLast (List *L, addressL *P) {
	/* Kamus Lokal */
	addressL Last, PrecLast;

	/* Algoritma */
	Last = FirstL(*L);
	PrecLast = NilL;
	while (NextL(Last) != NilL) {
		PrecLast = Last;
		Last = NextL(Last);
	}
	*P = Last;
	if (PrecLast == NilL) {
		FirstL(*L) = NilL;
	}
	else {
		NextL(PrecLast) = NilL;
	}
	// Next(*P) = Nil;
}
/* I.S. List tidak kosong */
/* F.S. P adalah alamat elemen terakhir list sebelum penghapusan  */
/*      Elemen list berkurang satu (mungkin menjadi kosong) */
/* Last element baru adalah predesesor elemen terakhir yg lama, */
/* jika ada */
void DelAfter (List *L, addressL *Pdel, addressL Prec) {
	/* Kamus Lokal */

	/* Algoritma */
	*Pdel = NextL(Prec);
	NextL(Prec) = NextL(NextL(Prec));
	NextL(*Pdel) = NilL;
}
/* I.S. List tidak kosong. Prec adalah anggota list  */
/* F.S. Menghapus Next(Prec): */
/*      Pdel adalah alamat elemen list yang dihapus  */

/****************** PROSES SEMUA ELEMEN LIST ******************/
void PrintInfoL (List L) {
	/* Kamus Lokal */
	addressL P;

	/* Algoritma */
	printf("[");
	P = FirstL(L);
	while (P != NilL) {
		printf("%d", InfoL(P));
		if (NextL(P) != NilL) {
			printf(",");
		}
		P = NextL(P);
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
	addressL P;
	int count;

	/* Algoritma */
	count = 0;
	if (!IsEmptyListLinear(L)) {
		P = FirstL(L);
		do {
			count++;
			P = NextL(P);
		} while (P != NilL);
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