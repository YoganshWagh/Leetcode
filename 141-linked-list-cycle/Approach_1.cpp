//QUESTION: https://leetcode.com/problems/linked-list-cycle/description/
//REFERENCE: https://youtu.be/_UgjW4lkfhk?si=L52am3BdVe7ybhi-
//Approach 1: Brute Force.
//T.C = O(n), since we are traversing each node once.
//S.C = O(n), since taking a Hash map to store all values in linked List.

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) 
            return false;
            
        unordered_map<int,int> umap;

        while(head != NULL)
        {
            int val = head->val;
            if(umap.find(val) != umap.end()) return true;
            umap[val]++;
            head = head->next;
        }
        return false;
    }
};