class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int left = 0;
        for( int right = 0;right < nums.size();right++ ){
            if (nums[right] ==0 ){
                left = right + 1;
            }else{
                count = max(count, right - left +1);
            }
        }
        return count;
    }
};