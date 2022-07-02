class Solution {
public:
    
    vector<bool>visitedCol , diagRight,diagLeft;
    vector<vector<string>>ans;
    vector<string>board;
void nQ(int r , int n)
  {
    if(r == n)
    {
      ans.push_back(board);
      return ;
    }
    for(int c=0;c<n;c++)
    {
      if(!visitedCol[c] && !diagRight[c+r] && !diagLeft[n +(c-r)])
      {
        board[r][c] = 'Q';
        visitedCol[c] = diagRight[c+r] = diagLeft[n+(c-r)]=1;
        nQ(r+1 , n);
        visitedCol[c] = diagRight[c+r] = diagLeft[n+(c-r)]=0;
        board[r][c] = '.';
      }
    }
  }
    vector<vector<string>> solveNQueens(int n) {
        board.resize(n);
        for(int i=0;i<n;i++)
        {
            board[i] = string(n,'.');
        }
        visitedCol.resize(n);
        diagRight.resize(n*2+1);
        diagLeft.resize(n*2+1);
        for(int i=0;i<n;i++) visitedCol[i] =0;
        for(int i=0;i<n*2+1;i++)
        {
            diagRight[i] = diagLeft[i] =0;
        }
        nQ(0,n);
        return ans;

    }
};