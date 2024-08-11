void moveZeroes(int* nums, int numsSize) {
   int i, j=-1;
    for(i=0;i<numsSize;i++){
        if(nums[i]==0){
            j=i;
            break;
        }
    }
      if (j == -1) return;
    for(i=j+1;i<numsSize;i++){
        if(nums[i]!=0){
          int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            j++;
        }
    }
}