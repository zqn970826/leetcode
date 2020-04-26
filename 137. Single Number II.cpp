// 其他数出现三次，只有一个数出现一次
// 位运算，每位至少出现3的倍数次
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < 32; ++i) {
            int cnt = 0;
            for (auto x : nums) {
                cnt += (x>>i)&1;
            }
            res |= (cnt%3)<<i;
        }
        return res;
    }
};