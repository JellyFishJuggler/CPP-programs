//Logic ekdam same hai n-queens II ki trh
//mtlb iska logic usme use hua h but maine usme likh diya h already 
class Solution {
public:

    bool isSafe(int row, int col, vector < string > board, int n) {

      int x = row;
      int y = col;

      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }

      col = x;
      row = y;
      while (col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }

      row = x;
      col = y;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;
    }

    void queen(int col, vector < string > & board, vector < vector < string >> & ans, int n) {
      if (col == n) {
        ans.push_back(board);
        return;
      }
      for (int row = 0; row < n; row++) {
        if (isSafe(row, col, board, n)) {
          board[row][col] = 'Q';
          queen(col + 1, board, ans, n);
          board[row][col] = '.';
        }
      }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0; i<n; i++){
            board[i] = s;
        }
        queen(0,board,ans,n);
        return ans;
    }
};