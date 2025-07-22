class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char ch : s){
            freq[ch]++;
        }

         vector<pair<char,int>> chars(freq.begin(), freq.end());

         sort(chars.begin(),chars.end(), [](auto &a, auto &b){
            return a.second>b.second;
         });

         string res="";
         for( auto &p:chars){
            res+=string(p.second,p.first);
         }
         return res;
    }
};