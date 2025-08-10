class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        if(nums.empty()) return ans ;
        int left = 0;
        int right = nums.size()-1;

        while(left <= right){
            int mid  = left + (right - left) /2;

            if(nums[mid] < target){
                left = mid + 1;
            }else{
                right = mid - 1;
                if(nums[mid] == target){
                    ans[0] = mid;
                }
            }
        }
        
         if (ans[0] == -1) return ans;

        left = ans[0];
        right = nums.size()-1;

        while(left <= right){
            int mid  = left + (right - left) /2;

            if(nums[mid] > target){
                right = mid - 1;
            }else{
                left = mid + 1;
                if(nums[mid] == target){
                    ans[1] = mid;
                }
            }
        }

        return ans;
    }
};