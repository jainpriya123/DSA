class Solution {
public:
    bool judgeSquareSum(int c) {
        long s = 0, e = (long) std::sqrt(c);
        while (s <= e) {
            long sum = s * s + e * e;
            if (sum < c) {
                s++;
            } else if (sum > c) {
                e--;
            } else {
                return true;
            }
        }
        return c == 1;
    }
};