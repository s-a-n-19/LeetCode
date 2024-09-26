class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
             if(nums[i]==nums[j])   {
                 ans.push_back(nums[i]);
             }
            }
        }
        return ans;
    }
};