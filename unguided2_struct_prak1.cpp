#include <iostream>

using namespace std;

//mendefinisikan struct
struct mahasiswa {
    string nama;
    int umur;
};

//mendefinisikan class
class kendaraan{
    public:
        string jenis;
        int tahun;

        void info(){
            cout << "\t==============" << endl;
            cout << "jenis: " << jenis << endl << "tahun: " << tahun << endl;
        }
};

int main(){
    //menggunakan struct
    mahasiswa mhs;
    mhs.nama = "faqih";
    mhs.umur = 20;
    cout <<"Nama : " << mhs.nama << "\n" << "umur: " << mhs.umur << "\n";

    //menggunakan class
    kendaraan mobil;
    mobil.jenis = "palisade";
    mobil.tahun = 2023;
    mobil.info();


    return 0;
}