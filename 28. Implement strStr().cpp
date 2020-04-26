// KMP
int strStr(char * haystack, char * needle){
    int n1 = strlen(haystack), n2 = strlen(needle);
	if (n2 == 0)
	{
		return 0;
	}
	int j = 0, next[n2];
    memset(next, 0, sizeof(int)*n2);
    for (int i = 1; i < n2; i++)
    {
    	while(j > 0 && needle[j] != needle[i])
        {
        	j = next[j-1];
        }
        if(needle[i] == needle[j])
        {
        	j++;
            next[i] = j;
        }
    }
    j = 0;
    for(int i = 0; i < n1; i++)
    {
        while (j > 0 && needle[j] != haystack[i])
        {
        	j = next[j-1];
        }
        if (needle[j] == haystack[i])
        {
        	j++;
        }
        if(j==n2)
        {
        	return i-j+1;
        }
    }
    return -1;
}