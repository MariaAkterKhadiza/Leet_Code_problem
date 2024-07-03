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
    int size(ListNode *head){
        ListNode *temp = head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    int getDecimalValue(ListNode* head) {
        int sz = size(head);
        int x = pow(2,sz-1);
        int ans = 0;
        for(ListNode *temp = head; temp!=NULL; temp = temp->next){
            if(temp->val == 1){
                ans+=x;
               
            }
             x/=2;
        }
        return ans;
    }
};