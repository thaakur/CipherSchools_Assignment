class Solution {
public:
    #define POSSIBLE_MOVES 8
    int xMoves[8]={2,1,-1,-2,-2,-1,1,2};
    int yMoves[8]={1,2,2,1,-1,-2,-2,-1};
    bool isSafe(vector<vector<int>> &board, int row, int col,int N)
    {
        if(row<0 || row>=N || col<0 || col>=N || board[row][col]!=0){
            return false;
        }    
        else
        return true;
    }
    bool KnightTourHelper(vector<vector<int>> &board,int row,int col, int count, int N)
    {
        if( count ==  N * N + 1)
        {
            return true;
        }
        if(isSafe(board, row, col, N))
        {
            board[row][col]=count;
            int nextX, nextY;
            for(int  i = 0 ; i < POSSIBLE_MOVES ; i++)
            {
                nextX= row + xMoves[i];
                nextY = col + yMoves[i];
                if( KnightTourHelper(board, nextX, nextY, count+1, N)){
                    return true;
                }
            }
            board[row][col]=0;
        }
        return false;
    }
    vector<vector<int>> KnightTour(int N)
    {
        vector<vector<int>> board(N,vector<int>(N,0));
        KnightTourHelper(board, 0, 0, 1, N);
        return board;
    }

};
