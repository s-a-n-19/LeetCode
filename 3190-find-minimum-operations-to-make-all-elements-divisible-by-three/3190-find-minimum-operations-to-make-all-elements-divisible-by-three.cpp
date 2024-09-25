class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int op=0;
        for(int it:nums){
            if(it%3==1){
                op++;
            }
            else if(it%3==2){
                op++;
            }
        }
        return op;
    }
};