//08:12 - 08:37 (BELUM BERHASIL)

#include <iostream>

void merge(int ar[], int left, int middle, int right){
    int n1 = middle - left + 1;
    int n2 = right - middle;

    int arLeft[n1], arRight[n2];

    for (int i = 0; i < n1; i++) {
        arLeft[i] = ar[left + i];
    }

    for (int i = 0; i < n2; i++) {
        arRight[i] = ar[middle + 1 + i];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (arLeft[i] > arRight[j]) {
            ar[k] = arLeft[i];
            i++;
        } else {
            ar[k] = arRight[j];
            j++;
        }
        k++;
        std::cout << "BERHASIL" << std::endl;
    }

    while (i < n1) {
        ar[k] = arLeft[i];
        i++;
        k++;
        std::cout << "BERHASIL" << std::endl;
    }

    while (j < n2) {
        ar[k] = arRight[j];
        j++;
        k++;
        std::cout << "BERHASIL" << std::endl;
    }
}

void mergeSort (int ar[], int left, int right) {
    if (left >= right) return;
    int middle = (right - left)/2;
    
    mergeSort(ar, left, middle);
    mergeSort(ar, middle + 1, right);
    merge(ar, left, middle, right);
}

int main() {

    int n;
    std::cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++) {
        std::cin >> ar[i];
    }

    mergeSort(ar, 0, n - 1);

    for (int i = 0; i < n; i++) {
        std::cout << ar[i] << " ";
    }

}