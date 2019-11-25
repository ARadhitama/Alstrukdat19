#include <stdio.h>
#include "matriks.h"
#include "boolean.h"

void MakeMATRIKS (int NB, int NK, MATRIKS * M)
/* Membentuk sebuah MATRIKS "kosong" yang siap diisi berukuran NB x NK di "ujung kiri" memori */
/* I.S. NB dan NK adalah valid untuk memori matriks yang dibuat */
/* F.S. Matriks M sesuai dengan definisi di atas terbentuk */
{
  NBrsEff(*M) = NB;
  NKolEff(*M) = NK;
}

boolean IsIdxValid (int i, int j)
/* Mengirimkan true jika i, j adalah indeks yang valid untuk matriks apa pun */
{
  if ((i<=BrsMax) && (i>=BrsMin) && (j>=KolMin) && (j<=KolMax)) {
    return true;
  }
  else {
    return false;
  }
}


indeks GetFirstIdxBrs (MATRIKS M)
/* Mengirimkan indeks baris terkecil M */
{
  return BrsMin;
}



indeks GetFirstIdxKol (MATRIKS M)
/* Mengirimkan indeks kolom terkecil M */
{
    return KolMin;
}


indeks GetLastIdxBrs (MATRIKS M)
/* Mengirimkan indeks baris terbesar M */
{
  return NBrsEff(M);
}


indeks GetLastIdxKol (MATRIKS M)
/* Mengirimkan indeks kolom terbesar M */
{
  return NKolEff(M);
}

boolean IsIdxEff (MATRIKS M, indeks i, indeks j)
/* Mengirimkan true jika i, j adalah indeks efektif bagi M */
{
  if ((i<= NBrsEff(M)) && (j<=NKolEff(M)) && IsIdxValid(i,j)) {
    return true;
  }
  else {
    return false;
  }
}


ElTypeM GetElmtDiagonal (MATRIKS M, indeks i)
/* Mengirimkan elemen M(i,i) */
{
  return Elmt(M,i,i);
}



/* ********** Assignment  MATRIKS ********** */
void CopyMATRIKS (MATRIKS MIn, MATRIKS * MHsl)
/* Melakukan assignment MHsl  MIn */
{
  int i,j;
  NBrsEff(*MHsl) = NBrsEff(MIn);
  NKolEff(*MHsl) = NKolEff(MIn);
  for (i=1;i<=NBrsEff(MIn);i++){
    for (j=1;j<=NKolEff(MIn);j++){
      Elmt(*MHsl,i,j) = Elmt(MIn,i,j);
    }
  }
}



/* ********** KELOMPOK BACA/TULIS ********** */

void TulisMATRIKS (MATRIKS M)
/* I.S. M terdefinisi */
/* F.S. Nilai M(i,j) ditulis ke layar per baris per kolom, masing-masing elemen per baris
   dipisahkan sebuah spasi */
/* Proses: Menulis nilai setiap elemen M ke layar dengan traversal per baris dan per kolom */
/* Contoh: menulis matriks 3x3 (ingat di akhir tiap baris, tidak ada spasi)
1 2 3
4 5 6
8 9 10
*/
{
  int i,j;
  //Membuat border a


  for (i=1;i<=NBrsEff(M);i++) {


    for (j=1;j<=NKolEff(M);j++) {

      if ((j==NKolEff(M)) && (i!=NBrsEff(M))) {
        printf(" %c |\n",Elmt(M,i,j));
      }
      else if ((j==NKolEff(M)) && (i==NBrsEff(M))) {
        printf(" %c |",Elmt(M,i,j));
      }
      else {
        printf("%s ",Elmt(M,i,j));
      }
    }
  }
}


/* ********** KELOMPOK OPERASI ARITMATIKA TERHADAP TYPE ********** */
