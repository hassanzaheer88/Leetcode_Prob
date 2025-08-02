class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxSum = INT_MIN;
        int curSum = 0;

        int left = 0;
        int right = 0;
        while(right < nums.size()){
            curSum = curSum + nums[right];
            if(right - left + 1 == k){
                maxSum = max(maxSum , curSum);
                curSum = curSum - nums[left];
                left++;
            }
            right++;
        }
        return double(maxSum)/k;
    }
};