// 打表
int repeatedNTimes(int* A, int ASize){
    int b[10000] = {0}, i;
    for (i = 0; i <= ASize/2; i++)
    {
        if (++b[A[i]] > 1)
        {
            break;
        }
    }
    return A[i];
}