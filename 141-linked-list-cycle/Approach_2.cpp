//Approach 2: Using Two Pointer.
//T.C = O(n), since we are traversing each node once.
//S.C = O(1)

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) 
            return false;

        //Declaring two pointers:
        ListNode *slow = head;
        ListNode *fast = head->next;

        while(slow != fast)
        {
            if(fast == NULL || fast->next == NULL)
                return false;
            
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};