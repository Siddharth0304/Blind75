class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n,0);
        vector<int> suf(n,0);
        pre[0]=1;
        int x=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=x;
            x=x*nums[i];
        }
        x=nums[n-1];
        suf[n-1]=1;
        for(int i=n-2;i>=0;i--){
            suf[i]=x;
            x=x*nums[i];
        }
        for(int i=0;i<n;i++)
            nums[i]=pre[i]*suf[i];
        return nums;
    }
};

//Alternate solution can just be done by taking product of elements and dividing with respective elements. But if elements are zero we face problem. But above solution does not have any problem
