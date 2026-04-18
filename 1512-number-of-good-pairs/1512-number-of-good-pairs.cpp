class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int paircount=0;
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            if(map.count(nums[i])){
                paircount= paircount+map[nums[i]];
                map[nums[i]]++;
            }else{
                map[nums[i]]++;
            }
        }
        return paircount;
    }
};