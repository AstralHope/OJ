/**
 * @param {number[]} nums
 * @return {number}
 */
var findRepeatNumber = function(nums) {
    var a=[];
    for(var i=0; i < nums.length; i++){
        a[i]=0;
    }
    for(var i=0; i < nums.length; i++){
        if(a[nums[i]]===0){
            a[nums[i]]+=1;
        }else{
            return nums[i];
        }
    }
};
