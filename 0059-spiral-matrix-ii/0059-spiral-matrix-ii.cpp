class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int rowS =0, colS=0, rowE=n-1, colE = n-1, num=1;
        vector<vector<int>> ans(n, vector<int>(n, 0));

        while(colS <= colE && rowS <= rowE && num<=n*n){
           for(int i= colS; i <= colE; i++){
            ans[rowS][i] = num++;
           } 
           if(num>n*n) break;
           for(int i= rowS+1; i <= rowE; i++){
            ans[i][colE] = num++;
           }
           if(num>n*n) break;
           for(int i= colE-1; i >= colS; i--){
            ans[rowE][i] = num++;
           }
           if(num>n*n) break;
           for(int i= rowE-1; i >= rowS+1; i--){
            ans[i][colS] = num++;
           }

           rowS++;
           colS++;
           rowE--;
           colE--;
        }

        return ans;
    }
};