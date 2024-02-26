//QUESTION: https://leetcode.com/problems/same-tree/description/
//REFERENCE: https://youtu.be/YtoibyDlzk0?si=9CxgBcCNnvwLlUtP
//Approach 1: Using Recursion.
//T.C = O(n), where 'n' is the number of nodes in the tree. This is because the function visits each node once, comparing them for equality.
//S.C = O(n), where 'n' is the height of the tree.

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(p == NULL && q == NULL) 
            return true;

        if((p == NULL && q != NULL) || (p != NULL && q == NULL))
            return false;

        //value of both is same
        //if not then return false.
        if(p->val != q->val)
            return false;

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};