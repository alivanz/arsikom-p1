// Praktikum EL3111 Arsitektur Sistem Komputer
// Modul : 1
// Percobaan : 9
// Tanggal : 7 Oktober 2016
// Kelompok : 6
// Rombongan : E
// Nama (NIM) 1 : Alivan Akbar (13214135)
// Nama (NIM) 2 : Ricky Winata (13214136)
// Nama File : fibo_main.c
// Deskripsi : Input Validator

#include <stdio.h>
#include "inputn.h"

int getPositive(){
  int ret;
  while(1){
    printf("Masukkan n : ");
    scanf("%d", &ret);
    if(ret>1){
      break;
    }
    printf("Input tidak valid, n >= 2\n");
  }
  return ret;
}
