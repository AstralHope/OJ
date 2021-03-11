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
    ListNode* reverseList(ListNode* head) {
        ListNode* p=head;
        if(head != nullptr && head->next != nullptr){
            ListNode* pnext=p->next;
            head->next = nullptr;
            while(pnext!=nullptr){
                ListNode* pre=p;
                p=pnext;
                pnext=pnext->next;
                p->next=pre;
            }
        }
        return p;
    }
};
