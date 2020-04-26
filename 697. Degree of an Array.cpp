// 暴搜
int findShortestSubArray(int* nums, int numsSize){
    int a[50000] = {0};
    int max = 1, min = INT_MAX, count, start, end, j;
    for (int i = 0; i < numsSize; i++)
    {
        a[nums[i]]++;
    }

    for (int i = 0; i < 50000; i++)
    {
        if (max < a[i])
        {
            min = 0;
            max = a[i];
            count = a[i];
            j = 0;
            while (j < numsSize && nums[j] != i)
            {
                j++;
            }
            start = j;
            count--;
            for (j += 1; j < numsSize && count; j++)
            {
                if (nums[j] == i)
                {
                    count--;
                }
            }
            end = j-1;
            min = end-start+1;
        }
        else if (max == a[i])
        {
            max = a[i];
            count = a[i];
            j = 0;
            while (j < numsSize && nums[j] != i)
            {
                j++;
            }
            start = j;
            count--;
            for (j += 1; j < numsSize && count; j++)
            {
                if (nums[j] == i)
                {
                    count--;
                }
            }
            end = j-1;
            if (min > end-start)
            {
                min = end-start+1;
            }
        }
    }
    return min;
}

int findShortestSubArray(int* nums, int numsSize) {
	int i=0;
	int count[50000]={0};
	int first[50000]={0};
	int res=0,degree=0;
	for(i=0;i<numsSize;i++)
	{
		if(first[nums[i]]==0) first[nums[i]]=i+1;
		count[nums[i]]++;
		if(count[nums[i]]>degree)
		{
			degree=count[nums[i]];
			res=i-first[nums[i]]+2;
		}
		else if(count[nums[i]]==degree)
		{
			if((i-first[nums[i]]+2)<res)
				res=i-first[nums[i]]+2;
		}
	}
	return res;
}