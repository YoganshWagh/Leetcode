//QUESTION: https://leetcode.com/problems/pseudo-palindromic-paths-in-a-binary-tree/description/
//REFERENCE: https://youtu.be/FK-Fztwj2gM?si=cTy_KcTEGdJ9wgvj
//Approach 1: Using Recursion
//T.C : O(n)
//S.C : O(1) (I am ignoring stack recursive space, else S.C  will be O(height of tree))

class Solution {
public:
    int result = 0;
    void solve(TreeNode* root, vector<int>& count)
    {
        if(root == NULL) return;

        count[root->val]++;

        //leaf node is reached means one path is found.
        if(root->left == NULL && root->right == NULL)
        {
            int oddFreq = 0;
            for(int i=1; i<=9; i++)
                if(count[i] % 2 != 0) oddFreq++; //odd element

            if(oddFreq <= 1) result++;
        }

        solve(root->left, count);
        solve(root->right, count);

        count[root->val]--;
    }

    int pseudoPalindromicPaths (TreeNode* root) 
    {
        vector<int> count(10,0);
        solve(root,count);
        return result;
    }
};