***************************************** Sum Method ******************************************************
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=0,n=nums.size();
        for(int i=0;i<nums.size();i++)
            s=s+nums[i];
        cout<<s;
        return (((n+1)*n)/2)-s;
    }
};
*************************************************************************************************************
*************************************** Binary Search *******************************************************
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=0,h=nums.size()-1,ans=-1;
        while(s<=h){
            int mid=(s+h)/2;
            if(nums[mid]==mid)
                s=mid+1;
            else{
                ans=mid;
                h=mid-1;
            }
        }
        return (ans>=0?ans:nums.size());
    }
};
***************************************************************************************************************
********************************************* Bit Manipulation ***************************************************
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=0,y=0;
        for(int i=0;i<=nums.size();i++)
            x=x^i;
        cout<<x;
        for(int i=0;i<nums.size();i++)
            y=y^nums[i];
        
        return x^y;
    }
};
***************************************************************************************************************
