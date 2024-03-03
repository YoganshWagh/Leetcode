//QUESTION: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/
//REFERENCE: https://youtu.be/ZQizovB_UdI?si=-kvbwRR6jW7Z7T0q
//Approach 1: Using 2 Pass.
//T.C = O(n), where 'n' is number of nodes in the list.
//S.C = O(1)

class Solution {
public:
    //Fuction to find length of Linked List.
    int getLength(ListNode* head){
        int length = 0;
        while(head != NULL){
            length++;
            head = head->next;
        }
        return length;
    }

    ListNode* deleteMiddle(ListNode* head) {
        //Step 1: Calculate Length of Linked list.
        int L = getLength(head);
        
        //Step 2: Calculate middle element to be dileted.
        int mid = L/2;

        //Step 3: Corner Case.
        if(L==1){
            delete(head);
            return NULL;
        }

        //Step 4: Create two pointers, one 'temp' and other 'prev'.
        ListNode* temp = head;
        ListNode* prev = NULL;

        //Step 5: Iterate list till temp reaches middle node.
        while(mid--){
            prev = temp;
            temp = temp->next;
        }
        
        //Step 6: Point 'prev' pointer to next of 'temp' and delete 'temp'.
        prev->next = temp->next;
        delete(temp);
        return head;
    }
};