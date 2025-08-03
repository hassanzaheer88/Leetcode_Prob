class Solution {
   
public:
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int left =0;
        
        int count =0;
        int maxCount=0;

        for(int right=0;right<s.size();right++ ){
            int windowSize = right - left + 1 ;
            if(windowSize > k){
                if(isVowel(s[left])){
                    count--;
                }
                left++;
            }
            if(isVowel(s[right])){
                count++;
            }
            maxCount = max(maxCount,count);
        }
        return maxCount;
    }
    
};