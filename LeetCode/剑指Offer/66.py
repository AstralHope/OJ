class Solution:
    def constructArr(self, a: List[int]) -> List[int]:
        ans = [1] * len(a)
        left = [1] * len(a)
        right =[1] * len(a)
        i=1
        while i<len(a):
            left[i]=left[i-1]*a[i-1]
            i+=1
        i=len(a)-2
        while i>=0:
            right[i]=right[i+1]*a[i+1]
            i-=1
        i=0
        while i<len(a):
            ans[i]=left[i]*right[i]
            i+=1
        return ans