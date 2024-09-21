class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq; // Map to store the frequency of each element
        unordered_set<int> uniqueCounts; // Set to store unique counts

        // Step 1: Count the occurrences of each element
        for (int num : arr) {
            freq[num]++;
        }

        // Step 2: Check if the frequencies are unique
        for (auto it : freq) {
            if (uniqueCounts.find(it.second) != uniqueCounts.end()) {
                // If the frequency count is already in the set, it means it's not unique
                return false;
            }
            uniqueCounts.insert(it.second); // Add the frequency count to the set
        }

        return true; // All counts are unique
    }
};