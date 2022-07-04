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
    int getDecimalValue(ListNode* head) {
        int ret = 0;
        int mul = 1;
        ListNode* tmp = head;
        while(tmp) {
            tmp = tmp->next;
            mul *= 2;
        }
        mul/=2;
        while(head) {
            ret += head->val * mul;
            head = head->next;
            mul/=2;
        }
        return ret;
    }
};