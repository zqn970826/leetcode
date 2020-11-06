// 筛选法求素数
int countPrimes(int n){
    char a[n+1];
    memset(a, 0, n+1);
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (a[i] == 0)
        {
            count++;
            for (int j = 2*i; j < n; j += i)
            {
                a[j] = 1;
            }
        }
    }
    return count;
}
