class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int cnt=0, n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=n-1;k>0;k--){
                    if(nums[j]-nums[i]==diff)
                        if(nums[k]-nums[j]==diff)
                           cnt++;
                }
            }
        }
        return cnt;
    }
};