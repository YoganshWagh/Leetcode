//QUESTION: https://leetcode.com/problems/sort-characters-by-frequency/description/
//REFERENCE: https://youtu.be/pnxShVARLLw?si=w5pHk8v5nOLPhBJO
//Approach 1: Using Sorting.
//T.C = O(n) + O(nlogn) = O(nlogn), where 'n' is size of input string, nlogn is time complexity required by sort() function which dominates the overall time complexity.
//S.C = O(1)

class Solution {
public:
    typedef pair<char,int> P;
    string frequencySort(string s) 
    {
        //for storing frequency and alphabet.
        vector<P> vec(123);

        //storing the frequency and alphabet in vector.
        for(auto x : s) 
        {
            int freq = vec[x].second;
            vec[x] = {x, freq+1};
        }

        //lambda function. //pass by reference for fast processing
        auto lambda = [&](P &p1, P &p2){
            return p1.second > p2.second;
        };

        //sorting the vector in descending order as per question.
        sort(vec.begin(), vec.end(), lambda);

        //required answer string.
        string ans = "";
        
        //storing characters in string step-wise.
        for(int i=0; i<123; i++)
        {
            if(vec[i].second > 0)
            {
                int freq = vec[i].second;
                char alpha = vec[i].first;
                string temp = string(freq, alpha);

                ans += temp;
            }
        }
        return ans;
    }
};