class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b=0,s=1;
        int profit=0;
        int n=prices.size();
        while(b<n && s<n){
            int x=prices[s]-prices[b];
            if(x>=0){
                if(x>=profit)
                    profit=x;
                s++;
            }
            else{
                b=s;
                s++;
            }
        }
        return profit;
    }
};

//Two Pointer Solution. Pointer 'b' starts at 0 and 's' at 1. we take differnce of elements at s and b. If it is greater than 0 and greater than profit update profit and //increment s. Else update b to s and increment s.
