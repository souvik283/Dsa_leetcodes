class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int st=0, end=size(nums)-1, mid;

        while(st<=end){
            mid= st + (end-st)/2;
            if(nums[mid]==target){
                return true;
            }

           
            if(nums[st]==nums[mid] && nums[end]==nums[mid]){
                st +=1;
                end -=1;
            } else if(nums[st]<=nums[mid]){
                if(nums[mid]> target && nums[st]<=target){
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }else{
                if(nums[mid]< target && nums[end]>=target){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
        }
        
        return false;
    }
};