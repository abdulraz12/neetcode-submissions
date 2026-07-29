class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> row(9);
        vector<unordered_set<int>> col(9);
        vector<vector<unordered_set<int>>> squares(3, vector<unordered_set<int>>(3));

        for(int r = 0; r < 9; r++){
            for(int c = 0; c < 9; c++){
                if (board[r][c] == '.')
                    continue;
                if(row[r].count(board[r][c]) || col[c].count(board[r][c]) || 
                squares[r / 3][c / 3].count(board[r][c]))
                    return false;
                
                col[c].insert(board[r][c]);
                row[r].insert(board[r][c]);
                squares[r / 3][c / 3].insert(board[r][c]);
            }
        
        }
        return true;
    }

};
