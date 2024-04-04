/*
"Write a function that takes an array of numbers and returns the sum of the numbers.
The numbers can be negative or non-integer. If the array does not contain any numbers then you should return 0.

Examples
Input: [1, 5.2, 4, 0, -1]
Output: 9.2

Input: []
Output: 0

Input: [-2.398]
Output: -2.398

Assumptions
You can assume that you are only given numbers.
You cannot assume the size of the array.
You can assume that you do get an array and if the array is empty, return 0."
*/



#include <iostream>
#include <vector>

int sum(std::vector<int> nums) {
    int sum = 0;     
    for (int num : nums) {
        sum += num;
    }
    
    return sum; 
}

int main(){

    std::vector<int> nums1 = {};
    std::cout << "Suma: " << sum(nums1) << std::endl;
    return 0;
}