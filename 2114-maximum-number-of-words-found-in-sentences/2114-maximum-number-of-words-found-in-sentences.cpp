class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=0;
        for(string it:sentences){
              int cnt=1;
            for(char unit:it){
                if(unit==' '){
                    cnt++;
                }
            }
            maxi=max(cnt,maxi);
        }
        return maxi;
    }
};