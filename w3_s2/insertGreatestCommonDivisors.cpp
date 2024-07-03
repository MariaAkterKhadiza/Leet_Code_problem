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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* tmp = head;
        while(tmp->next != NULL)
          {
            int gcd = __gcd(tmp->val, tmp->next->val);
            ListNode* newnode = new ListNode(gcd);
                    newnode->next=tmp->next;
                    tmp->next = newnode;
                    tmp=tmp->next->next;
          }
          return head;
    }
};