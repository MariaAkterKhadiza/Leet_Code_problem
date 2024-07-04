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
    int size(ListNode *head)
      {
        ListNode *tmp = head;
        int count = 0;
        while(tmp!= NULL)
          {
            count ++;
            tmp =tmp->next;
          }
          return count;
      }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *tmp1 = head;
        ListNode *tmp2 = head;
        for(int i=1; i<k; i++)
          {
            tmp1 = tmp1->next;
          }
          int sz = size(head);
          for(int i=1;i<sz-k+1; i++)
            {
                tmp2 = tmp2->next;
            }
            int tmp = tmp1->val;
            tmp1->val= tmp2->val;
            tmp2->val = tmp;
            return head;

    }
};