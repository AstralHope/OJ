/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        if(head==nullptr||k==0){
            return nullptr;
        }
        ListNode *pAhead=head;
        ListNode *pBehind=head;
        while(--k>0 && pAhead->next != nullptr){
            pAhead=pAhead->next;
        }
        if(k>0){
            return nullptr;
        }else{
            while(pAhead->next != nullptr){
                pAhead=pAhead->next;
                pBehind=pBehind->next;
            }
        }
        return pBehind;
    }
};
