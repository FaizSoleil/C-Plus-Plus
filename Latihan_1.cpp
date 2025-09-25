/*
Akan meng-output ASCII S dengan ukuran ukuran sesuai input
*/

#include <iostream>

void printHorizontal(int size);
void printVertikalKanan(int size);
void printVertikalKanan(int size);

int main(){
    int size;

    std::cout << "Input ukuran yang diinginkan: ";
    std::cin >> size;

    printHorizontal(size);
    printVertikalKiri(size);
    printHorizontal(size);
    printVertikalKanan(size);
    printHorizontal(size);
}


void printHorizontal(int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size*5; j++){
            std::cout << "S";
        }
        std::cout << std::endl;
    }

}

void printVertikalKiri(int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size*2; j++){
            std::cout << "S";
        }
        std::cout << "\n";
    }
}

void printVertikalKanan(int size){
    for(int i = 0; i < size; i++){
        for(int k = 0; k < size*3; k++){
            std::cout << " ";
        }

        for(int j = 0; j < size*2; j++){
            std::cout << "S";
        }
        std::cout << "\n";
    }
}