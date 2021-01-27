class Solution {
public:
    int fib(int n) {
        int ans;
        if(n < 2){
            ans=n;
        }else{
            int* count=new int[n+1];//创建长度为n+1的数组的写法
            count[0]=0;
            count[1]=1;
            for(int i=2;i<=n;i++){//i直接在这里声明就可以了，不用在一开始声明
                count[i]=(count[i-1]+count[i-2])%1000000007;//根据题目要求要取模防止数字过大
            }
            ans=count[n];
        }
        return ans;
    }
};
// 写一个函数，输入 n ，求斐波那契（Fibonacci）数列的第 n 项。斐波那契数列的定义如下：

// F(0) = 0,   F(1) = 1
// F(N) = F(N - 1) + F(N - 2), 其中 N > 1.
// 斐波那契数列由 0 和 1 开始，之后的斐波那契数就是由之前的两数相加而得出。

// 答案需要取模 1e9+7（1000000007），如计算初始结果为：1000000008，请返回 1。

//  

// 示例 1：

// 输入：n = 2
// 输出：1
// 示例 2：

// 输入：n = 5
// 输出：5
//  

// 提示：

// 0 <= n <= 100

// 来源：力扣（LeetCode）
// 链接：https://leetcode-cn.com/problems/fei-bo-na-qi-shu-lie-lcof
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
