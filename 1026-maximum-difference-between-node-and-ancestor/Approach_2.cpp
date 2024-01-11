//APPROACH 1: OPTIMAL SOLUTION
class Solution {
public:
    int findMaxDiff(TreeNode* root, int minV, int maxV)
    {
        if(root == NULL) 
            return abs(minV-maxV);

        minV = min(minV, root->val);
        maxV = max(maxV, root->val);

        int l = findMaxDiff(root->left, minV, maxV);
        int r = findMaxDiff(root->right, minV, maxV);

        return max(l,r);
    }

    int maxAncestorDiff(TreeNode* root) 
    {
        return findMaxDiff(root, root->val, root->val);
    }
};