class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int it:nums){
            vector<int> temp;
            while(it!=0){
                int rem=it%10;
                temp.push_back(rem);
                it=it/10;
            }
            reverse(temp.begin(),temp.end());
            for(int t:temp){
                ans.push_back(t);
            }
        }
        return ans;
    }
};