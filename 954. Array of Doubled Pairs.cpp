bool canReorderDoubled(int* A, int ASize){
    int a[100000] = {0};
    int max=-1;
    for (int i = 0; i < ASize; i++)
    {
        if (A[i] < 0)
        {
            a[-A[i]]++;
            if (max < -A[i])
            {
            	max = -A[i];
            }
        }
        else
        {
            a[A[i]]++;
            if (max < A[i])
            {
            	max = A[i];
            }
        }
    }

    int flag = 1;

    for (int i = 1; i <= max; i++)
    {
        if (a[i] != 0)
        {
            if (a[i] > a[2 * i])
            {
                flag = 0;
                break;
            }
            else
            {
            	a[2*i] -= a[i];
            }
        }
    }
    return flag;
}