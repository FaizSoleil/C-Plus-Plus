#include <iostream>
#include <fstream>
using namespace std;

int main() {

    fstream myFile;
    myFile.open("miaw.txt");
    myFile << "Tes";
}