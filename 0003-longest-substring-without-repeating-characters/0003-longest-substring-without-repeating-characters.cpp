class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>set1;
        int maxLength = 0;
        int left = 0;
        for(int right =0;right<s.size();right++){
            if(set1.find(s[right]) != set1.end()){
                while(set1.find(s[right]) != set1.end()){
                    set1.erase(s[left]);
                    left++;
                }
            }
            set1.insert(s[right]);
            int windowsize = right - left + 1;
            maxLength = max(maxLength,windowsize);
        }
        return maxLength;
    }
};