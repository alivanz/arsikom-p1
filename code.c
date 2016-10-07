// Praktikum EL3111 Arsitektur Sistem Komputer
// Modul : 1
// Percobaan : 1
// Tanggal : 07 Oktober 2016
// Kelompok : NA
// Rombongan : NA
// Nama (NIM) 1 : Alivan Akbar(13214135)
// Nama (NIM) 2 : Ricky Winata (13214136)
// Nama File : code.c
// Deskripsi : Demonstrasi proses kompilasi C
// Menjumlahkan deret bilangan sebanyak N_LOOP
#define N_LOOP 500

int main(void){
  int indeks;
  int accumulator;
  indeks = 0;
  accumulator = 0;
  while(indeks<N_LOOP){
    accumulator = accumulator + indeks;
    indeks = indeks + 1;
  }
  return accumulator;
}
