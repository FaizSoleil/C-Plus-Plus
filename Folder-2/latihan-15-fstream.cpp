//waktu pengerjaan 10:47 - 11:24

#include <iostream>
#include <fstream>
using namespace std;


struct data_peserta{
    int nomor_peserta;
    string nama_peserta;
    string nama_lomba;
};

void get_peserta(data_peserta &X) {
    cout << "Nomor Peserta : "; cin >> X.nomor_peserta;
    cin.ignore();
    cout << "Nama Peserta : "; getline(cin, X.nama_peserta);
    cout << "Lomba yang akan diikuti : "; getline(cin, X.nama_lomba);
}

int main() {

    fstream whatever;
    whatever.open("miaw.txt", ios::app);
    if (whatever.is_open()) {
        data_peserta peserta_baru;
        get_peserta(peserta_baru);
        
        whatever    << "=========================\n" 
                    << peserta_baru.nomor_peserta << endl
                    << peserta_baru.nama_peserta << endl
                    << peserta_baru.nama_lomba << endl
                    << "=========================\n";

        whatever.close();
    }
    else
    {
        cerr << "FILE TIDAK DITEMUKAN!\n";
    }

}