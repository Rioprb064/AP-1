#include <iostream>
using namespace std;

//Fungsi tanpa nilai balikan
void tampilkanPesan() {
    cout<<"==== SELAMAT DATANG DI AP 1 ===="<<endl;
}

//Fungsi dengan nilai balikan
int tambah(int a, int b) {
    return a + b;
}

//Fungsi Overload
int kali (int a, int b) {
    return a * b;
}

double kali (double a, double b) {
    return a * b;
}

//Fungsi Rekursif : menghitung nilai faktorial
int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n-1);
    }
}

int main() {
    system("cls");

    //menggunakan fungsi tanpa nilai balikan
    tampilkanPesan();

    int x=5, y=3;
    //menggunakan fungsi dengan nilai balikan
    int hasilTambah = tambah(x, y);
    cout<<"Hasil penjumlahan : "<<hasilTambah<<endl;

    //Menggunakan fungsi overload
    int hasilKaliint = kali(x, y);
    double hasilKaliDouble = kali (5.5, 2.0);
    cout<<"Hasil perkalian (int) : "<<hasilKaliint<<endl;
    cout<<"Hasil perkalian (double) : "<<hasilKaliDouble<<endl;

    //menggunakan fungsi rekursif
    int angka = 5;
    cout<<"Faktorial dari "<<angka<<" adalah : "<<faktorial(angka)<<endl;
}