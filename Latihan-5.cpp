//check if n is a part of the fibonacci sequence

#include <iostream>
using namespace std;

int checkFib(int a);

int main(){

    cout << "Masukkan nilai: ";
    int n; cin >> n;

    if ( checkFib(n) != 0 ){
        cout << "Angka "<< n << " adalah nilai ke-" << 
        checkFib(n) << " deret Fibonacci.";
    } else {
        cout << "Angka " << n << " bukan bagian dari deret Fibonacci.";
    }
}

int checkFib(int target){
    int a = 0;
    int b = 1;
    int c = 0;

    for(int i = 1; i < 2147483647; i++){
        if(target == c){
            return i;
            break;
        }else if ( target < c ){
            return 0;
            break;
        }
        c = a + b;

        a = b;
        b = c;

        if ( c == 2 ){//increment i since the number 1 appears twice in the actual sequence (0, 1, 1, 2, 3, 5, ...)
            i++;
        }
    }

    return 0;
}