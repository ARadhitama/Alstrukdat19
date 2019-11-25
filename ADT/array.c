#include "boolean.h"
#include "array.h"

/* ******************** IMPLEMENTASI ******************** */

/* ********** KONSTRUKTOR ********** */
/* Konstruktor : create tabel kosong */
void MakeEmpty (TabInt *T) {
	SetNeff(T, 0);
}
/* I.S. sembarang */
/* F.S. Terbentuk tabel T kosong dengan kapasitas IdxMax-IdxMin+1 */

/* ********** SELEKTOR ********** */
/* *** Banyaknya elemen *** */
int NbElmtArray (TabInt T) {
	return T.Neff;
}
/* Mengirimkan banyaknya elemen efektif tabel */
/* Mengirimkan nol jika tabel kosong */
/* *** Daya tampung container *** */
int MaxNbEl (TabInt T) {
	return (IdxMax - IdxMin + 1);
}
/* Mengirimkan maksimum elemen yang dapat ditampung oleh tabel */
/* *** Selektor INDEKS *** */
IdxType GetFirstIdx (TabInt T) {
	if (T.Neff != 0) {
		return IdxMin;
	}
}
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen pertama */
IdxType GetLastIdx (TabInt T) {
	if (T.Neff != 0) {
		return (IdxMin + NbElmt(T) - 1);
	}
}
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen terakhir */
/* *** Menghasilkan sebuah elemen *** */
ElType GetElmt (TabInt T, IdxType i) {
	if (T.Neff != 0) {
		if ((i >= IdxMin) && (i <= T.Neff)) {
			return T.TI[i - IdxMin];
		}
	}
}
/* Prekondisi : Tabel tidak kosong, i antara FirstIdx(T)..LastIdx(T) */
/* Mengirimkan elemen tabel yang ke-i */

/* *** Selektor SET : Mengubah nilai TABEL dan elemen tabel *** */
/* Untuk type private/limited private pada bahasa tertentu */
void SetTab (TabInt Tin, TabInt *Tout) {
	/* Kamus lokal */
	int i;

	/* Algoritma */
	for (i = 1; i <= NbElmt(Tin); i++) {
		SetEl(Tout, i, GetElmt(Tin, i));
	}
	SetNeff(Tout, Tin.Neff);
}
/* I.S. Tin terdefinisi, sembarang */
/* F.S. Tout berisi salinan Tin */
/* Assignment THsl -> Tin */
void SetEl (TabInt *T, IdxType i, ElType v) {
	(*T).TI[i - IdxMin] = v;
	if (i > NbElmt(*T)) {
		SetNeff(T, (NbElmt(*T) + 1));
	}
}
/* I.S. T terdefinisi, sembarang */
/* F.S. Elemen T yang ke-i bernilai v */
/* Mengeset nilai elemen tabel yang ke-i sehingga bernilai v */
void SetNeff (TabInt *T, IdxType N) {
	(*T).Neff = N;
}
/* I.S. T terdefinisi, sembarang */
/* F.S. Nilai indeks efektif T bernilai N */
/* Mengeset nilai indeks elemen efektif sehingga bernilai N */

/* ********** Test Indeks yang valid ********** */
boolean IsIdxValidArray (TabInt T, IdxType i) {
	if ((i >= IdxMin) && (i <= IdxMax)) {
		return true;
	}
	return false;
}
/* Prekondisi : i sembarang */
/* Mengirimkan true jika i adalah indeks yang valid utk ukuran tabel */
/* yaitu antara indeks yang terdefinisi utk container*/
boolean IsIdxEffArray (TabInt T, IdxType i) {
	if ((i >= GetFirstIdx(T)) && (i <= GetLastIdx(T))) {
		return true;
	}
	return false;
}
/* Prekondisi : i sembarang*/
/* Mengirimkan true jika i adalah indeks yang terdefinisi utk tabel */
/* yaitu antara FirstIdx(T)..LastIdx(T) */

/* ********** TEST KOSONG/PENUH ********** */
/* *** Test tabel kosong *** */
boolean IsEmpty (TabInt T) {
	if (NbElmt(T) == 0) {
		return true;
	}
	return false;
}
/* Mengirimkan true jika tabel T kosong, mengirimkan false jika tidak */
/* *** Test tabel penuh *** */
boolean IsFull (TabInt T) {
	if (NbElmt(T) == IdxMax) {
		return true;
	}
	return false;
}
/* Mengirimkan true jika tabel T penuh, mengirimkan false jika tidak */