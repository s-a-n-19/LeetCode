class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singlesum=0, doublesum=0 ;
        for(int it:nums){
            if(it<10){
                singlesum+=it;
            }
            else{
                doublesum+=it;
            }
        }
        if(singlesum>doublesum){
            return true;
        }
        else if(doublesum>singlesum){
            return true;
        }
        return false;
    }
};