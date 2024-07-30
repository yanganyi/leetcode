class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor) return 1;

        unsigned int ans = 0;
        int sign = 1;

        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) sign = -1;

        unsigned int a = abs(dividend), b = abs(divisor);

        while (a >= b){
            int ct = 0;
            while (a > (b << (ct + 1))) ct++;
            a -= b << ct;
            ans += 1 << ct;
        }

        if (ans == (1 << 31) && sign == 1) return INT_MAX;

        if (sign == -1) return 0 - ans;

        return ans;
    }
};

// C++
// 0 ms (beats 100.00%)
// 8.52 mb (beats 9.92%)