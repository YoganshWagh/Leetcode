//QUESTION: https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/

class Solution {
public:
    int maxScore(string s) {

        //VARIBALE TO STORE SCORE OF LEFT & RIGHT SUBSTRING IN EACH ITERATION:
        int score = 0;

        //VECTOR TO STORE ALL SCORES OF EACH ITERATION:
        vector<int> scores;

        for( int i=0; i<s.size()-1; i++ )
        {
            //FOR COUNTING LEFT SCORE:
            for( int k=0; k<i+1; k++ )
            {
                if( s[k] == '0' )
                    score++;
            }
            //FOR COUNTING RIGHT SCORE:
            for( int j=i+1; j<s.size(); j++ )
            {
                if( s[j] == '1' )
                    score++;
            }

            //STORING EACH SCORE IN A VECTOR:
            scores.push_back(score);
            score = 0;
        }

        return *max_element( scores.begin(), scores.end() );
    }
};
