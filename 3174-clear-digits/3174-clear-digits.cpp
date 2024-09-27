class Solution {
public:
    string clearDigits(string s) {
        while(any_of(s.begin(),s.end(), ::isdigit)){
            for(int i=0;i<s.length();++i){
                if(isdigit(s[i])){
                    s.erase(i,1);
                    for(int j=i-1;j>=0;--j){
                        if(!isdigit(s[j])){
                            s.erase(j,1);
                            break;
                        }
                    }
                    break;
                }
            }
        }
        return s;
    }
};