#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> evenDigits;
        unordered_set<int> uniqueNumbers;

        for (int digit : digits) {
            if (digit % 2 == 0) {
                evenDigits.push_back(digit);
            }
        }
        

        for (int lastDigit : evenDigits) {
            vector<int> remainingDigits = digits;
            auto it = find(remainingDigits.begin(), remainingDigits.end(), lastDigit);
            if (it != remainingDigits.end()) {
                remainingDigits.erase(it);
            }

            for (size_t i = 0; i < remainingDigits.size(); ++i) {
                if (remainingDigits[i] == 0) {
                    continue; 
                }

                for (size_t j = 0; j < remainingDigits.size(); ++j) {
                    if (j == i) {
                        continue;
                    }
                    int number = remainingDigits[i] * 100 + remainingDigits[j] * 10 + lastDigit;
                    uniqueNumbers.insert(number);
                }
            }
        }
        return uniqueNumbers.size();
    }
};