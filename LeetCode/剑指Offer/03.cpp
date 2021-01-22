class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {//题目给的数字都在数组nums里
        int n = nums.size();//获取数组的长度n
        int *a;
        a = new int[n];//创建一个长度为n的数组a
        while(n>0){//将a的每一项初始化为0，例如示例中给的例子就创建了一个数组a=[0,0,0,0,0,0,0]
            a[--n]=0;
        }
        
        //直接用a[x]的值表示x出现的次数，当x>1时出现重复，得到结果
        
        for(int i=0;i<nums.size();i++){
            //从0开始，依此访问nums[i]，
            if(a[nums[i]]==0){
                a[nums[i]]++;//例如示例中nums[0]=2，就把a[2]的值+1；第二次循环来的时候a[3]的值+1；第三次和第四次的分别a[1]+1;a[0]+1,这个时候a=[1,1,1,1,0,0,0]
            }else{//第五次访问的时候num[4]=2,这个时候a[2]已经等于1了，不满足if的条件，就执行else的内容，返回num[4]的值2，函数运行结束
                return nums[i];
            }
        }
        return 0;
    }
};
// 找出数组中重复的数字。


// 在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。

// 示例 1：

// 输入：
// [2, 3, 1, 0, 2, 5, 3]
// 输出：2 或 3 
//  

// 限制：

// 2 <= n <= 100000

// 来源：力扣（LeetCode）
// 链接：https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
