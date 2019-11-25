/* File: point.h */
/* Tanggal: 28 Agustus 2016 */
/* *** Definisi ABSTRACT DATA TYPE POINT *** */
/*  NIM             : 18217017
    Nama            : Ariq Radhitama A.      
    Tanggal         : 12 September 2019
    Topik praktikum : Point
    Deskripsi       : implementasi point.h
*/

#include "boolean.h"
#include "point.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"

/* *** DEFINISI PROTOTIPE PRIMITIF *** */
/* *** Konstruktor membentuk POINT *** */
POINT MakePOINT (int X, int Y) {
    POINT P;
    P.X = X;
    P.Y = Y;
    return P;
}
/* Membentuk sebuah POINT dari komponen-komponennya */

/* *** KELOMPOK Interaksi dengan I/O device, BACA/TULIS  *** */                                                 
void BacaPOINT (POINT * P) {
    int a,b;
    scanf("%f %f", &a, &b);
    (*P).X = a;
    (*P).Y = b;
}
/* Membaca nilai absis dan ordinat dari keyboard dan membentuk 
   POINT P berdasarkan dari nilai absis dan ordinat tersebut */
/* Komponen X dan Y dibaca dalam 1 baris, dipisahkan 1 buah spasi */
/* Contoh: 1 2 
   akan membentuk POINT <1,2> */
/* I.S. Sembarang */
/* F.S. P terdefinisi */
void TulisPOINT (POINT P){
    printf("(%f,%f)\n", P.X, P.Y);
}
/* Nilai P ditulis ke layar dengan format "(X,Y)" 
   tanpa spasi, enter, atau karakter lain di depan, belakang, 
   atau di antaranya */
/* I.S. P terdefinisi */
/* F.S. P tertulis di layar dengan format "(X,Y)" */                

/* *** Kelompok operasi relasional terhadap POINT *** */
boolean EQ (POINT P1, POINT P2){
    return((P1.X == P2.X) && (P1.Y == P2.Y));
}
/* Mengirimkan true jika P1 = P2 : absis dan ordinatnya sama */
boolean NEQ (POINT P1, POINT P2){
    return((P1.X != P2.X) || (P1.Y != P2.Y));
}
/* Mengirimkan true jika P1 tidak sama dengan P2 */

/* *** Kelompok menentukan di mana P berada *** */
boolean IsOrigin (POINT P){
    return ((P.X == 0) && (P.Y == 0));
}
/* Menghasilkan true jika P adalah titik origin */
boolean IsOnSbX (POINT P){
    return (P.Y == 0);
}
/* Menghasilkan true jika P terletak Pada sumbu X */
boolean IsOnSbY (POINT P){
    return(P.X == 0);
}
/* Menghasilkan true jika P terletak pada sumbu Y */
int Kuadran (POINT P) {
    if ((P.X > 0) && (P.Y > 0)) {
        return 1;
    } else if ((P.X > 0) && (P.Y < 0)) {
        return 4;
    } else if ((P.X < 0) && (P.Y > 0)) {
        return 2;
    } else if ((P.X < 0) && (P.Y < 0)) {
        return 3;
    }
}
/* Menghasilkan kuadran dari P: 1, 2, 3, atau 4 */
/* Prekondisi : P bukan titik origin, */
/*              dan P tidak terletak di salah satu sumbu */

/* *** KELOMPOK OPERASI LAIN TERHADAP TYPE *** */
POINT PlusDelta (POINT P, int deltaX, int deltaY){
    return(MakePOINT(P.X+deltaX, P.Y+deltaY));
}
/* Mengirim salinan P yang absisnya adalah Absis(P) + deltaX dan ordinatnya adalah Ordinat(P) + deltaY */
void Geser (POINT *P, int deltaX, int deltaY){
    (*P).X = (*P).X+deltaY;
    (*P).Y = (*P).Y+deltaY;
}
/* I.S. P terdefinisi */
/* F.S. P digeser, absisnya sebesar deltaX dan ordinatnya sebesar deltaY */
int Jarak0 (POINT P){
    return( sqrt((P.X * P.X) + (P.Y*P.Y)));
}
/* Menghitung jarak P ke (0,0) */
int Panjang (POINT P1, POINT P2){
    return (sqrt(((P1.X-P2.X)*(P1.X-P2.X))+((P1.Y-P2.Y)*(P1.Y-P2.Y))));
}
/* Menghitung panjang garis yang dibentuk P1 dan P2 */
/* Perhatikanlah bahwa di sini spec fungsi kurang baik sebab menyangkut ADT Garis. */
/* Tuliskan spec fungsi yang lebih tepat. */
