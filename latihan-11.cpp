#include <iostream>
using namespace std;

void counting_sort(int ar[], int n, int mult);
void radix_sort(int ar[], int n);
void print_array(int ar[], int n);

int main(){
    int n;
    cin >> n;
    
    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    
    radix_sort(ar, n);
    print_array(ar, n);
}

void counting_sort(int ar[], int n, int mult){
    //definisi array output akhir dan array untuk digit 0-9
    int output[n];
    int count[10] = {0};

    //me-loop sebanyak ukuran array dan menambah count tiap digit jika sama
    for (int i = 0; i < n; i++){
        count[(ar[i] / mult) % 10]++;
        // cout << "COUNT ORI:" << endl;
        // print_array(count, 10);
    }

    //mengubah bentuk array agar menyatakan posisi
    for (int i = 1; i < 10; i++){
        count[i] += count[i - 1];
        // cout << "COUNT POSISI:" << endl;
        // print_array(count, 10);
    }

    //mengisi elemen output sesuai susunan posisi di count
    for (int i = n - 1; i >= 0; i--) {
        int digit = (ar[i] / mult) % 10;
        output[count[digit] - 1] = ar[i];
        count[digit]--;
    }

    //pindah elemen output ke ar
    for (int i = 0; i < n; i++)
        ar[i] = output[i];
}

void radix_sort(int ar[], int n){
    //cari nilai tertinggi di array
    int maximum = ar[0];
    for (int i = 1; i < n; i++) 
        if (ar[i] > maximum) maximum = ar[i];

    //loop sebanyak jumlah digit nilai tertinggi (semisal nilai tertinggi 473, akan terulang 3 kali)
    for (int mult = 1; maximum / mult > 0; mult *= 10)
        counting_sort(ar, n, mult);
}

//
void print_array(int ar[], int n){
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;
}
