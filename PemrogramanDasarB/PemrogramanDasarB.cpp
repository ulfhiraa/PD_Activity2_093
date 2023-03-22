#include <iostream>
using namespace std;

float LuasPersegipanjang(float p, float l) {
    return p * l;
}
float LuasLingkarang(float r) {
    return 3.14 * r * r;
}

float LuasSegitiga(float a, float t) {
    return 0.5 * a * t;
}

int main() {
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;
    bool menu;
    menu = true;
    system("cls");
    // do {
    while (menu == true) {
        cout << "\n\n================" << endl;
        cout << "=== M E N U ====" << endl;
        cout << "================\n" << endl;
        cout << "1. Luas Persegi Panjang" << endl;
        cout << "2. Luas Lingkaran" << endl;
        cout << "3. Luas Segitiga" << endl;
        cout << "4. Exit" << endl;
        cout << "\nPilihan 1/2/3/4 : " << endl;
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Masukan Panjang = ";
            cin >> panjang;
            cout << "Masukan Lebar = ";
            cin >> lebar;
            cout << "\nLuas Persegi Panjang = " << LuasPersegipanjang(panjang, lebar);
            break;
        case 2:
            cout << "Masukan Jejari = ";
            cin >> jejari;
            cout << "\nLuas Lingkaran = " << LuasLingkarang(jejari);
            break;
        case 3:
            cout << "Masukan Alas = ";
            cin >> alas;
            cout << "Masukan Tinggi = ";
            cin >> tinggi;
            cout << "\nLuas Segitiga = " << LuasSegitiga(alas, tinggi);
            break;
        case 4:
            menu = false;
            break;
        default:
            cout << "Pilihan Salah !";
            break;
        }
    }
    // } while (pilihan != 4);
}