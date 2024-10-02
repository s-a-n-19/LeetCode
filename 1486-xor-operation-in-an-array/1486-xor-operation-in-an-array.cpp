class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums(n);
        int xorr=0;
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
        }
        for(int it:nums){
            xorr=xorr^it;
        }
        return xorr;
    }
};