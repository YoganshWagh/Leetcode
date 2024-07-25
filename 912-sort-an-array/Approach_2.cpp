//QUESTION: https://leetcode.com/problems/sort-an-array/description/
//REFERENCE: https://youtu.be/PnyxRdn-N9U?si=JobXqPbzLYOlWbI5
//Approach 2: Using Counting Sort.
//T.C = O(n+k), where 'n' is number of elements in nums and 'k' is number of elements in between min and max element.
//S.C = O(n), where 'n' space is used to store n elements.
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        //Step 1: Store the frequency of elements present in array.
        unordered_map<int,int> mp;
        for(auto &x: nums){
            mp[x]++;
        }

        //Step 2: Find Min and Max element in the input array to
        //traverse in that range.
        int minE = *min_element(nums.begin(), nums.end());
        int maxE = *max_element(nums.begin(), nums.end());

        //Step 3: Trverse in the range of Min and Max element to sort.
        //Basically we check whether that element is present in map or not.
        int i = 0;
        for(int j = minE; j <= maxE; j++){
            while(mp[j] > 0){
                nums[i] = j;
                mp[j]--;
                i++;
            }
        }
        return nums;
    }
};