#include <iostream>

void counting_sort(int ar[], int n);
void print_array(int ar[], int n);

int main() {

    int n;
    std::cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++) {
        std::cin >> ar[i];
    }

    counting_sort(ar, n);

    print_array(ar, n);

}


void counting_sort(int ar[], int n){

    int max = ar[0];
    for (int i = 1; i < n; i++) {
        if (max < ar[i]) max = ar[i];
    }

    int count[max + 1] = {0};

    for (int i = 0; i < n; i++) {
        count[ar[i]]++;
        // print_array(count, max + 1);
    }
 
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    int output[n];
    for (int i = n - 1; i >= 0; i--) {
        int x = ar[i];
        int pos = count[x] - 1;
        output[pos] = x;
        count[x]--;

        // print_array(output, n);
    }

    for (int i = 0; i < n; i++){
        int j = n - i - 1;
        ar[i] = output[j];
        j--;
        // print_array(ar, n);
    }
}


void print_array(int ar[], int n){
    

    for (int i = 0; i < n; i++) {
        std::cout << ar[i] << " ";
    }
    std::cout <<std::endl;
}