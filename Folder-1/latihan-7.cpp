/*
Mengecek apakah n palindrom, dengan vector
Waktu pengerjaan: 20:00 - 20:10 (10 menit)
*/

#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int x){

    vector<int> num;
    int sum = 0;
    int y = x;      //substitute for x

    while ( y > 0) {
        num.push_back(y % 10);
        y /= 10;
    }

    int mult = 1;

    for ( int i = num.size() - 1; i >= 0; i-- ) {
        sum += mult*num[i];
        mult *= 10;
    }

    if ( x == sum ) {
        return 1;
    } else {
        return 0;
    }

}

int main(){

    int n;
    cin >> n;

    cout << isPalindrome(n);

}