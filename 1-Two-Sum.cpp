
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a hash map to store the numbers and their indices
        unordered_map<int, int> numToIndex;
        
        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            // Calculate the complement
            int complement = target - nums[i];
            
            // Check if the complement exists in the hash map
            if (numToIndex.find(complement) != numToIndex.end()) {
                // If found, return the indices
                return {numToIndex[complement], i};
            }
            
            // Otherwise, add the current number and its index to the hash map
            numToIndex[nums[i]] = i;
        }
        
        // If no solution is found (though the problem guarantees one), return an empty vector
        return {};
    }
};