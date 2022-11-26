class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x;
        long l = 1, r = (x/2) + 1;
        while(l < r){
            long m = (l + r)/2;
            if (m * m > x) 
                r = m;
            else
                l = m + 1; 
        }
        return l - 1; 
    }
};