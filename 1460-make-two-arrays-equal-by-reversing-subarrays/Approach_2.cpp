//Approach 2: Using Calculation of frequency.
//T.C = O(n), where 'n' is the size of arr and target.
//S.C = O(1), since no extra space is used.
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) 
    {
        //Step 1: Creating an array to store frequency of elements.
        int freq[1001] = {0};
        
        //Step 2: Storing frequncy into the freq array.
        for(int i=0; i<target.size(); i++){
            freq[target[i]]++;
            freq[arr[i]]--;
        }

        //Step 3: Check any value in the array is non-zero.
        for(int i=1; i<1001; i++){
            if(freq[i] != 0) 
                return 0;
        }
        return true;
    }
};