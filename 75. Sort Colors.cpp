void swap(int* nums, int i, int j) {
  int temp = nums[i];
  nums[i] = nums[j];
  nums[j] = temp;
}

void sortColors(int* nums, int numsSize){
	int p0 = 0, p2 = numsSize-1, i = p0;
	while (i <= p2)
	{
		if (nums[i] == 0)
		{
            swap(nums, i, p0);
			p0++;
			i++;
		}
		else if (nums[i] == 2)
		{
            swap(nums, i, p2);
			p2--;
		}
		else
		{
			i++;
		}
	}
}