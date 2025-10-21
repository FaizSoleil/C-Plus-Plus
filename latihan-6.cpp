/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

=========================================
Waktu pengerjaan: 21 Oktober 2025, 18:15 - 18:37 (22 menit)

*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

int main(){

    //defining variables
    int input;
    int target;
    vector<int> nums;

    cin >> target;
    while (cin >> input)            //continues inputing while input is an int
    {
        nums.push_back(input);
    }


    nums = twoSum(nums, target);    //calls the function
    for ( int i = 0; i < nums.size(); i++ ) {       //print out index that fulfills the condition
        cout << nums[i] << " ";
    }
}

 vector<int> twoSum(vector<int>& nums, int target)
 
 {
        vector<int> solve = {0, 0};     //vector for index of result

        for ( int i = 0; i < nums.size(); i++ ) {
            for ( int j = 0; j < nums.size(); j++ ) {
                if(i != j){     //doesn't check the same index
                    if (( nums[i] + nums[j]) == target ){
                        solve[0] = j;
                        solve[1] = i;
                        break;  //stops loop when ran
                    }
                }
            }
        }
        return solve;
    }