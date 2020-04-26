// 同26、27， 只是间隔变了，允许2个相同的数连续出现
int removeDuplicates(int* nums, int size){
    int count = 0, same = 0;
    for (int i = 1; i < size; i++)
    {
        if (nums[count] != nums[i])
        {
        	nums[++count] = nums[i];
            same = 0;
        }
        else
        {
            same++;
            if (same < 2)
            {
            	nums[++count] = nums[i];
            }
        }
    }
    return size ? ++count:0;
}