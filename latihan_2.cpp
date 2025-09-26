/*
Input n, cetak 66..6}n kali, jumlahkan semua untuk n-(n-1) + n-(n-2) +...+ n-(n-n) = z, lalu tiap bilangan penyusun z dijumlahkan dan dicetak

==CONTOH==
input: 3
6 + 66 + 666
738
7 + 3 + 8
output: 18
*/

#include <iostream>

void findInteger(int x){
    int y = 0;
    while(x > 0){
        y += x % 10;
        x /= 10;
        }
    std::cout << y;
}

int main(){
    int n; int z = 0; int mult = 0;
    int result = 0;

    std::cin >> n;
    
    for(int i = 0; i < n; i++){
        mult = 10*mult + 6;
        
        z += mult;
    }
    findInteger(z);
}