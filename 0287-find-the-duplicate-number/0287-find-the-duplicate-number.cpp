class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = size(nums), ans;
        unordered_set<int> s;
        for(int i=0 ; i< n; i++){
            if(s.count(nums[i])){
                ans=nums[i];
                break;
            }
            s.insert(nums[i]);
        }

        return ans;
    }
};