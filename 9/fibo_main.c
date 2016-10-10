// Praktikum EL3111 Arsitektur Sistem Komputer
// Modul : 1
// Percobaan : 9
// Tanggal : 7 Oktober 2016
// Kelompok : 6
// Rombongan : E
// Nama (NIM) 1 : Alivan Akbar (13214135)
// Nama (NIM) 2 : Ricky Winata (13214136)
// Nama File : fibo_main.c
// Deskripsi : Main program fibonacci
// Memanggil prosedur test pada fibo.c dan inputn.c

#include "fibo.h"
#include "inputn.h"

int main(){
  fibonacci( getPositive() );
  return 0;
}
