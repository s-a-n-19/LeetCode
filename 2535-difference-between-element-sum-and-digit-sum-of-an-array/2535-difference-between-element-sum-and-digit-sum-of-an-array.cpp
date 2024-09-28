class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int ans;
        int dsum=0;
        for(int it:nums){
            sum+=it;
        }
        for(int it:nums){
            while(it!=0){
                int rem=it%10;
                dsum+=rem;
                it=it/10;
            }
        }
        if(sum>=dsum){
            ans=sum-dsum;
        }
        else{
            ans=dsum-sum;
        }
        return ans;
    }
};