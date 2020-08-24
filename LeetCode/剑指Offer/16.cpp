class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long b = n;
        //防止求负值时溢出
        if(x==0){
            return 0;
        }else if(b==0){
            return ans;
        }else if(b<0){
            x=1/x;
            b=0-b;
        }
        while(b>0){
            if(b&1){
                //n用2进制表示时的即为2的幂的和；则x^n=x与各项的积；
                //比如 9 = 1001 = 1*2^3 + 0*2^2 + 0*2^1 + 1*2^0
                //x^9=x^1+x^8
                ans*=x;
            }
            b=b>>1;
            x*=x;
        }
        return ans;

    }
};
// 实现函数double Power(double base, int exponent)，求base的exponent次方。不得使用库函数，同时不需要考虑大数问题。

//  

// 示例 1:

// 输入: 2.00000, 10
// 输出: 1024.00000
// 示例 2:

// 输入: 2.10000, 3
// 输出: 9.26100
// 示例 3:

// 输入: 2.00000, -2
// 输出: 0.25000
// 解释: 2-2 = 1/22 = 1/4 = 0.25
//  

// 说明:

// -100.0 < x < 100.0
// n 是 32 位有符号整数，其数值范围是 [−231, 231 − 1] 。

// 来源：力扣（LeetCode）
// 链接：https://leetcode-cn.com/problems/shu-zhi-de-zheng-shu-ci-fang-lcof
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。