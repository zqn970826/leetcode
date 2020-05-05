// Hard
// 计数排序
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int firstMissingPositive(int* nums, int size){
    for (int i = 0; i < size; i++)
    {
        while (0 < nums[i] && nums[i] <= size && nums[i] != nums[nums[i]-1])
        {
            swap(&nums[i], &nums[nums[i]-1]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (i+1 != nums[i])
        {
            return i+1;
        }
    }
    return size+1;
}