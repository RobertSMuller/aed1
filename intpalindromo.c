/*
Given an integer x, return true if x is a palindrome, and false otherwise.

 

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
#include<stdio.h>
#include<stdlib.h>

int main(){
    int x;
    scanf("%d",&x);
    double rev=0, rem, orignal=x;
    
        while(x>0)
        {
            rem = x % 10;
            rev = rev * 10 + rem;
            x/=10;
        }

        if(rev == orignal){
            printf("true");
        }
         else{
            printf("false");
         }

return 0;  
}
