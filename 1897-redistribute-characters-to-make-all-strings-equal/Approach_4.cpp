class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        //Approach 4: Using STL only lamda written in same line.
        int count[26] = {0};
        int n = words.size();
        for( string x : words )
            for( char y : x ) count[y -'a']++;

        //all_of() ensures that all elements of count meet 
        //the given condition or not.
        //& is used to access all outside values in lambda function.
        return all_of( begin(count), end(count), [&](int freq){
            return freq % n == 0;
        });
    }
};