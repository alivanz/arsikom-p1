// Praktikum EL3111 Arsitektur Sistem Komputer
// Modul : 1
// Percobaan : 9
// Tanggal : 7 Oktober 2016
// Kelompok : 6
// Rombongan : E
// Nama (NIM) 1 : Alivan Akbar (13214135)
// Nama (NIM) 2 : Ricky Winata (13214136)
// Nama File : fibo_main.c
// Deskripsi : Mencetak deretan fibonacci

#include <stdio.h>
#include "fibo.h"

long unsigned fibonacci(int n){
  long unsigned a = 1;
  long unsigned b = 1;
  printf("%lu", a);
  n -= 1;
  while(n>0){
    printf(" %lu", b);
    b = a+b;
    a = b;
    n -= 1;
  }
  printf("\n");
}
