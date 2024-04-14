//QUESTION: https://leetcode.com/problems/sum-of-left-leaves/description/
//REFERENCE: https://youtu.be/DOyWdDRzoS4?si=31MyfK9XuskbODip
//Approach 1: Using Recursion.
//T.C = O(n), since we have visited each node atleast once.
//S.C = O(1) i.e. Auxilary Space of System Stack.
//S.C = O(d), where d is depth of the tree accquired by Recusrion Space.

class Solution {
public:
    int solve(TreeNode* curr, TreeNode* parent){
        if(curr == NULL)
            return 0;
        
        //leaf node pe pauch gaye.
        if(curr->left == NULL && curr->right == NULL){
            if(parent != NULL && parent->left == curr)
                return curr->val;
        }
        
        int left = solve(curr->left, curr);
        int right = solve(curr->right, curr);
        
        return left + right;
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root, NULL);   
    }
};