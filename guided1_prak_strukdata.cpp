#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    // Meminta pengguna untuk memasukkan operator: +, -, *, /
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;

    // Meminta pengguna untuk memasukkan operand
    cout << "Masukkan dua angka: ";
    cin >> num1 >> num2;

    // Switch statement
    switch (op) {
        case '+':
            cout << "Hasil penjumlahan: " << num1 + num2;
            break;
        case '-':
            cout << "Hasil pengurangan: " << num1 - num2;
            break;
        case '*':
            cout << "Hasil perkalian: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << "Hasil pembagian: " << num1 / num2;
            else
                cout << "Error! Tidak dapat melakukan pembagian dengan nol.";
            break;
        default:
            cout << "Error! Operator tidak benar.";
    }
    return 0;
}
