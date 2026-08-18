class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=size(nums), piv =-1;

        for(int i= n-2 ; i>=0 ; i--){
            if(nums[i]< nums[i+1]){
                piv =i;
                break;
            }
        }

        if(piv == -1){
            int st = 0, end = n-1;
            while(st<=end){
                swap(nums[st++], nums[end--]); 
            }
            return;
        }

        for(int i=n-1; i>piv; i--){
            if(nums[i]>nums[piv]){
                swap(nums[i], nums[piv]);
                break;
            }
        }

    int st =piv+1, end=n-1;

    while(st<=end){
        swap(nums[st++], nums[end--]);
    }

        
    }
};