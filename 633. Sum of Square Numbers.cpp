// 双指针， 注意是否超限
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i = 0, j = sqrt(c), flag = 0, res = c;
        while (i <= j)
        {
           if (res == i*i + j*j)
           {
               flag = 1;
               break;
           }
            else if (res < i*i + j*j)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return flag;
    }
};