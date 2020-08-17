class Solution {
public:
    int movingCount(int m, int n, int k) {
        vector<vector<bool>> block(m ,vector<bool>(n,false));   //m*n的二维vector，所有元素为false
        return dfs(block,0,0,k);
    }

    int num(int n){
        int counter = 0;
        while(n>0){
            counter += n%10;
            n/=10;
        }
        return counter;
    }
    int dfs(vector<vector<bool>>& block,int m, int n,int k){
        //越界或已经走过或大于k则终止
        if(m>=block.size() || n>=block[0].size() || num(m)+num(n)>k || block[m][n]){return 0;}
        block[m][n]=true;
        //只需要向右走和向下走
        int ans=dfs(block,m,n+1,k)+dfs(block,m+1,n,k)+1;
        return ans;
    }
};
// 地上有一个m行n列的方格，从坐标 [0,0] 到坐标 [m-1,n-1] 。一个机器人从坐标 [0, 0] 的格子开始移动，它每次可以向左、右、上、下移动一格（不能移动到方格外），也不能进入行坐标和列坐标的数位之和大于k的格子。例如，当k为18时，机器人能够进入方格 [35, 37] ，因为3+5+3+7=18。但它不能进入方格 [35, 38]，因为3+5+3+8=19。请问该机器人能够到达多少个格子？

//  

// 示例 1：

// 输入：m = 2, n = 3, k = 1
// 输出：3
// 示例 2：

// 输入：m = 3, n = 1, k = 0
// 输出：1
// 提示：

// 1 <= n,m <= 100
// 0 <= k <= 20

// 来源：力扣（LeetCode）
// 链接：https://leetcode-cn.com/problems/ji-qi-ren-de-yun-dong-fan-wei-lcof
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
