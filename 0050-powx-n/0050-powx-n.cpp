class Solution {
public:
    double myPow(double x, long int n) {
        if(x == 0.0) return 0.0;
        if(x == 1.0) return 1.0;
        if(n == 0) return 1.0;
        if(x == -1 && n%2 == 0) return 1.0;
        if(x == -1 && n%2 != 0) return -1.0;

        double ans = 1;
        if(n<0){
            n = -n;
            x = 1/x;
        }
       
       while(n>0){
        if(n%2 == 1){
            ans *= x;
        }
        x *= x;
        n /= 2;
       }

        return ans;
        
    }
};