bool check(int* nums, int numsSize) {
     int dropCount = 0;
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > nums[(i + 1) % numsSize]) {
            dropCount++;
        }
        if (dropCount > 1) {
            return false;
        }
    }
    
    return true;
}