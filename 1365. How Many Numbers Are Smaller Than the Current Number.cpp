// 打表
int* smallerNumbersThanCurrent(int* nums, int size, int* returnSize){
    *returnSize = size;
    int hash[101] = {0}, count = 0, i;
    for (i = 0; i < size; i++)
    {
        hash[nums[i]]++;
    }

    for (i = 0; i < 101; i++)
    {
        if (0 < hash[i])
        {
            count += hash[i];
            hash[i] = count-hash[i];
        }
    }

    for (i = 0; i < size; i++)
    {
        nums[i] = hash[nums[i]];
    }
    return nums;
}