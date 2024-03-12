#include <iostream>

using namespace std;

//fungsi untuk menjumlahkan dua bilangan bulat
string nama = "Nama : faqih abdullah";
string NIM = "NIM : 2311102048";
int tambah(int a, int b) {
    return a + b;
}
//fungsi untuk mengurangkan dua bilangan desimal
float kurang(float c, float d) {
    return c - d;
}
int main (){
//input dua bilangan bulat penjumlahan
int angka1 = 9;
int angka2 = 4;

//input dua bilangan desimal
float angka3 = 7.5;
float angka4 = 4.0;

//panggil dungsi tambah dan kurang
int hasil_tmbh = tambah(angka1, angka2);
float hasil_kurang = kurang(angka3, angka4);

//tampilkan hasil
cout << nama << endl;
cout << NIM << endl;
cout << "Hasil penjumlahan " << hasil_tmbh <<endl;
cout << "Hasil pengurangan " << hasil_kurang <<endl;

return 0;
}