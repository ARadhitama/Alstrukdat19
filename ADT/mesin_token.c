#include "mesin_token.h"

/* State Mesin Token */
boolean EndToken;
Token CToken;

/* { ***** Primitif-Primitif Mesin Token ***** } */
void Ignore_Blank() {
	/* Kamus Lokal */

	/* Algoritma */
	while ((CC == BLANK) && (CC != MARK)) {
		ADV();
	}
}
/*{ Mengabaikan satu atau beberapa BLANK }
{ I.S. : CC sembarang }
{ F.S. : CC ? BLANK atau CC = MARK }*/
void First-Token(char* filename) {
	/* Kamus Lokal */

	/* Algoritma */
	START(filename);
	Ignore_Blank();
	if (CC == MARK) {
		EndToken = true;
	}
	else {
		EndToken = false;
		SalinToken();
	}
}
/* Mengirim token yang pertama */
void ADVTOKEN() {
	/* Kamus Lokal */

	/* Algoritma */
	Ignore_Blank();
	if (CC == MARK) {
		EndToken = true;
	}
	else {
		SalinToken();
	}
}
/*{ I.S. : EndToken = false; CC adalah karakter sesudah karakter terakhir 
         dari Token yg sudah diakuisisi }
{ F.S. : Jika CC = MARK, maka EndToken = true
         atau EndToken = false, CToken adalah Token terakhir yang sudah diakuisisi;
         CC karakter pertama sesudah karakter terakhir Token }*/
void SalinToken() {
	/* Kamus Lokal */
	int i = 1;

	/* Algoritma */
	CToken.Value = 0;
	while ((CC != MARK) && (CC != BLANK)) {
		CToken.Value = (CToken.Value * 10) + CToken.TabToken[i];
		printf("%d\n", CToken.Value);
		ADV();
		i++;
	}
	/*for (;;) {
		CToken.TabToken[i] = CC;
		ADV();
		if ((CC == MARK) || (CC == BLANK)) {
			break;
		}
		else {
			i++;
		}
	}
	CToken.Length = i;*/
}
/*{ Mengakuisisi Token, menyimpan dalam CToken }
{ I.S. : CC adalah karakter pertama dari Token }
{ F.S. : CToken berisi Token yang sudah diakuisisi, jika karakternya melebihi 
         NMax, sisa "Token" dibuang; CC = BLANK atau CC = MARK; CC adalah 
         karakter sesudah karakter terakhir yang diakuisisi }*/

void Next-Token() {

}
/* Mengirim token yang berikutnya */
boolean EndToken() {
	return (IsEOP() || GetCC() == );
}
/* Menghasilkan true jika proses akuisisi mendapat hasil sebuah
token kosong. Merupakan akhir ekspresi */
boolean Operator() {

}
/* Menghasilkan true jika CT adalah operator */
Token Hitung() {

}
/* Menghitung ekspresi, mengkonversi hasil menjadi token */