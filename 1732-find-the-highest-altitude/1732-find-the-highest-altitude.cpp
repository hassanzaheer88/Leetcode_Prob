class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0;
        int netGain = 0;
        for(int i=0 ; i<gain.size() ; i++){
            netGain = netGain + gain[i];
            gain[i] = netGain;
            if(netGain>max) max = netGain;

        }
        return max;
    }
};