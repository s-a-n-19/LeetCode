class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxFind=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxFind) return false;
            maxFind=max(maxFind, i+nums[i]);
        }
        return true;
    }
};