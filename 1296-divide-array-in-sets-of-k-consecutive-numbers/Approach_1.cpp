//QUESTION: https://leetcode.com/problems/divide-array-in-sets-of-k-consecutive-numbers/description/
//REFERENCE: https://youtu.be/lpVhzcdiHMs?si=n2n2Rw3lFpa-t86q
//Approach 1: Using Hash Table.
//Reference: https://youtu.be/lpVhzcdiHMs?si=n2n2Rw3lFpa-t86q
//T.C = O(n*logn) + O(n*k), where O(nlogn) is for inserting n elements in ordered map 
// and O(n*k) is for traversing all elements of map.
//S.C = O(n), where n is the size of the map for n elements of nums.
class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n = nums.size();
        if(n % k != 0) 
            return false;

        //Taking ordered map to store elements in sorted consecutive order.
        map<int,int> mp;
        for(auto &x: nums){
            mp[x]++;
        }

        //cheking whether nums has cosecutive elements or not.
        while(mp.empty() == false){
            int curr = mp.begin()->first;

            for(int i=0; i<k; i++){
                if(mp[curr+i] == 0)
                    return false;

                mp[curr+i]--;
                if(mp[curr+i] < 1){
                    mp.erase(curr+i);
                }
            }
        }
        return true;
    }
};