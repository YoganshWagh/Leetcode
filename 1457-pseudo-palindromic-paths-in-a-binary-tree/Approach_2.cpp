//QUESTION: https://leetcode.com/problems/pseudo-palindromic-paths-in-a-binary-tree/description/
//REFERENCE: https://youtu.be/FK-Fztwj2gM?si=cTy_KcTEGdJ9wgvj
//Approach 2: Bit Magic.
//T.C : O(n)
//S.C : O(1) (I am ignoring stack recursive space, else S.C  will be O(height of tree))

class Solution {
public:
    int result = 0;
    void solve(TreeNode* root, int count)  //pass by value
    {
        if(root == NULL) return;

        count = count ^ (1<<root->val);

        //leaf node is reached means one path is found.
        if(root->left == NULL && root->right == NULL)
        {
            if((count & (count-1)) == 0) result++;
        }

        solve(root->left, count);
        solve(root->right, count);

        //since we are passing by pass by value, the function 
        //will reset to initial count in each new function run.
        //count[root->val]--;
    }

    int pseudoPalindromicPaths (TreeNode* root) 
    {
        solve(root,0);
        return result;
    }
};