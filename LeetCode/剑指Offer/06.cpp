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
    vector<int> reversePrint(ListNode* head) {
        vector<int> ans,stack;
        ans.clear();stack.clear();
        ListNode* p = head;
        if(p==NULL){
            //考虑输入为空的情况
            return ans;
        }
        while(p->next != NULL){
            stack.push_back(p->val);
            p=p->next;
        }
        ans.push_back(p->val);
        if(stack.empty()){
            //考虑只有一个元素的情况
            return ans;
        }
        vector<int>::iterator p2;
        p2=stack.end()-1;
        while(p2!=stack.begin()){
            ans.push_back(*p2);
            p2--;
        }
        ans.push_back(*p2);
        return ans;
    }
};
// 输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。

//  

// 示例 1：

// 输入：head = [1,3,2]
// 输出：[2,3,1]
//  

// 限制：

// 0 <= 链表长度 <= 10000

// 来源：力扣（LeetCode）
// 链接：https://leetcode-cn.com/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。