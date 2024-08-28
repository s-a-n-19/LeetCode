class Solution {
public:
    bool isValid(string s) {
         unordered_map<char, char> bracket_map = {
        {')', '('},
        {'}', '{'},
        {']', '['}
    };

    stack<char> stk;

    // Iterate through each character in the string
    for (char c : s) {
        if (bracket_map.find(c) != bracket_map.end()) {
            // If it's a closing bracket
            if (!stk.empty() && stk.top() == bracket_map[c]) {
                // Check if the top of the stack matches the corresponding opening bracket
                stk.pop();
            } else {
                // If there's no matching opening bracket or stack is empty
                return false;
            }
        } else {
            // If it's an opening bracket, push onto the stack
            stk.push(c);
        }
    }

    // If the stack is empty, all brackets were matched correctly
    return stk.empty();
    }
};