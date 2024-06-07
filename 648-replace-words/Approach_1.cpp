//QUESTION: https://leetcode.com/problems/replace-words/
//REFERENCE: https://youtu.be/EFskdMa-eBg?si=A9la7oKlGnjGvpo9
//Approach 1: Using normal hashset and generating all substrings.
//T.C : o(n*l + m*l^2), n = number of words in the dictionary, m be the number of words in the sentence, and l be the average length of each word.
//S.C : O(n*l)
class Solution {
public:
    //Function to check Root word.
    string findRoot(string &word, unordered_set<string> &st)
    {
        for(int i = 1; i <= word.size(); i++){ //O(l)
            string root = word.substr(0, i);  //O(l)
            if(st.count(root))
                return root;
        }
        return word;
    }

    string replaceWords(vector<string>& dictionary, string sentence) 
    {
        //Step 1: Putting all root words into set access in O(1) time.
        unordered_set<string> st(dictionary.begin(), dictionary.end()); //O(n*l)
        
        //Step 2: Using stringstream tool of STL to access all words in sentence.
        stringstream ss(sentence);

        //Step 3: Creating string to store tokenized word by stringstream.
        string word = "";

        //Step 4: Creating string to store result after converting words to root.
        string ans = "";

        //Step 5: Checking word in dictionary whether root word exists.
        while(getline(ss, word, ' ')){  //O(m*l*l)
            ans += findRoot(word, st) + ' ';
        }

        //Step 6: Remove last extra " " space.
        ans.pop_back();

        return ans;
    }
};