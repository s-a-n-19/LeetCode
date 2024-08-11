int missingNumber(int* nums, int numsSize) {
   int sum=numsSize*(numsSize+1)/2;
    int s2=0;
    for(int i=0;i<numsSize;i++){
        s2+=nums[i];
    }
    return (sum-s2);
    
}