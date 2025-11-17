/*
Insertion Sort
Waktu pengerjaan: 20:35 - 20:48 (13 menit)
*/

#include <iostream>

void insertionSort(int ar[], int n) {

    for (int i = 1; i < n; i++) {

        int index = ar[i];
        int j = i - 1; 

        while (j >= 0 && index < ar[j]) {
            // std::cout << "ITERASI " << j << std::endl;

            ar[j + 1] = ar[j];
            j--;

        }

        ar[j + 1] = index;

    //     for (int k = 0; k < n; k++) {
    //     std::cout << ar[k] << " ";
    // }
    //     std::cout << std::endl;

    }
}

int main(){

    int n;
    std::cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++) {
        std::cin >> ar[i];
    }

    insertionSort(ar, n);

    for (int i = 0; i < n; i++) {
        std::cout << ar[i] << " ";
    }


}