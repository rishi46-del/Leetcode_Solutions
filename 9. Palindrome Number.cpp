class Solution {
public:
    bool isPalindrome(int x) {
        while(x<0){        // if x is less than zero we can't find palindrome so return false
            return false;
        }
        long long reversed=0; // for more big numbers
        long long temp=x;  // it will store the number which we have to traverse
        while(temp!=0) iterate till the number becomes 0
        {
            int digit=temp%10; take out the last value
            reversed=reversed*10+digit; multiply it by 10 and add that last value
            temp/=10; // removes the last digit
        }
        return reversed==x;  // if it equals x means it's palindrome/true
    }
};


TC:O(N)
SC:O(1)
