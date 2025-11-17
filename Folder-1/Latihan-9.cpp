#include <iostream>

void merge(int ar[], int left, int middle, int right){
    int size_left = middle - left + 1;
    int size_right = right - middle;

    int arLeft[size_left], arRight[size_right];

    for (int i = 0; i < size_left; i++) arLeft[i] = ar[left + i];
    for (int i = 0; i < size_right; i++) arRight[i] = ar[middle + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < size_left && j < size_right) {
        if (arLeft[i] <= arRight[j]) {
            ar[k] = arLeft[i];
            i++;
        }
        else
        {
            ar[k] = arRight[j];
            j++;
        }
        k++;
    }

    while (i < size_left) {
        ar[k] = arLeft[i];
        i++;
        k++;
    }

    while (j < size_right) {
        ar[k] = arRight[j];
        j++;
        k++;
    }


}

void merge_sort(int ar[], int left, int right){
    if (left >= right) return;

    int middle = left + (right - left) / 2;

    merge_sort(ar, left, middle);
    merge_sort(ar, middle + 1, right);
    merge(ar, left, middle, right);
}

int main(){

    int n;
    std::cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++) {
        std::cin >> ar[i];
    }

    merge_sort(ar, 0, n - 1);

    for (int i = 0; i < n; i++) {
        std::cout << ar[i] << " ";
    }

}