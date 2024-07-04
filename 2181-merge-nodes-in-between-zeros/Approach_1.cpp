//QUESTION: https://leetcode.com/problems/merge-nodes-in-between-zeros/description/
//REFERENCE: https://youtu.be/GyoRAaVCOKs?si=3vVoINFR_ivgUqvE
//Approach 1: Using Iterative approach.
//T.C = O(n), where we are traversing every node once.
//S.C = O(1), since we aren't using any extra space.
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode* p1 = head->next;
        ListNode* p2 = p1;

        while(p2 != NULL){

            int sum = 0;

            while(p2 != NULL && p2->val != 0){
                sum += p2->val;
                p2 = p2->next;
            }

            p1->val = sum;
            p2 = p2->next;
            p1->next = p2;
            p1 = p2;
        }
        return head->next;
    }
};