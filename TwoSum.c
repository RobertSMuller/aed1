/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]*/


#include<stdio.h>
#include<stdlib.h>

int main(){
int numSize,*nums,target;
printf("quantidade de numeros: \n");
scanf("%d",&numSize);

printf("alvo: \n");
scanf("%d",&target);


nums=malloc(sizeof(int)*numSize);
printf("digite os numeros: \n");
for (int i = 0; i < numSize; i++){
    scanf("%d",&nums[i]);
}


for(int i=0;i<numSize;i++){
 for(int y=i+1;y<numSize;y++){
    if(nums[i]+nums[y]==target){
        printf("[%d,%d]",i,y);
    }
 }

}

    return 0;
}