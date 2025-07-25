class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int low=0,high=n-1;
        vector<int>ans;
        while(low<=high){
            if(numbers[low]+numbers[high]==target){ // if target found return +1 index for not overflow
                ans.push_back(low+1);
                ans.push_back(high+1);
                return ans;
            }
            else if(target>numbers[low]+numbers[high]){ // if target is greater move right
                low++;
            }
            else{
                high--; //else move left
            }
        }
        return ans;
    }
};

// TC : O(N)
// SC:O(N) using extra space
