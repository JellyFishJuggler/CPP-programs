class Solution {
public:
// yeh function ensure kr rha h ki queen agr placed h (uss row / column / diagonal me) to uss direction me mt rkho
    bool isSafe(int row, int col, vector<string>& board, int n) {
        int x = row;
        int y = col;
        //lower diagonals
        while (x >= 0 && y >= 0) {
            if (board[x][y] == 'Q')
                return false;
            x--;
            y--;
        }
        
        row = x;
        col = y;
        while (y >= 0) {
            if (board[x][y] == 'Q')
                return false;
            y--;
        }
        //upper diagonals
        row = x;
        col = y;
        while (x < n && y >= 0) {
            if (board[x][y] == 'Q')
                return false;
            x++;
            y--;
        }
        return true;
    }
    // yeh queens ko place kr rha h aur count bda rha h ki itne tarike se kr skte h
    int queen(int col, vector<string>& board, int n) {
        if (col == n) {
            return 1;
        }
        int cout = 0;
        for (int row = 0; row < n; row++) {
            if (isSafe(row, col, board, n)) {
                board[row][col] = 'Q';
                cout += queen(col + 1, board, n);
                board[row][col] = '.';
            }
        }
        return cout;
    }
//yeh to bas mehhhh function calling ke liye h idhr
    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        return queen(0, board, n);
    }
};
