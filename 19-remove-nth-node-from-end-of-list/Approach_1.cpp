//QUESTION: https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
//REFERENCE: https://youtu.be/ZQizovB_UdI?si=-kvbwRR6jW7Z7T0q
//Approach 1: Using 2 Pass.
//T.C = O(n), where n is the number of nodes in the linked list.
//S.C = O(1)

class Solution {
public:
    //Function to find length of LinkedList.
    int getLength(ListNode* head)
    {
        int length = 0;
        while(head != NULL)
        {
            length++;
            head = head->next;
        }
        return length;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        //Step 1: Find length of Linked List.
        int L = getLength(head);
        
        //Step 2: Write corner cases if there are any.
        if(n == L){
            ListNode* temp = head->next;
            delete(head);
            return temp;
        }

        //Step 3: Find length from front to traverse to delete nth element.
        int travel_front = L - n;
        ListNode* temp = head;
        ListNode* prev = NULL;

        //Step 4: Deleting the nth element from list.
        while(travel_front--) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
        delete(temp);
        return head;
    }
};