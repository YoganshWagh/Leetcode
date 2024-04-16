//QUESTION: https://leetcode.com/problems/add-one-row-to-tree/description/
//REFERENCE: https://youtu.be/Za2OFfRLp70?si=bg-LwjjsyzYqaC2m
//Approach 1: Using Recursion.
//T.C = O(n), In the worst case, it visits every node in the tree once, which makes the time complexity O(n), where n is the number of nodes in the tree.
//S.C = O(h), In the worst case, the recursion depth would be equal to the height of the tree. Therefore, the space complexity is O(h), where h is the height of the tree.

class Solution {
public:
    TreeNode* add(TreeNode* root, int val, int depth, int curr){
        //base case
        if(root == NULL)  
            return NULL;

        if(curr == depth-1){
            //storing left and right before adding new row.
            TreeNode* leftTemp = root->left;
            TreeNode* rightTemp = root->right;

            //adding new row:
            root->left = new TreeNode(val);
            root->right = new TreeNode(val);

            //connecting stored nodes to new addded row:
            root->left->left = leftTemp;
            root->right->right = rightTemp;

            return root;
        }
        root->left = add(root->left, val, depth, curr+1);
        root->right = add(root->right, val, depth, curr+1);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;

            return newRoot;
        }

        //for current depth:
        int curr = 1;
        return add(root, val, depth, curr);
    }
};