class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = s.length() - 1;

        // Trim leading and trailing spaces
        while (left <= right && s[left] == ' ') left++;
        while (right >= left && s[right] == ' ') right--;

        string temp = "", ans = "";

        while (left <= right) {
            char ch = s[left];

            if (ch != ' ') {
                temp += ch;
            } else if (ch == ' ') {
                if (!temp.empty()) {
                    if (!ans.empty()) ans = temp + " " + ans;
                    else ans = temp;
                    temp = "";
                }
            }
            left++;
        }

        // Add last word
        if (!temp.empty()) {
            if (!ans.empty()) ans = temp + " " + ans;
            else ans = temp;
        }

        return ans;
    }
};
