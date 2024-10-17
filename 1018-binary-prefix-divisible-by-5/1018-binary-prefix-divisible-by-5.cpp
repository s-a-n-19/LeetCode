class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
         vector<bool> result;
    int currentNumber = 0;
for (int bit : nums) {
        // Left shift the number (multiply by 2) and add the current bit
        currentNumber = (currentNumber * 2 + bit) % 5;
        
        // Check if the current number is divisible by 5
        result.push_back(currentNumber == 0);
    }

    return result;
    }
};