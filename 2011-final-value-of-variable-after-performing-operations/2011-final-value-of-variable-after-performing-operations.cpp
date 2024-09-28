class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res=0;
        for(string it:operations){
            if(it=="++X" || it=="X++")
                res++;
            else 
                res--;
        }
        return res;
    }
};