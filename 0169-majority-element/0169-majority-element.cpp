class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            int cnt =0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    cnt++;
                }
            }
            if(cnt>n/2){
                return nums[i];
            }
        }
        return -1;
    }
};