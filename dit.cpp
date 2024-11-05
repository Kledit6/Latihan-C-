#include <iostream>
using namespace std;

// +
    int jumlah(int a, int b);
// -
    int kurang(int a, int b);
// *
    int kali(int a, int b);
// /
    int bagi(int a, int b);


int main(){
    int num1, num2;
        cout << "Masukkan angka Pertama: ";
        cin >> num1;
        cout << "Masukkan angka Kedua: ";
        cin >> num2;


    // Perjumlahan
    int Pejumlahan = jumlah(num1,num2);
        cout << "Hasil Penjumlahan: " << Pejumlahan << endl;

    // Pengurangan
    int Pengurangan = kurang(num1,num2);
        cout << "Hasil Pengurangan: " << Pengurangan << endl;

    // Perkalian
    int Perkalian = kali(num1, num2);
        cout << "Hasil Perkalian: " << Perkalian << endl;

    // Pembagian
    int Pembagian = bagi(num1, num2);
        cout << "Hasil Pembagian: " << Pembagian << endl;

    return 0;
}



// Perjumlahan
int jumlah(int a,int b){
    return a + b;
}

// Pengurangan
int kurang(int a, int b){
    return a - b;
}

// Perkalian
int kali(int a, int b) {
    return a * b;
}

// Pembagian
int bagi(int a, int b) {
    return a / b;
}
