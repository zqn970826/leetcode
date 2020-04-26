int* singleNumber(int* nums, int size, int* returnsize){
    *returnsize = 2;
    int *a = (int *)malloc(sizeof(int)*2);
    a[0] = 0, a[1] = 0;
    int xor = 0, mask = 0;
    for (int i = 0; i < size; i++)
    {
        xor ^= nums[i];
    }
    mask = xor&-xor;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] & mask)
        {
            a[0] ^= nums[i];
        }
    }
    a[1] = a[0]^xor;
    return a;
}

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int mask = 0;
        for (auto val : nums)
        {
            mask ^= val;
        }//mask = A ^ B

        mask &= -mask;
        vector<int> res(2,0);
        for (auto val : nums)
        {
            if (val & mask)
            {
                res[0] ^= val;
            }
            else
            {
                res[1] ^= val;
            }
        }
        return res;
    }
};