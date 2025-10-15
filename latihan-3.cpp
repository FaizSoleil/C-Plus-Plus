/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/

#include <iostream>

bool checkSum(int a, int b, int target);

int main(){

    int target; 
    bool isSum = 0; 
    int sum1 = 0; //int that adds up to target
    int sum2 = 0; //int that adds up to target
    int n; 
    std::cin >> n;

    int ar[n];      //input each element of ar
    for(int i = 0; i < n; i++){
        std::cin >> ar[i];
    }

    std::cin >> target;

    for(int i = 0; i < n; i++){

        //check each ar[j] that when added up with ar[i], results in target
        for(int j = 0; j < n; j++){
            if(j != i){     //to avoid adding up the same element
                isSum = checkSum(ar[i], ar[j], target);
            }
            if(isSum){
                sum1 = j;
                sum2 = i;
                break;  //ends loop on the first i and j found
            }
        }
    }

    std::cout << "[" << sum1 << ", " << sum2 << "]";

}


bool checkSum(int a, int b, int target){

    if(a + b == target){
        return 1;
    }else{
        return 0;
    }

}

