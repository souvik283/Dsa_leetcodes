class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        if (m==0){
            nums1 = nums2;
        }
        int ptr1 =m-1 , ptr2=n-1, idx=size(nums1)-1;


        while(ptr1>=0 && ptr2>=0 && idx>=0){
            if(nums1[ptr1]< nums2[ptr2]){
                nums1[idx] = nums2[ptr2];
                ptr2--;
            }else{
                nums1[idx] = nums1[ptr1];
                ptr1--;
            }
            idx--;
        }
        if(ptr2>=0){
        while (idx>=0){
            nums1[idx] = nums2[ptr2];
            ptr2--;
            idx--;
        }
        }
    }
};