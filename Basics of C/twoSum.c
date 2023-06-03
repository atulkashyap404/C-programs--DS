#include<stdio.h>
#include<stdlib.h>

int twoSum(int *nums, int numSize, int target, int *returnSize);

int main(){
    int *nums;
    int numSize;
    int target;
    scanf("%d",&numSize);
    scanf("%d", &target);

    twoSum(nums, numSize, target);
    


    return 0;
}


int twoSum(int *nums, int numSize, int target,){

    nums= (int *) malloc(numSize, sizeof(int));
    for (int i = 0; i < numSize; i++)
    {
        scanf("%d", &nums);
    }



}