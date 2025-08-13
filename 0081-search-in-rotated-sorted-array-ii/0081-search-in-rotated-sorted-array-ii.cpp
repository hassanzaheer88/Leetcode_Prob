class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0 , high = nums.size()-1;
        while(low <= high){
            int mid = low + (high - low) /2;
            if(nums[mid] == target) return true;
            if(nums[low] < nums[mid]){
                if(nums[low] <= target && nums[mid] > target){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }else if(nums[low] > nums[mid]){
                if(nums[high] >= target && nums[mid] < target){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }else{
                low++;
            }
        }
        return false;
    }
};