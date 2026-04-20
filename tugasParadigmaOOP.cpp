#include <iostream>
using namespace std;

class barang{
public :
    string nama;
    float jumlah;
    string kategori;
    string tanggalProduksi;

    void printData(){
    cout << "Nama : " << nama << endl;
    cout << "Jumlah : " << jumlah << endl;
    cout << "Kategori : " << kategori << endl;
    cout << "Tanggal Produksi : " << tanggalProduksi << endl;
    }
};//batas class


int main(){
    barang elektronik;
    barang nonElektronik;

    elektronik.nama = "handphone";
    elektronik.jumlah = 5;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "19-04-2026";

    nonElektronik.nama = "kursi";
    nonElektronik.jumlah = 7;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "19-04-2026";

    elektronik.printData();
    nonElektronik.printData();
}