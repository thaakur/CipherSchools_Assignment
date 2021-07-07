
class Solution {
public:
    bool findInRow(vector<vector<char>> board, int row){
        set<char> seen;
        for(int i=0;i<9;i++)
        {
            char ch = board[row][i];
            if(ch!='.'){
                if(seen.insert(ch).second == false)
                {
                    return false;
                }
            }
        }
        return true;
    }

    bool findInCol(vector<vector<char>> board, int col){
        set<char> seen;
        for(int i=0;i<9;i++)
        {
            char ch = board[i][col];
            if(ch!='.'){
                if(seen.insert(ch).second == false)
                {
                    return false;
                }
            }
        }
        return true;
        
    }

    bool findInBox(vector<vector<char>> board, int startRow, int startCol){
        
        set<char> seen;
        for(int row =0; row<3;row++)
        {
            for(int col =0;col<3;col++)
            {
                char ch = board[row+startRow][col+startCol];
                if(ch!='.')
                {
                    if(seen.insert(ch).second == false)
                    {
                        return false;
                    }
                    
                }
            }
        }
        return true;
    }

    bool isValidSudokuHelper(vector<vector<char>> board, int row, int col){
        return findInRow(board,row) && findInCol(board, col) && findInBox(board, row - row%3, col- col%3);  
    }


    bool isValidSudoku(vector<vector<char>> board){
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(!isValidSudokuHelper(board,i,j))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
