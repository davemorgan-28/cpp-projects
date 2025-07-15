#include <iostream>
#include <string>
using namespace std;

// buat record yang menyimpan data mahasiswa
struct Mahasiswa{
    string nama; //variabel untuk menyimpan nama mahasiswa
    int umur; //variabel untuk menyimpan umur mahasiswa
    float ipk; //variabel untuk menyimpan ipk mahasiswa
};

int main(){
    //deklarasi variabel utk mengakses elemen dari record mahasiswa
    Mahasiswa mhs;

    //assign ke setiap member dari record
    mhs.nama = "Dave";
    mhs.umur = 18;
    mhs.ipk = 3.9;

    float indeks_prestasi = mhs.ipk; //mengakses member dari record

    //tampilkan nilai dari setiap member dalam record
    cout<<"Nama mahasiswa : "<<mhs.nama<<endl;
    cout<<"Umur : "<<mhs.umur<<"\n";
    cout<<"IPK : "<<indeks_prestasi<<endl;
    return 0;
}