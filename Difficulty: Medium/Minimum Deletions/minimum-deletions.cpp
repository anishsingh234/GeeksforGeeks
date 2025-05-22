class Solution {
  public:
    int maximumPalindromicSequence(string &s, vector<vector<int>> &dp, int i, int j){
        if(i > j){
            return 0;
        }
        else if(i == j){
            return dp[i][j] = 1;
        }
        else if(dp[i][j] != -1){
            return dp[i][j];
        }
        else if(s[i] == s[j]){
            return dp[i][j] = 2 + maximumPalindromicSequence(s, dp, i + 1, j - 1);
        }else{
            return dp[i][j] = max(maximumPalindromicSequence(s, dp, i + 1, j), maximumPalindromicSequence(s, dp, i, j - 1)); 
        }
    }
    
    int minDeletions(string s) {
        // code here
        int n = s.length();
        vector<vector<int>> dp (n, vector<int>(n, -1));
        return s.length() - maximumPalindromicSequence(s, dp, 0, n - 1);
    }
};