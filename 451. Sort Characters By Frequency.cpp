// https://leetcode.com/problems/sort-characters-by-frequency/
char * frequencySort(char * s){
    int a[100] = {0}, b[100] = {0}, c[100] = {0}; // a打表， b存最大， c保存a
    int max, index, n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        a[s[i]-' ']++;
        c[s[i]-' ']++;
    }
	for (int i = 0; i < 100; i++)
	{
		max = -1, index = 0;
		for (int j = 0; j < 100; j++)
		{
			if (max < a[j])
			{
				max = a[j];
				index = j;
			}
		}
		a[index] = -1;
		b[i] = index;
	}
    index = 0;
    for (int i = 0; i < 100; i++)
    {
        while (c[b[i]]--)
        {
            s[index++] = ' '+b[i];
        }
    }
    s[index] = '\0';
    return s;
}