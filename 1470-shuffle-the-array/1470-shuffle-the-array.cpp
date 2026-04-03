class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n);
       int i=0;
       int left=0,right=n;
       while(left<n && right<nums.size()){
        ans[i]=nums[left];
        i++;
        left++;
        ans[i]=nums[right];
        i++;
        right++;
       }
       return ans;
    }
};