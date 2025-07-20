class Solution {
public:
    int reverse(int x) {
        int ans=0,rem;

        while(x!=0)
        {
            rem=x%10; // remove the last digit
            x/=10; // store it
            if(ans>INT_MAX/10||ans<INT_MIN/10) // check
            return 0;
            ans=ans*10+rem; // multiply by 10 + rem to get the reverse digit
        }
        return ans;
    }
};

TC:O(N)
SC:O(1)