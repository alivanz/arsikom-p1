// Praktikum EL3111 Arsitektur Sistem Komputer
// Modul : 1
// Percobaan : 8
// Tanggal : 7 Oktober 2016
// Kelompok : 6
// Rombongan : E
// Nama (NIM) 1 : Ricky Winata (13214136)
// Nama (NIM) 2 : Alivan akbar (13214135)
// Nama File : sumofsquare.c
// Deskripsi : Demonstrasi procedure call dan stack
// Menghitung jumlah dari kuadrat bilangan
int square (int x)
{
    return x*x;
}

int squaresum (int y, int z)
{
    int temp1 = square(y);
    int temp2 = square(z);
    return temp1+temp2;
}

int main (void)
{
    int a = 5;
    int b = 9;
    return squaresum(a,b);
}
