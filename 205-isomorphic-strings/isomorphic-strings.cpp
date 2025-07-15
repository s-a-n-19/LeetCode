class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, char> s_to_t;
        unordered_map<char, char> t_to_s;

        for (int i = 0; i < s.length(); i++) {
            char ch1 = s[i];
            char ch2 = t[i];

            // If s[i] is already mapped to something else
            if (s_to_t.count(ch1)) {
                if (s_to_t[ch1] != ch2) return false;
            } else {
                s_to_t[ch1] = ch2;
            }

            // If t[i] is already mapped from something else
            if (t_to_s.count(ch2)) {
                if (t_to_s[ch2] != ch1) return false;
            } else {
                t_to_s[ch2] = ch1;
            }
        }

        return true;
    }
};
