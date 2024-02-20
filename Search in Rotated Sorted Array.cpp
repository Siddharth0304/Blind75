class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,h=nums.size()-1,mid;
        while(s<=h){
            mid=(s+h)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[s]<=nums[mid]){
                if(nums[s]<=target && target<=nums[mid])
                    h=mid-1;
                else
                    s=mid+1;
            }
            else{
                if(target>=nums[mid] && target<=nums[h])
                    s=mid+1;
                else
                    h=mid-1;
            }
        }
        return -1;
    }
};
