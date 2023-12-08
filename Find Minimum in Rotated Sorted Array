class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int s=0,h=n-1;
        while(s<h){
            if(nums[s]<nums[h])
                return nums[s];

            int mid=(s+h)/2;
            
            if(nums[mid]>=nums[s])
                s=mid+1;
            else
                h=mid;
        }
        return nums[s];
            
    }
};

//Another solution would be sorting and printing first element. But optimised solution is the one above
