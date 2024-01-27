class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0],nums[1]);
        int dp[n-1],ap[n];
        dp[0]=nums[0];
        dp[1]=max(dp[0],nums[1]);
        for(int i=2;i<n-1;i++)
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        ap[0]=0;
        ap[1]=nums[1];
        ap[2]=max(ap[1],nums[2]);
        for(int i=3;i<n;i++)
            ap[i]=max(ap[i-2]+nums[i],ap[i-1]);
        return max(ap[n-1],dp[n-2]);
    }
};


/**This problem is a little tricky at first glance. However, if you have finished the House Robber problem, this problem can simply be decomposed into two House Robber problems.
Suppose there are n houses, since house 0 and n - 1 are now neighbors, we cannot rob them together and thus the solution is now the maximum of

1)Rob houses 0 to n - 2;
2)Rob houses 1 to n - 1. **/
