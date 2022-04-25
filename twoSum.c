//两数之和整体实现
#include<stdio.h>
#include<stdlib.h>
int* Input(int *numsSizePtr,int *targetPtr);
int* twoSum(int *nums,int numsSize,int target,int *returnSize);
main(){
    int numsSize = 0,target = 0,return_size = 0;
    int *numsSizePtr = &numsSize, *targetPtr = &target;
    int *returnSize = &return_size;
    int *nums = Input(numsSizePtr,targetPtr);
    int *printPtr = twoSum(nums,numsSize,target,returnSize);
    int i;
    printf("[");
    for(i=0;i<2;i++){
        printf("%d",printPtr[i]);
        if(i!=2-1) printf(",");
        else printf("]");
    }
    system("pause");
    return 0;
}
int* Input(int *numsSizePtr,int *targetPtr)
{
    int *arr;
    printf("Please input numsSize\n");
    scanf("%d",numsSizePtr);
    int numsSize = *numsSizePtr;
    printf("And target\n");
    scanf("%d",targetPtr);
    arr = (int*)malloc(sizeof(int)*numsSize);
    int i;
    for(i=0;i<*numsSizePtr;i++){
        scanf("%d",&arr[i]);
    }
    //free(arr);
    return arr;
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] + nums[j] == target) {
                int* ret = (int*)malloc(sizeof(int) * 2);
                ret[0] = i, ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
