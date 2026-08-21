class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char> row[9];
        set<char> col[9];
        set<char> box[9];
        for(int i = 0 ; i < 9 ; i++){
            for(int j = 0; j < 9 ; j++){
                char val = board[i][j];
                if(val == '.') continue;

                int box_i = (i/3)*3 + j/3;

                if(row[i].count(val) || col[j].count(val) ||                                             box[box_i].count(val)){
                    return false;
                }
                row[i].insert(val);
                col[j].insert(val);
                box[box_i].insert(val);
            }
            
        }

        return true;
    }
};
