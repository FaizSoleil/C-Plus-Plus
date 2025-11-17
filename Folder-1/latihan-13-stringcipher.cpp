//08:18 - 08:23

#include <iostream>
using namespace std;

int main(){

    string input;
    int n;

    getline(cin, input);
    cin >> n;

    for (int i = 0; i <= input.size(); i++) {
        cout << char(int(input[i] + n)) ;
    }


}