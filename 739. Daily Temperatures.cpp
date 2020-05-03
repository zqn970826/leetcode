// Medium
// 暴搜
// Time Limit Exceeded
int* dailyTemperatures(int* T, int size, int* returnSize){
    *returnSize = size;
    for (int i = 0; i < size-1; i++)
    {
        int j = i+1;
        while (j < size && T[j] <= T[i])
        {
            j++;
        }
        if (size == j && T[size-1] <= T[i])
        {
            T[i] = 0;
        }
        else
        {
            T[i] = j-i;
        }
    }
    T[size-1] = 0;
    return T;
}

// 单向栈