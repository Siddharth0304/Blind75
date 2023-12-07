class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> se;
        se.insert(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(se.find(nums[i])!=se.end())
                return true;
            se.insert(nums[i]);
        }
        return false;
    }
};
