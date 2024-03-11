//Approach 2: Using Comparator.
//T.C = O(m+n), where m is size of order string and n is size of s string.
//S.C = O(1), constant space of 26 is required to store chars of s.

class Solution {
public:
    string customSortString(string order, string s) {
        //creating a map to store frequency of all elements of 's'.
        vector<int> index(26,-1);

        //storing frequency:
        for(int i=0; i<order.size(); i++){
            char ch = order[i];
            index[ch-'a'] = i;
        }

        auto myComparator = [&index](char& ch1, char& ch2){
            return index[ch1-'a'] < index[ch2-'a'];
        };

        sort(s.begin(), s.end(), myComparator);
        return s;
    }
};