class Solution {
public:
    bool isValid(vector<int>& piles, int h,int k){
        long long totalHours= 0;
        for(auto pile:piles){
            totalHours += ceil(double(pile) / k);
        }
        return totalHours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPileValue = *max_element(piles.begin(),piles.end());

        int left = 1;
        int right = maxPileValue;

        int answer = maxPileValue;

        while(left <= right){
            int k = left + (right - left) / 2; //mid

            if(isValid(piles,h,k)){
                answer = k;
                right = k - 1;
            }else{
                left = k + 1;
            }
        }
        return answer;
    }
};