class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = size(matrix), col= matrix[0].size();
        int rowS =0, colS =0 , rowE=row-1, colE=col-1;
        vector<int> ans ;

        while(rowS <= rowE && colS <= colE){

            for(int i= colS ; i<= colE; i++){
                ans.push_back(matrix[rowS][i]);
            } 

            for(int i= rowS+1 ; i<= rowE; i++){
                 ans.push_back( matrix[i][colE]);
            } 

            for(int i= colE-1 ; i >= colS; i--){
                ans.push_back(matrix[rowE][i]);
            }

            for(int i= rowE-1 ; i>= rowS+1; i--){
                ans.push_back(matrix[i][colS]);
            }
            
        colE--;
        rowE--;
        colS++;       
        rowS++;

        }
    ans.resize(row*col);
        return ans;
    }
};