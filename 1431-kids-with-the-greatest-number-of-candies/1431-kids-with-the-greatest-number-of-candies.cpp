class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxi=INT_MIN;
        for(int it:candies){
            maxi=max(maxi,it);
        }
        for(int it:candies){
            if(abs(it+extraCandies)>=maxi){
                ans.push_back(true);
            }
            else{
                 ans.push_back(false);
            }
        }
        return ans;
    }
};