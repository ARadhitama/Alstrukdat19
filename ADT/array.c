#include "boolean.h"
#include "array.h"

/* ******************** IMPLEMENTASI ******************** */

/* ********** KONSTRUKTOR ********** */
/* Konstruktor : create tabel kosong */
void MakeEmptyA (TabIntA *T) {
	SetNeffA(T, 0);
}
/* I.S. sembarang */
/* F.S. Terbentuk tabel T kosong dengan kapasitas IdxMax-IdxMin+1 */

/* ********** SELEKTOR ********** */
/* *** Banyaknya elemen *** */
int NbElmtArray (TabIntA T) {
	return T.NeffA;
}
/* Mengirimkan banyaknya elemen efektif tabel */
/* Mengirimkan nol jika tabel kosong */
/* *** Daya tampung container *** */
int MaxNbElA (TabIntA T) {
	return (IdxMaxA - IdxMinA + 1);
}
/* Mengirimkan maksimum elemen yang dapat ditampung oleh tabel */
/* *** Selektor INDEKS *** */
IdxTypeA GetFirstIdxA (TabIntA T) {
	if (T.NeffA != 0) {
		return IdxMinA;
	}
}
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen pertama */
IdxTypeA GetLastIdxA (TabIntA T) {
	if (T.NeffA != 0) {
		return (IdxMinA + NbElmtA(T) - 1);
	}
}
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen terakhir */
/* *** Menghasilkan sebuah elemen *** */
ElTypeA GetElmtA (TabIntA T, IdxTypeA i) {
	if (T.NeffA != 0) {
		if ((i >= IdxMinA) && (i <= T.NeffA)) {
			return T.TI[i - IdxMinA];
		}
	}
}
/* Prekondisi : Tabel tidak kosong, i antara FirstIdx(T)..LastIdx(T) */
/* Mengirimkan elemen tabel yang ke-i */

/* *** Selektor SET : Mengubah nilai TABEL dan elemen tabel *** */
/* Untuk type private/limited private pada bahasa tertentu */
void SetTabA (TabIntA Tin, TabIntA *Tout) {
	/* Kamus lokal */
	int i;

	/* Algoritma */
	for (i = 1; i <= NbElmtA(Tin); i++) {
		SetElA(Tout, i, GetElmtA(Tin, i));
	}
	SetNeffA(Tout, Tin.NeffA);
}
/* I.S. Tin terdefinisi, sembarang */
/* F.S. Tout berisi salinan Tin */
/* Assignment THsl -> Tin */
void SetElA (TabIntA *T, IdxTypeA i, ElTypeA v) {
	(*T).TI[i - IdxMinA] = v;
	if (i > NbElmtA(*T)) {
		SetNeffA(T, (NbElmtA(*T) + 1));
	}
}
/* I.S. T terdefinisi, sembarang */
/* F.S. Elemen T yang ke-i bernilai v */
/* Mengeset nilai elemen tabel yang ke-i sehingga bernilai v */
void SetNeffA (TabIntA *T, IdxTypeA N) {
	(*T).NeffA = N;
}
/* I.S. T terdefinisi, sembarang */
/* F.S. Nilai indeks efektif T bernilai N */
/* Mengeset nilai indeks elemen efektif sehingga bernilai N */

/* ********** Test Indeks yang valid ********** */
boolean IsIdxValidArray (TabIntA T, IdxTypeA i) {
	if ((i >= IdxMinA) && (i <= IdxMaxA)) {
		return true;
	}
	return false;
}
/* Prekondisi : i sembarang */
/* Mengirimkan true jika i adalah indeks yang valid utk ukuran tabel */
/* yaitu antara indeks yang terdefinisi utk container*/
boolean IsIdxEffArray (TabIntA T, IdxTypeA i) {
	if ((i >= GetFirstIdxA(T)) && (i <= GetLastIdxA(T))) {
		return true;
	}
	return false;
}
/* Prekondisi : i sembarang*/
/* Mengirimkan true jika i adalah indeks yang terdefinisi utk tabel */
/* yaitu antara FirstIdx(T)..LastIdx(T) */

/* ********** TEST KOSONG/PENUH ********** */
/* *** Test tabel kosong *** */
boolean IsEmptyA (TabIntA T) {
	if (NbElmtA(T) == 0) {
		return true;
	}
	return false;
}
/* Mengirimkan true jika tabel T kosong, mengirimkan false jika tidak */
/* *** Test tabel penuh *** */
boolean IsFullA (TabIntA T) {
	if (NbElmtA(T) == IdxMaxA) {
		return true;
	}
	return false;
}
/* Mengirimkan true jika tabel T penuh, mengirimkan false jika tidak */