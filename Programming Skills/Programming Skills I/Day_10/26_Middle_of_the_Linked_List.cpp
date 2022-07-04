/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    // Approach 1
    /*
    int listLength(ListNode* head) {
        int len = 0;
        while(head) {
            head = head->next;
            ++len;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {
        int mid = listLength(head)/2;
        int cnt = 0;
        while(cnt!=mid) {
            head = head->next;
            ++cnt;
        }
        return head;
    }
    */
   // Approach 2
   ListNode* middleNode(ListNode* head) {
       ListNode* slow = head;
       ListNode* fast = head;
       while(fast->next){
           slow = slow->next;
           if(fast->next->next)
               fast = fast->next->next;
           else
                fast = fast->next;
       }
       return slow;
       
    }
};