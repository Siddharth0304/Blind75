class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int dp[n+1][amount+1];
        for(int j=0;j<=amount;j++)
            dp[0][j]=INT_MAX-1;
        dp[0][0]=1;
        for(int i=1;i<=n;i++)
            dp[i][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=amount;j++){
                if(j>=coins[i-1])
                    dp[i][j]=min(dp[i-1][j],(dp[i][j-coins[i-1]]+1));
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        if(dp[n][amount]>2147483640)
            return -1;
        return dp[n][amount]-1;
    }
};
