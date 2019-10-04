/* MODUL TABEL INTEGER */
/* Berisi definisi dan semua primitif pemrosesan tabel integer */
/* Penempatan elemen selalu rapat kiri */
/*  NIM             : 18217017
    Nama            : Ariq Radhitama A.      
    Tanggal         : 12 September 2019
    Topik praktikum : array
    Deskripsi       : implementasi array.h
*/
#include "boolean.h"
#include "array.h"
#include "stdio.h"
#include "stdlib.h"


/* ********** KONSTRUKTOR ********** */
/* Konstruktor : create tabel kosong  */
void MakeEmpty (TabInt * T) {
/* I.S. T sembarang */
/* F.S. Terbentuk tabel T kosong dengan kapasitas IdxMax-IdxMin+1 */
	(*T).Neff = 0;
}
/* ********** SELEKTOR ********** */
/* *** Banyaknya elemen *** */
int NbElmt (TabInt T) {
/* Mengirimkan banyaknya elemen efektif tabel */
/* Mengirimkan nol jika tabel kosong */
	return(T.Neff);
}
/* *** Daya tampung container *** */
int MaxNbEl (TabInt T) {
/* Mengirimkan maksimum elemen yang dapat ditampung oleh tabel */
	return (IdxMax - IdxMin + 1);
}
/* *** Selektor INDEKS *** */
IdxType GetFirstIdx (TabInt T) {
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen T pertama */
	return (IdxMin);
}
IdxType GetLastIdx (TabInt T) {
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen T terakhir */
	return (IdxMin + NbElmt(T) -1 );
}
ElType GetElmt (TabInt T, IdxType i) {
/* Prekondisi : Tabel tidak kosong, i antara FirstIdx(T)..LastIdx(T) */
/* Mengirimkan elemen tabel yang ke-i */
	return (T.TI[i]);
}
/* *** Selektor SET : Mengubah nilai TABEL dan elemen tabel *** */
/* Untuk type private/limited private pada bahasa tertentu */
void SetTab (TabInt Tin, TabInt *Tout) {
/* I.S. Tin terdefinisi, sembarang */
/* F.S. Tout berisi salinan Tin */
/* Assignment THsl -> Tin */
	*Tout = Tin;
}
	
void SetEl (TabInt *T, IdxType i, ElType v) {
/* I.S. T terdefinisi, sembarang */
/* F.S. Elemen T yang ke-i bernilai v */
/* Mengeset nilai elemen tabel yang ke-i sehingga bernilai v */
	(*T).TI[i] = v;
}
void SetNeff (TabInt *T, IdxType N) {
/* I.S. T terdefinisi, sembarang */
/* F.S. Nilai indeks efektif T bernilai N */
/* Mengeset nilai indeks elemen efektif sehingga bernilai N */
/* ********** Test Indeks yang valid ********** */
	(*T).Neff=N;
}
boolean IsIdxValid (TabInt T, IdxType i) {
/* Mengirimkan true jika i adalah indeks yang valid utk ukuran tabel */
/* yaitu antara indeks yang terdefinisi utk container*/
	return ((IdxMin <= i) && (i <= IdxMax));
}

boolean IsIdxEff (TabInt T, IdxType i) {
/* Prekondisi : i sembarang*/
/* Mengirimkan true jika i adalah indeks yang terdefinisi utk tabel */
/* yaitu antara FirstIdx(T)..LastIdx(T) */
	return ((GetFirstIdx(T) <= i) && (i <= GetLastIdx(T)));
}
/* ********** TEST KOSONG/PENUH ********** */
/* *** Test tabel kosong *** */
boolean IsEmpty (TabInt T) {
/* Mengirimkan true jika tabel T kosong, mengirimkan false jika tidak */
	return (NbElmt(T) == 0);
}
/* *** Test tabel penuh *** */
boolean IsFull (TabInt T) {
/* Mengirimkan true jika tabel T penuh, mengirimkan false jika tidak */
	return (NbElmt(T) == IdxMax);
}
