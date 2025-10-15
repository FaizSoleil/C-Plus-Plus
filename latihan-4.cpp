//Waktu Pengerjaan : 06:32 - 06:59 (27 menit)

//Given n non-negative integers representing an elevation map where the width of each bar is 1, 
//compute how much water it can trap after raining.



#include <iostream>

int main(){

    int waterHeight = 0; int leftMax; int rightMax; int lowestMax; //declaring water & maximum heights
    int n;              //declaring size of ar
    std::cin >> n;

    int ar[n];          //input each element of ar
    for(int i = 0; i < n; i++){
        std::cin >> ar[i];
    }

    //main meat
    for(int i = 1; i < n - 1; i++){

        //find highest to the left of i
        int leftMax = ar[i];
        for(int j = 0; j < i; j++){
            if(ar[j] > leftMax){
                leftMax = ar[j];
            }
        }

        //find highest to the right of i
        int rightMax = ar[i];
        for(int j = i + 1; j < n; j++){
            if(ar[j] > rightMax){
                rightMax = ar[j];
            }
        }

    //find lowest of both sides
    if(leftMax > rightMax){
        lowestMax = rightMax;
    }else{
        lowestMax = leftMax;
    }

    //count the height on i if i is lower than lowestMax
        if(lowestMax > ar[i]){
            waterHeight += lowestMax - ar[i];
        }
    }

    std::cout << waterHeight;

}




// int checkSide(int left, int right, int mid){
//     int water = 0;
//     if(mid > left || mid > right){
//         water += 0;
//     }else if(left == right){
//         water += left - mid;
//     }else if(left < right){
//         water += left - mid;
//     }else if(left > right){
//         water += right - mid;
//     }

//     return water;

// }

// read all ar and find the highest, then compare with the second highest
// 4 0 1 2
// it will set the highest as two

