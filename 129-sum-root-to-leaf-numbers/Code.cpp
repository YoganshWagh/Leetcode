//QUESTION: https://leetcode.com/problems/sum-root-to-leaf-numbers/
//REFERENCE: https://youtu.be/KTwkq-MsJDw?si=4Ps4v-oYqIPr7it8
//Approach 1: Using Recursion.
//T.C = O(n), since we are visiting each node once.
//S.C = O(1), since no extra space is used.

class Solution {
public:
    int solve(TreeNode* root, int curr){
        if(root == NULL)
            return 0;

        curr = (curr*10) + root->val;

        //when leaf node is reached:
        if(root->left == NULL && root->right == NULL)
            return curr;

        int l = solve(root->left, curr);
        int r = solve(root->right, curr);

        return l + r;
    }
    int sumNumbers(TreeNode* root) {
        return solve(root, 0);
    }
};