// 同27
int removeDuplicates(int* nums, int size){
    int j = 0;
    for (int i = 1; i < size; i++)
    {
        if (nums[j] != nums[i])
        {
            nums[++j] = nums[i];
        }
    }
    return 0==size ? 0:j+1;
}

