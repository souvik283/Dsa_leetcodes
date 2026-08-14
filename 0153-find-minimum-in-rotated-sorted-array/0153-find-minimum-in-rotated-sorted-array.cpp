class Solution {
public:
    int findMin(vector<int>& nums) {
        int st=0, end=size(nums)-1, mid;

        

        while(st<=end){
            mid = st + (end-st)/2;

            if(nums[st]<=nums[end]){
                return nums[st];
            }
            

            if(nums[st]<=nums[mid]){
               st = mid+1;
                
            }else{
                if(nums[st] > nums[mid] && nums[end] > nums[mid]){
                    st ++;
                    end --;
                }else{
                end = mid-1;
                }
            }
        }
        return -1;
    }
};