//Approach 3: Using Hash Map.
//T.C = O(n), where 'n' is the size of arr and target.
//S.C = O(n), where n is the number of unique elements in the target and arr arrays.
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) 
    {
        // Step 1: Create hash maps to store the frequency of elements.
        unordered_map<int, int> targetFreq;
        unordered_map<int, int> arrFreq;

        // Step 2: Populate the hash maps with the frequency of elements.
        for(int i = 0; i < target.size(); i++) {
            targetFreq[target[i]]++;
            arrFreq[arr[i]]++;
        }

        // Step 3: Compare the two hash maps.
        return targetFreq == arrFreq;
    }
};