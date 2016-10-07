// Praktikum EL3111 Arsitektur Sistem Komputer
// Modul : 1
// Percobaan : 7
// Tanggal : 7 Oktober 2016
// Kelompok : 6
// Rombongan : E
// Nama (NIM) 1 : Ricky Winata (13214136)
// Nama (NIM) 2 : Alivan akbar (13214135)
// Nama File : add.c
// Deskripsi : Demonstrasi header file
// Menjumlahkan dua bilangan
#define START_VAL 0
#include "add.h"
int accum = START_VAL;
int sum(int x, int y)
{
int t = x + y;
accum += t;
return t;
}