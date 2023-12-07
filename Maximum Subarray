class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            dp[i]=max(dp[i-1],0)+nums[i];
        }
        return *max_element(dp,dp+n);
    }
};

//Also known as Kadani's algorithm
