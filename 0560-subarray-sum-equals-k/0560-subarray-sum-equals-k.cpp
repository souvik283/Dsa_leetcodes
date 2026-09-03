class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int val , n= size(nums), count=0;
        vector<int> ps(n, 0);
        ps[0]=nums[0];
        unordered_map <int, int> m;

        for (int i=1; i<n; i++){
            ps[i] = ps[i-1] + nums[i];
        }
        
        for (int j=0; j<n; j++){
            if(ps[j] == k) count++;
            val = ps[j] - k;

            if(m.find(val) != m.end()){
                count += m[val];
            }
            m[ps[j]] ++;
        }

        return count;
    }
};