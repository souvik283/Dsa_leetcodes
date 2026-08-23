class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int m = size(grid);
        vector<int> ans;
        unordered_set<int> s;

        for(int i=0 ; i< m ; i++ ){
            for(int j=0 ; j< m ; j++ ){
                if(s.count(grid[i][j])){
                    ans.push_back(grid[i][j]);
                }
                s.insert(grid[i][j]);
            }
        }

        for(int i=1; i<= m*m; i++){
            if(s.find(i) == s.end()){
                ans.push_back(i);
                break;
            }
        }

        return ans;
    }
};
