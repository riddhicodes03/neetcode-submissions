class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
          vector<unordered_set<int>>col(board.size());
     vector<unordered_set<int>>block(9);
     for(int i = 0; i<board.size();i++){
        unordered_set<int>row;
        for(int j = 0;j<board[i].size();j++){

            if(board[i][j]=='.')
            continue;

          char x = board[i][j];

          int block_num = (i/3)*3+(j/3);

          if(row.contains(x)||col[j].contains(x)||block[block_num].contains(x))
          return false;

        row.insert(x);
        col[j].insert(x);
        block[block_num].insert(x);
        
        }
     }  
     return true; 
    }
};
