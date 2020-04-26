// 暴搜
int maxArea(int* h, int size){
    int temp, high, max = 0;
    for (int i = 0; i < size; i++)
    {
    	for (int j = i+1; j < size; j++)
    	{
    		high = h[i] < h[j] ? h[i]:h[j];
    		temp = high*(j-i);
    		max = temp<max ? max:temp;
    	}
    }
    return max;
}

// 双指针
int maxArea(int* h, int size)
{
    int l = 0, r=size-1, max = 0, temp;
    while(l < r)
    {
        temp = (r-l)*(h[l] < h[r]? h[l] : h[r]);
        max = max < temp ? temp : max;
        h[l] < h[r] ? l++:r--;
    }
    return max;
}