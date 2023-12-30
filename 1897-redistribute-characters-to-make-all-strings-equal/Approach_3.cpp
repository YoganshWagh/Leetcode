class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        //Approach 3: Using STL.
        int count[26] = {0};
        int n = words.size();
        for( string x : words )
            for( char y : x ) count[y -'a']++;

        //& is used to access all outside values in lambda function.
        auto lambda = [&](int freq){
            return freq % n == 0;
        };

        //all_of() ensures that all elements meet the given
        //condition or not.
        return all_of( begin(count), end(count), lambda);
    }
};