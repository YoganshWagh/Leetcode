//QUESTION: https://leetcode.com/problems/minimum-depth-of-binary-tree/description/
//REFERENCE: https://leetcode.com/problems/minimum-depth-of-binary-tree/solutions/4087308/best-o-n-solution/
//T.C = O(n)
//S.C = O(n)

class Solution {
public:
    int minDepth(TreeNode* root) 
    {
        if(root == NULL) 
            return 0;
        if(root->left == NULL && root->right == NULL) 
            return 1;

        int left = INT_MAX;
        if(root->left)
            left = minDepth(root->left);

        int right = INT_MAX;
        if(root->right)
            right = minDepth(root->right);
            
        return min(left, right)+1;
    }
};