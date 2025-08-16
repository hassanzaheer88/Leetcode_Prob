class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(); //3-> total no. of rows
        int cols = matrix[0].size(); //4 -> total no. of cols

        int left = 0;
        int right = rows * cols - 1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            int row = mid / cols;
            int col = mid % cols;
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] > target) right = mid - 1;
            else left = mid + 1;
        }
        return false;
    }
};