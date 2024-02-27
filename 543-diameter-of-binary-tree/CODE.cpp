//QUESTION: https://leetcode.com/problems/diameter-of-binary-tree/description/https://leetcode.com/problems/diameter-of-binary-tree/description/
//REFERENCE: https://youtu.be/15KwRECEXLU?si=7MmA71dOuGdkvT9S
//Approach: Using Recursion.
//T.C = O(n), where 'n' is number of nodes in the tree.
//Auxilary Space = O(1)
//Recursion Stack Space = O(n), where 'n' is height of the tree.

class Solution {
public:
    int solve(TreeNode* root, int& result)
    {
        //base case:
        if(root == NULL) return 0;

        int left = solve(root->left, result);
        int right = solve(root->right, result);

        result = max(result, left+right);

        return max(left, right) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) 
    {
        //if tree is empty:
        if(root == NULL) return 0;

        int result = INT_MIN;
        solve(root, result);

        return result;
    }
};