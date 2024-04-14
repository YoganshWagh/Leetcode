//Approach 2: Using a single bool variable.
//T.C = O(n), since we have visited each node atleast once.
//S.C = O(1) i.e. Auxilary Space.
//S.C = O(d), where d is depth of the tree accquired by Recusrion Space.

class Solution {
public:
    int solve(TreeNode* curr, bool isLeft){
        if(curr == NULL)
            return 0;
        
        //leaf node pe pauch gaye.
        if(curr->left == NULL && curr->right == NULL && isLeft == true)
                return curr->val;
        
        return solve(curr->left, true) + solve(curr->right, false);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root, false);   
    }
};