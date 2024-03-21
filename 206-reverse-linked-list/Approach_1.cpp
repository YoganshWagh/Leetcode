//QUESTION: https://leetcode.com/problems/reverse-linked-list/description/
//REFERENCE: https://youtu.be/RreHsOfi14w?si=QnxpDdZdMStEhzyy
//Appraoch 1: Using Two Pointer.
//T.C = O(n), since we are traversing each element once.
//S.C = O(1), since we haven't used any extra space.

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(curr != NULL){
            ListNode* temp = curr;
            curr = curr->next;
            temp->next = prev;
            prev = temp;
        }
        return prev;
    }
};