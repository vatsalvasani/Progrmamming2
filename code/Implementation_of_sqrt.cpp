class Solution {
public:
//brutforce is find the number a for which a*a=x
        int mySqrt(int x) {
        if(x == 1) return 1;
        int l = 0;
        int r = x;
        while(l < r - 1){  // ** not l < r => think about the case r = l + 2
            int mid = l + (r - l) / 2;
            if(mid == x / mid) return mid; // prevent from mid * mid overflow
            else if(mid > x / mid) r = mid;  // prevent from mid * mid overflow
            else l = mid; // *** not l = mid + 1
        }
        return l;
    }
};