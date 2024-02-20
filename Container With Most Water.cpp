class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,ans=0;
        while(i<j){
            ans=max(ans,(j-i)*min(height[i],height[j]));
            if(height[i]>height[j])
                j--;
            else
                i++;
        }
        return ans;
    }
};

//We use a Two Pointer Approach. We take i=0 and j=n-1. We find area with formula ans=max(ans,(j-i)*min(height[i],height[j]));
//if height(i) is less than height(j) i++ else j--
