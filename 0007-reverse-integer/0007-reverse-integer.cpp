class Solution {
public:
    int reverse(int x) {
        int rev =0, dig;

        while(x != 0){
            dig = x%10;

            if(rev < INT_MIN/10 || rev > INT_MAX /10){
                return 0;
            }

            rev = rev * 10 + dig;

            x /= 10;
        }

        return rev;
    }
};