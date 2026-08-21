class Solution {
public:
    bool isPalindrome(int x) {
        int num =x, revNum=0, digit;

        if(x<0){
            return false;
        }

        while(num != 0){
            digit = num % 10;

            if(revNum > INT_MAX/10 || revNum < INT_MIN/10){
                return false;
            }

            revNum = revNum * 10 + digit;

            num = num /10;

        }

        if(x != revNum) {
            return false;
        }

        return true;
    }
};