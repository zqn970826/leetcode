int maximum69Number (int num){
    int a[5] = {0}, i = 0;
    while (num)
    {
        a[i++] = num%10;
        num /= 10;
    }

    for (i; i>=0; i--)
    {
        if (a[i] == 6)
        {
            a[i] = 9;
            break;
        }
    }
    return a[3]*1000+a[2]*100+a[1]*10+a[0];
}

