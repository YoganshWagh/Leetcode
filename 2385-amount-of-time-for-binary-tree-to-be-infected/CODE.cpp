//QUESTION: https://leetcode.com/problems/amount-of-time-for-binary-tree-to-be-infected/description/
//REFERENCE: https://youtu.be/Xm8jIjAK_Zs?si=oo21nZGjS1NpgxoM
//T.C : O(n)
//S.C : O(n) - Max depth of recursion call stack

//Approach-2 (Using DFS - one pass solution)
class Solution {
public:
    int result = INT_MIN;
    int solve(TreeNode* root, int start)
    {
        if(root == NULL) return 0;

        int LH = solve(root->left,start);
        int RH = solve(root->right,start);

        //tells that recusrion just came from leaf nodes.
        if(root->val == start)
        {
            result = max(LH,RH);
            return -1;
        }
        //there is no start in subtree.
        else if(LH >= 0 && RH >= 0)
            return max(LH,RH) + 1;
        //one of them is negative means we came up from start.
        else
        {
            int d = abs(LH) + abs(RH);
            result = max(result, d);
            return min(LH,RH) - 1;
        }
        return 0; //not required compulsorily
    }

    int amountOfTime(TreeNode* root, int start) 
    {
        solve(root,start);
        return result;
    }
};