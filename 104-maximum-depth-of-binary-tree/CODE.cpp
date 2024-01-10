//QUESTION: https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
//TC - O(num of nodes) as we are traversing all the nodes of the tree
//SC - O(height of the tree) for the recursive stack

class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
        if(root == NULL) return 0;
        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);
        return max(maxLeft, maxRight) + 1;
    }
};