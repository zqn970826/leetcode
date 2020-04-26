// 函数
class Solution {
public:
    double myPow(double x, int n) {
        return pow(x, n);
    }
};

// 快速幂
class Solution {
public:
    double myPow(double x, int n) {
        int flag = 0;
        long long k = n;
        if (n < 0) {
            flag = 1;
            k *= -1;
        }

        double res = 1;
        while (k) {
            if (k & 1) {
                res *= x;
            }
            k = k>>1;
            x *= x;
        }
        return flag==1 ? 1/res:res;
    }
};