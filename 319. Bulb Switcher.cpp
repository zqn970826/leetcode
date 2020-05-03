// Medium
// 暴搜 Time Limit Exceeded
int bulbSwitch(int n){
    int a[n+1], count = 0; // init
    memset(a, 0, sizeof(int)*(n+1));
    for (int i = 0; i < n; i++)  // round
    {
        for (int j = i+1; j < n+1; j += i+1)
        {
            a[j] = !a[j];
        }
    }
    for (int i = 1; i < n+1; i++)
    {
        if (1 == a[i])
        {
            count++;
        }
    }
    return count;
}

// 规律：只有序号为完全平方数的灯才是亮的，解释如下。
// 初始状态确定(为关闭状态)，对应序号灯的状态取决于操作次数的奇偶性；操作奇数次则为亮，偶数次维持原样(还是灭)。问题的关键在于：序号的约数(包含1和自身在内)个数的奇偶性。
int bulbSwitch(int n){
    return sqrt(n);
}