#include <iostream>
#include <fstream>
using namespace std;

/*
empty txt with 0 on top of file, code read 0 and later increment by one if new data is added
need to be in form of functions...
*/

struct Pembalap{
    string nama_pembalap;
    int nomor_mobil;
    int waktu_finish;
};

void get_pembalap(Pembalap &x) {
    cout << "Masukkan nama pembalap : ";
    cin.ignore();
    getline(cin, x.nama_pembalap);
    cout << "Masukkan nomor mobil : ";
    cin >> x.nomor_mobil;
    cout << "Masukkan waktu finish : ";
    cin >> x.waktu_finish;

}

void print_menu(Pembalap daftarPembalap[], int n) {
    cout << "-----------------------\n";
    cout << "1. Tambah Peserta Balap\n";
    cout << "2. Tampilkan Semua Peserta\n";
    cout << "3. Keluar\n";
    cout << "-----------------------\n";
}

void print_pembalap(Pembalap x[], int n) {
    for (int i = 0; i < n; i++) {
        cout << x[i].nama_pembalap << endl;
        cout << x[i].nomor_mobil << endl;
        cout << x[i].waktu_finish << endl;
    }
}

int main() {

    fstream myFile;
    myFile.open("Data_Pembalap.txt", ios::app);


    //has to read txt first??
    Pembalap *daftarPembalap = new Pembalap[20]; //<------------???
    //syntax nge read opo yo..

    print_menu(daftarPembalap, 20);

    int n = myFile.tellp(); 

    int input;
    cin >> input;
    switch (input)
    {
    case 1:
        get_pembalap(daftarPembalap[n]);
        myFile << "------------------------------\n";
        myFile << daftarPembalap[n].nama_pembalap << endl;
        myFile << daftarPembalap[n].nomor_mobil << endl;
        myFile << daftarPembalap[n].waktu_finish << endl;
        myFile << "------------------------------\n";
        n++;
        break;
    case 2:
        print_pembalap(daftarPembalap, n);
        break;
    case 3:
        //all writes happen here...
        delete[] daftarPembalap;
        break;
    default:
        break;
    }
}