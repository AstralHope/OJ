class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0; j<board[0].size();j++){
                if(board[i][j]==word[0] && dfs(board, word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
    bool dfs(vector<vector<char>>& board, string word,int i,int j,int s){
        if(i>=board.size() || j>=board[0].size() || i<0 || j<0 || board[i][j]!=word[s]){return false;}
        if (s == word.size() - 1) return true;
        char tmp = board[i][j];
        board[i][j]='#';
        bool flag = dfs(board,word,i+1,j+1,s+1)||dfs(board,word,i+1,j-1,s+1)||dfs(board,word,i-1,j+1,s+1)||dfs(board,word,i-1,j-1,s+1);
        board[i][j]=tmp;
        return flag;
    }
};
