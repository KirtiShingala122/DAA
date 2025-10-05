// User function Template for C++

class Solution {
  public:
    const long long MOD = 1000000007;

  long long int helper(int n,vector<long long > &memo){
            if (n < 2)
    {
        return n;
    }
      if (memo[n] != -1) return memo[n];
       return memo[n]=(helper(n-1,memo)+helper(n-2,memo)) % MOD;
  }
  
    long long int topDown(int n) {
        // code here
        vector<long long > memo(n+1,-1);
        // memo[0]=0;
        // memo[1]=1;
      return  helper(n,memo);
  
 
    }

    long long int bottomUp(int n) {
        
        // code here
      if (n < 2) return n;
        vector<long long > dp(n+1);
        dp[0] = 0;
        dp[1] = 1;
        for (int i=2;i<=n;i++) {
            dp[i]=(dp[i-1]+dp[i-2] )% MOD;
        }
        return dp[n];
    }
};
