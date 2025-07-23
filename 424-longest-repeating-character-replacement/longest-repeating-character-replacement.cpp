class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int l = 0, r = 0, maxlen = 0, maxfreq = 0;
        vector<int> mpp(26, 0);
        
        while (r < n) {
            mpp[s[r] - 'A']++;
            maxfreq = max(maxfreq, mpp[s[r] - 'A']);
            
            if ((r - l + 1) - maxfreq > k) {
                mpp[s[l] - 'A']--;
                l++;
            }
            
            maxlen = max(maxlen, r - l + 1);
            r++;
        }
        
        return maxlen;
    }
};
