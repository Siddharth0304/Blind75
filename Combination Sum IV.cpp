class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
        vector<unsigned int> dp(target+1,0);
        dp[0]=1;
        for(int i=1;i<=target;i++){
            for(int j=0;j<n;j++){
                if(i-nums[j]>=0)
                    dp[i]+=dp[i-nums[j]];
            }
        }
        return dp[target];
    }
};
/** The Combination Sum IV problem and Coin change 2 problem seem same but the solution of coin change 2 problem does not take duplicates i.e. it considers (1+2+1) and (1+1+2) as same. But Combination Sum IV considers duplicates so it has a different solution **/
