class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> num_pairs;
        for (int i = 0; i < nums.size(); i++) {
            num_pairs.push_back({nums[i], i});
        }
           sort(num_pairs.begin(),num_pairs.end());
        int left=0, right=num_pairs.size()-1;
        while(left<right){
            int sum=num_pairs[left].first+num_pairs[right].first;
            if(sum==target){
                return {num_pairs[left].second,num_pairs[right].second};
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return {};
    }
};