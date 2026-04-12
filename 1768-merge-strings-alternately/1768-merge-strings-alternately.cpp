class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int left=0 , right=0;
        while(left<word1.size() && right<word2.size()){
            ans.push_back(word1[left]);
            ans.push_back(word2[right]);
            left++;
            right++;
        }
        while(left<word1.size()){
            ans.push_back(word1[left]);
            left++;
        }
        while(right<word2.size()){
            ans.push_back(word2[right]);
            right++;
        }
        return ans;
    }
};