//Approach 2: Using BFS.
//T.C = O(n), where 'n' is number of nodes in the tree.
//S.C = O(n), where 'n' is the number of nodes in the tree, as the queue can potentially hold all nodes at the bottom level.

class Solution {
public:
    int findBottomLeftValue(TreeNode* root) 
    {
        queue<TreeNode*> que;
        int result;
        que.push(root);

        while(!que.empty()) 
        {
            TreeNode* node = que.front();
            que.pop();
            
            result = node->val;

            if(node->right) que.push(node->right);
            if(node->left) que.push(node->left);
        }       
        return result;
    }
};