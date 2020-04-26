// XOR
int singleNumber(int* nums, int size){
    for (int i = 1; i < size; i++)
    {
        nums[0] ^= nums[i];
    }
    return nums[0];
}