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

// 栈
// 栈中只存在比栈底小的元素
// 比当前数小的入栈
// 比当前数大的出栈
int* dailyTemperatures(int* a, int size, int* returnSize){
    *returnSize = size;
    int *res = (int *)malloc(sizeof(int)*size);
    int stack[size+1], top = 0;
    stack[top] = 0;
    for (int i = 1; i < size; i++)
    {
        if (a[stack[top]] < a[i])  // push
        {
            while (-1 != top && a[stack[top]] < a[i])
            {
                res[stack[top]] = i-stack[top];
                top--;
            }
        }
        stack[++top] = i; // pop
    }
    while (-1 != top) // push
    {
        res[stack[top]] = 0;
        top--;
    }
    return res;
}