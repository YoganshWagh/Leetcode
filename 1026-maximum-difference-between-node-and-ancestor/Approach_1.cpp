//QUESTION: https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/description/
//REFERENCE: https://youtu.be/cvekQzmBdcs?si=cvE8WK6FWXClWSRz
//T.C = O(n^2)
//S.C = O(n)   for a skewed tree, the height could be equal to the number of nodes

//APPROACH 1: BRUTE FORCE 
class Solution {
public:
    int maxDiff;
    //function to calculate difference of child & ancestor.
    void findMaxDiffUtil(TreeNode* root, TreeNode* child)
    {
        if(root == NULL || child == NULL) return;

        //difference:
        maxDiff = max(maxDiff, abs(root->val - child->val));

        //to find diff with other child nodes.
        findMaxDiffUtil(root, child->left);
        findMaxDiffUtil(root, child->right);
    }

    //to traverse all nodes one by one.
    void findMaxDiff(TreeNode* root)
    {
        if(root == NULL) return;

        findMaxDiffUtil(root, root->left);
        findMaxDiffUtil(root, root->right);

        findMaxDiff(root->left);
        findMaxDiff(root->right);
    }

    int maxAncestorDiff(TreeNode* root) 
    {
        maxDiff = INT_MIN;
        findMaxDiff(root);
        return maxDiff;
    }
};