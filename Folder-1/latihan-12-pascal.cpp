#include <iostream>
using namespace std;

/*
input 1
output 1

input 2
output 1 1

input 3
output 1 2 1

input 4
output 1 3 3 1

input 5
output 1 4 6 4 1

input 6
output 1 5 10 10 5 1

input 7
output 1 6 15 15 6 1
*/

int main(){

    int n;
    cin >> n;

    int pascal_triangle[100][100];

    for (int i = 0; i < n; i++){
        // pascal_triangle[0][0] = 1;
        pascal_triangle[i][0] = 1;
        pascal_triangle[i][i] = 1;

        for (int j = 1; j < i; j++) {
            pascal_triangle[i][j] = pascal_triangle[i - 1][j - 1] + pascal_triangle[i - 1][j];
        }

    }

    for (int i = 0; i < n; i++) {
        cout << "[";
        for (int j = 0; j <= i; j++) {
            cout << pascal_triangle[i][j];
            if (j < i) cout << ", ";
        }
        cout << "]" << endl;
    }

}