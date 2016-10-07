// Praktikum EL3111 Arsitektur Sistem Komputer
// Modul : 1
// Percobaan : 7
// Tanggal : 7 Oktober 2016
// Kelompok : 6
// Rombongan : E
// Nama (NIM) 1 : Ricky Winata (13214136)
// Nama (NIM) 2 : Alivan akbar (13214135)
// Nama File : main.c
// Deskripsi : Demonstrasi header file
#include <stdio.h>
#include "add.h"

int main (void) {
	int x,y;
	printf ("masukkan input: \n");
	scanf ("%d %d", &x, &y);
	printf ("hasil = %d\n", sum (x,y));
	
	return 0;
}