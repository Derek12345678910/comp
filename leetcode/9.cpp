/*

9. Palindrome Number

Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/
#include "../comp.h"

bool isPalindrome(int x) {
    long number = x;
    long reversed = 0;
    while (number != 0){
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number = (number - digit) / 10;
    }
    if (reversed == x && reversed >= 0){
        return true;
    }
    else{
        return false;
    }
    
}


int leetcode9() {
    int testNumber = -121;
    if (isPalindrome(testNumber)) {
        std::cout << testNumber << " is a palindrome.\n";
    } else {
        std::cout << testNumber << " is not a palindrome.\n";
    }
    return 0;
}