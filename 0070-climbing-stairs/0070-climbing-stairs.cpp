class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;

        long long a = 1;
        long long b = 2;
        long long c = 0;

        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }

        return c;
    }
};