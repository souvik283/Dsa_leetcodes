class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int output = nums[0];
        int cSum = 0;

        for(int i=0; i< size(nums); i++){
            cSum += nums[i];
            output = max(cSum, output);

            if(cSum<0){
                cSum = 0;
            }
        }

        return output;
    }
};