class Solution {
public:
    bool isEvent(int n){
        return (n & 1) == 1;
    }
    vector<int> exchange(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            while(isEvent(nums[i]) &&i<j){
                i++;
            }
            while(!isEvent(nums[j]) && i<j){
                j--;
            }
            if(i<j){
                swap(nums[i],nums[j]);
                i++;j--;
            }
            
        }
        return nums;
    }
};
