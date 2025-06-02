class Solution {
  public:
  
    int n,m;
    int solve(int x,int y,vector<vector<int>>&grid,vector<vector<int>>&dp){
        if(x==n-1&&y==m-1)
            return 1;
        if(x<0||y<0||x>=n||y>=m||grid[x][y]==1)
            return 0;
        if(dp[x][y]!=-1)
            return dp[x][y];
        int right=solve(x,y+1,grid,dp);
        int down=solve(x+1,y,grid,dp);
        return dp[x][y]=right+down;
    }
    
    int uniquePaths(vector<vector<int>> &grid) {
        // code here
        int cnt=0;
        n=grid.size(),m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        if(grid[n-1][m-1]==1)
            return 0;
        return solve(0,0,grid,dp);
    }
};

