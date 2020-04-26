
// 找规律，最终会得到一个小于十的数，当为1或者7时可以跳出循环
class Solution {
public:
    bool isHappy(int n) {
        if (0 <= n && n <= 9)
        {
            if (1 == n || 7 == n)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            int x = 0;
            while (n)
            {
                x += pow(n%10, 2);
                n/=10;
            }
            return isHappy(x);
        }
    }
};