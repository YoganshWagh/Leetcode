//QUESTION: https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/description/
//REFERENCE: https://youtu.be/qb7br7auuOc?si=u9IDD_Gfr1o_8POf
//Approach 1: Iterating through entire list.
//T.C = O(n), where 'n' is the size of link list.
//S.C = O(m), where 'm' is the space consumed by unordered_set.
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) 
    {
        //inserting all 'nums' elements into 'set' for quick access.        
        unordered_set<int> st(nums.begin(), nums.end());

        //handling the head.
        while(head != NULL && st.find(head->val) != st.end()){
            ListNode* temp = head;
            head = head->next;
            delete(temp); //deleting hanging node.
        }

        ListNode* curr = head;
        while(curr != NULL && curr->next != NULL)
        {
            if( st.find(curr->next->val) != st.end() ){
                ListNode* temp = curr->next;
                curr->next = curr->next->next; //curr->next is updated.
                delete(temp); //deleting hanging node.
            }
            else{
                curr = curr->next;
            }
        }
        return head;
    }
};