//QUESTION: https://leetcode.com/problems/even-odd-tree/description/https://leetcode.com/problems/even-odd-tree/description/
//REFERENCE: https://youtu.be/ai7zemxYjz4?si=-Hbzr01XpnHPDc2W
//Approach: Using BFS.
//T.C = O(n), where 'n' is number of nodes in the tree.
//S.C = O(n), where 'n' is  space used by the queue data structure for the breadth-first search traversal for 'n' number of nodes.

class Solution {
public:
    bool isEvenOddTree(TreeNode* root) 
    {
        queue<TreeNode*> que;
        que.push(root);
        bool even_level = true;

        while(!que.empty())
        {
            //number of elements at that level:
            int n = que.size();

            int prev;
            if(even_level) 
                prev = INT_MIN;
            else
                prev = INT_MAX;

            //checking all nodes at that level whether follows rules:
            while(n--)
            {
                TreeNode* curr = que.front();
                que.pop();

                if(even_level && (curr->val%2 == 0 || curr->val <= prev))
                    return false;

                if(!even_level && (curr->val%2 != 0 || curr->val >= prev))
                    return false;
                
                prev = curr->val;
                if(curr->left) que.push(curr->left);
                if(curr->right) que.push(curr->right);
            }
            even_level = !even_level;
        }
        return true;
    }
};