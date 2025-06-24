class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int maxi = INT_MIN;
        int curr = 0;
        
        for(int nums : arr ){
            curr = curr +nums;
            maxi = max(maxi,curr);
            if(curr<0) curr =0;
        }
        return maxi;
    }
};