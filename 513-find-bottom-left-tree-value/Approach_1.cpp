//QUESTION: https://leetcode.com/problems/find-bottom-left-tree-value/description/
//REFERENCE: https://youtu.be/YnabMptoE0I?si=hXD6e55RCybLLfBK
//Approach 1: Using DFS.
//T.C = O(n), where 'n' is number of npdes in the tree.
//S.C = O(1), Auxilary Space acquired.
//S.C = O(depth of tree), Space consumed by recursion stack.

class Solution {
public:
    int maxDepth;
    int result;
    void dfs(TreeNode* root, int currentDepth)
    {
        if(root == NULL) return;

        if(currentDepth > maxDepth) 
        {
            maxDepth = currentDepth;
            result = root->val;
        }

        dfs(root->left, currentDepth + 1);
        dfs(root->right, currentDepth + 1);
    }

    int findBottomLeftValue(TreeNode* root) 
    {
        maxDepth = -1;
        dfs(root, 0);
        return result;
    }
};