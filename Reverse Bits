class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans=0;
        for(int i=0;i<31;i++){
            int x=n&1;
            ans=ans | x;
            ans=ans<<1;
            n=n>>1;
        }
        return ans|n;
    }
};
