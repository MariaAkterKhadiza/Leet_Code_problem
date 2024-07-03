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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
          {
            return head;
          }
          ListNode* tmp1= head;
          ListNode* tmp2=head->next;
          while(tmp1!=NULL && tmp2!=NULL)
          {
            swap(tmp1->val, tmp2->val);
            tmp1=tmp1->next->next;
           // tmp2=tmp2->next->next;
            if(tmp1==NULL)
            break;
            tmp2 = tmp2->next->next;
            
          }
          return head;
    }
};