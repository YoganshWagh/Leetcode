//QUESTION: https://leetcode.com/problems/range-sum-of-bst/description/
//REFERENCE: https://youtu.be/qIFhQ2m6i64?si=cmHkoVTN43LDaby5
//T.C = O(n)  &&  S.C = O(n) = O(h) where 'h' is height of the tree

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        if( root == NULL ) return 0;

        //if root is within range then we add it.
        if( root->val >= low && root->val <= high )
        {
            return root->val + rangeSumBST(root->right, low, high) 
                + rangeSumBST(root->left, low, high);
        }

        //root->val < low then it is waste to go to left. We go to right.
        if( root->val < low ) return rangeSumBST( root->right, low,high);

        //root->val > high then it is waste to go to right. We go to left.
        return rangeSumBST( root->left, low, high);
    }
};