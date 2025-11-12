//Waktu pengerjaan : 09:30 - 09:55

#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    //input size of array
    int n;
    std::cin >> n;

    //define data with pointer
    int *data = new int[n];
    //input element
    for (int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    //print data before swapped
    for (int i = 0; i < n; i++) {
        std::cout << "In the address " << data + i << " there stored a value " << data[i] << std::endl;
    }

    //define limit size for swap function
    int halved_size;
    if (n % 2 == 0) {
        halved_size = n / 2;
    } else {
        halved_size = (n - 1) / 2;
    }
    
    //define start and end that will be swapped
    int *start = data;
    int *end = data + n - 1;

    //swap leftmost and rightmost, then moves right and left one step
    for (int i = 0; i < halved_size; i++) {
        swap(*start, *end);
        start++;
        end--;
    }

    std::cout << std::endl << "=== SWAPPED ===" << std::endl << std::endl;

    //print swapped data
    for (int i = 0; i < n; i++) {
        std::cout << "In the address " << data + i << " there stored a value " << data[i] << std::endl;
    }

    //????
    delete[] data;
}