class Solution {
public:
    string replaceSpace(string s) {
        int i=0;
        //基础的String用法，找到空格然后替换
        while(i<s.size()){
            //依次从s[0]开始找空格
            if(s[i]==' '){
                //有空格了把s[i]擦掉，比如i=2时，s[i]=' '
                s.erase(i,1);//s = "Weare happy.",s[i]='a'
                s.insert(i,"%20");//s = "We%20are happy.",s[i]='%'
                i+=3;//已经替换掉掉%20三个字符肯定不用看了没有空格所以i+3，s = "We%20are happy.",s[i]='a'
            }else{i++;}//没有空格就i+1继续找
        }
        return s;
    }
};
// 请实现一个函数，把字符串 s 中的每个空格替换成"%20"。

//  

// 示例 1：

// 输入：s = "We are happy."
// 输出："We%20are%20happy."
//  

// 限制：

// 0 <= s 的长度 <= 10000

// 来源：力扣（LeetCode）
// 链接：https://leetcode-cn.com/problems/ti-huan-kong-ge-lcof
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
