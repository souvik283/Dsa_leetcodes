
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2,0);
       unordered_map<int, int> m;
       int n = size(nums), first, sec;

        for(int i=0; i<n; i++){
            first = nums[i];
            sec= target - first;
            if(m.find(sec) != m.end()){
                ans[1] = i;
                ans[0] = m[sec];
            }
            m[first]=i;
        }

        return ans;
       
    } 
};