//QUESTION: https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/description/
//REFERENCE: https://youtu.be/5UWEVMg10rY?si=IAkHZR2TYbPbctth
//Approach 1: Using Map and Dummy node.
//T.C = O(n), where n is the number of nodes in the linked list.
//S.C = O(n), because the code uses an unordered map (unordered_map<int, ListNode*> mp) to store prefix sums along with the corresponding node.

class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        int prefixSum = 0;
        unordered_map<int,ListNode*> mp;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        mp[0] = dummy;

        while(head != NULL){
            prefixSum += head->val;

            if(mp.find(prefixSum) != mp.end()){
                //delete wala kaam.
                ListNode* start = mp[prefixSum];
                ListNode* temp = start;
                int pSum = prefixSum;
                
                while(temp != head) {
                    temp = temp->next;
                    pSum += temp->val;
                    if(temp != head)
                        mp.erase(pSum);
                }
                
                start->next = head->next;
            }
            else{
                mp[prefixSum] = head;
            }
            head = head->next;
        }
        return dummy->next;
    }
};