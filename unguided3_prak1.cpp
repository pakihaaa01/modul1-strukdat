#include <iostream>
#include <map>

using namespace std;

int main() {
    // Membuat map dan menambahkan elemen langsung pada saat inisialisasi
    map<string, string> data = {{"faqih abdullah", "2311102048"}, {"hanabi salsabila", "3131313131"}, {"yai saber", "257576587"}};

    // Mengakses dan menampilkan elemen dalam map
    cout << "Data Mahasiswa:\n";
    for (const auto& [nama, NIM] : data) {
        cout << nama << " ===> "<<"NIM : " << NIM << endl;
    }

    return 0;
}