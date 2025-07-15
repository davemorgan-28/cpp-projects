#include <iostream>
using namespace std;

int main() {
    struct makanan {
        string nama;
        int harga;
        string deskripsi;
    };

    makanan makanan1;
    makanan1.nama = "Nasi Goreng";
    makanan1.harga = 15000;
    makanan1.deskripsi = "Nasi yang digoreng";
    
    cout << "Nama: " << makanan1.nama << endl;
    cout << "Harga: " << makanan1.harga << endl;
    cout << "Deskripsi: " << makanan1.deskripsi << endl;
}