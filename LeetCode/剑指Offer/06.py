# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def reversePrint(self, head: ListNode) -> List[int]:
        ans=[]
        if head is None:
            return ans
        while not head.next is  None:
            ans=[head.val]+ans
            head = head.next
        ans=[head.val]+ans
        return ans
