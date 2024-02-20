class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<3)
            return {};
        if(nums[0]>0)
            return {};
        vector<vector<int>> vec; 
        int target=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)  //If number fixed is +ve, stop there because we can't make it zero by searching after it.
                break;
            if(i>0 && nums[i]==nums[i-1])  //If number is getting repeated, ignore the lower loop and continue.
                continue;
            int p1=i+1,p2=nums.size()-1;
            while(p1<p2){
                if(nums[p1]+nums[p2]>target-nums[i])
                    p2--;
                else if(nums[p1]+nums[p2]<target-nums[i])
                    p1++;
                else{
                    vec.push_back({nums[i],nums[p1],nums[p2]});              
                    int llo=nums[p1],lho=nums[p2];  //Now again, to avoid duplicate triplets, we have to navigate to last occurences of num[low] and num[high] respectively
                    while(p1<p2 && nums[p1]==llo)
                        p1++;
                    while(p1<p2 && nums[p2]==lho)
                        p2--;
                }
            }

        }
        return vec;
        
    }
};
//This is two pointer approach
//Traverse the array and fix a number at every iteration.
//If number fixed is +ve, break there because we can't make it zero by searching after it.
