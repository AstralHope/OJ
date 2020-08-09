/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var findNumberIn2DArray = function(matrix, target) {
    if(matrix.length===0 || matrix[0].length===0){return false;}
    var n=0;
    var m=matrix[0].length-1;
    while(n<matrix.length && m>=0){
            if(matrix[n][m]===target){return true;}
            else if(matrix[n][m]>target){m--;}
            else{n++;}
        }
        return false;
};
