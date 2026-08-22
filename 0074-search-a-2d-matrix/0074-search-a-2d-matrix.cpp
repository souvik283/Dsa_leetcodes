class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = size(matrix) -1, col = size(matrix[0])-1;
        int st = 0, end = row, mid, row2;
        
        while(st <= end){
            mid = st + (end-st)/2;

            if(matrix[mid][0] <= target && matrix[mid][col] >= target ){
                row2=mid;
                break;
            }else if (matrix[mid][0] > target){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        st= 0; end = col;

        while(st <= end){
            mid = st + (end-st)/2;

            if(matrix[row2][mid] == target ){
                return true;
            }else if (matrix[row2][mid] > target){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        

        return false;
    }
};