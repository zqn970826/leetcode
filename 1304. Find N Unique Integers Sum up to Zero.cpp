int* sumZero(int n, int* returnSize){
    int *a = (int *)malloc(sizeof(int)*n);
    int sum = 0;
    *returnSize = n;
    for (int i = 0; i < n-1; i++)
    {
        a[i] = i;
        sum +=i;
    }
    a[n-1] = -sum;
    return a;
}