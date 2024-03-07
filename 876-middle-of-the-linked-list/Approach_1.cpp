//QUESTION: https://leetcode.com/problems/middle-of-the-linked-list/description/
//REFERENCE: https://youtu.be/I8h_hI_BF3Y?si=iQRNuYDWAuxgIxcx
//Approach 1: Using Hare and Tortoise pointer i.e fast and slow pointer.
//T.C = O(n), where n is the number of nodes in the linked list. 
//S.C = O(1),  as it only uses a constant amount of extra space regardless of the size of the input linked list.

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};