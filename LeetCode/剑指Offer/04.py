class Solution:
    def findNumberIn2DArray(self, matrix: List[List[int]], target: int) -> bool:
        if len(matrix)==0 or len(matrix[0])==0:
            return False
        n=0
        m=len(matrix[0])-1
        while n<len(matrix) and m>=0:
            if matrix[n][m]==target:
                return True
            elif matrix[n][m]>target:
                m-=1
            else:
                n+=1
        return False
