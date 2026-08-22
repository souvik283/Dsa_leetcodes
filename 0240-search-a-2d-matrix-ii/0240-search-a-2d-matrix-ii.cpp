class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = size(matrix), n  = matrix[0].size();

        int st= 0, end=n-1;

        while( end>=0 && st < m){
            if(matrix[st][end] == target){
                return true;
            }else if(matrix[st][end] > target){
                end--;
            }else{
                st++;
            }
        }

    return false;
    }
};