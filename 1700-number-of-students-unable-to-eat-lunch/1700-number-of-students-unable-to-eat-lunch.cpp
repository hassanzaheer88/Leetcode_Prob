class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        for(auto& s:students){
            q.push(s);
        }
        int count = 0;
        int i =0;
        while( i<sandwiches.size() && count<q.size()){
            int student = q.front();
            q.pop();
            if(student != sandwiches[i]){
                q.push(student);
                count++;
            }else{
                i++;
                count = 0;
            }   
        }
        return q.size();
    }
};