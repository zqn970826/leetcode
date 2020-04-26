// 下一个大的字典数
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i, n = nums.size(), flag = 0;
        for (i = n-1; i > 0; i--)
        {
            // 后面局部逆序
            if (nums[i-1] < nums[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            sort(nums.begin(), nums.end());
        }
        else
        {
            int maxmin = i;
            for (int j = i; j < n; j++)
            {
                if (nums[i-1] < nums[j] && nums[j] < nums[maxmin])
                {
                    maxmin = j;
                }
            }
            flag = nums[i-1];
            nums[i-1] = nums[maxmin];
            nums[maxmin] = flag;
            sort(nums.begin()+i, nums.end());
        }
    }
};