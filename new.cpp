#include <iostream>
using namespace std;

class barang{
    public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalproduksi;
    void tampilspek(){
        cout << "nama barang : " <<  nama << endl;
        cout << "jumlah barang : " << jumlah << endl;
        cout << "kategori barang : " << kategori << endl;
        cout << "tanggal produksi : " <<tanggalproduksi  << endl;


    }

};

int main(){

    barang elektronik;
    barang nonElektronik;

    elektronik.nama = "Laptop";
    elektronik.jumlah = 1;
    elektronik.kategori = "electronik";
    elektronik.tanggalproduksi = "1945-08-17";
    elektronik.tampilspek();

cout << endl;

nonElektronik.nama = "supersemar";
nonElektronik.jumlah = 1;
nonElektronik.kategori = "non elektronik";
nonElektronik.tanggalproduksi = "1970-03-11";
nonElektronik.tampilspek();
}
