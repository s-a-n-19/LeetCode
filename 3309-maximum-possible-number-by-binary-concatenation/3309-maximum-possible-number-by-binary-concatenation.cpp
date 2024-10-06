class Solution {
    private:
    long long binaryToDecimal(string s){
        long long decimal = 0;
        long long base = 1;
        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] == '1') {
                decimal += base;
            }
            base *= 2;
        }

    return decimal;
    }
public:
    int maxGoodNumber(vector<int>& nums) {
        string s;
        long long ans=INT_MIN;
        sort(nums.begin(), nums.end());
        for(int i=0;i<6;i++){
            s.clear();
            for(int it:nums){
                 string binary;
             while(it>0){
                  binary += (it % 2 == 0) ? '0' : '1';  
                it=it/2;
            } 
            reverse(binary.begin(), binary.end());
                s += binary;
        }
        long long maxi=binaryToDecimal(s);
        ans=max(maxi,ans);
        next_permutation(nums.begin(), nums.end());
        }
        return ans;
    }
};