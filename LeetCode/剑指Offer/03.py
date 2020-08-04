class Solution:
    def findRepeatNumber(self, nums: List[int]) -> int:
        a = [0] * len(nums)
        for i in range(len(nums)):
            if(a[nums[i]] == 0):
                a[nums[i]]+=1
            else:
                ans = nums[i]
                break
        return ans