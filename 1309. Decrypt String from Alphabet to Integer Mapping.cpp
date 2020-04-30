//Easy
char * freqAlphabets(char * s){
    char *a = (char *)malloc(sizeof(int)*1000);
    int i = 0, j = 0, n = strlen(s);
    while (i < n)
    {
        if (('1' == s[i] || '2' == s[i]) && i+2 < n && s[i+2] == '#')
        {
            a[j++] = 10*(s[i]-'0') + s[i+1]-'0' + 'a'-1;
            i += 3;
            continue;
        }
        else
        {
            a[j++] = s[i++] - '1' + 'a';
        }
    }
    a[j] = '\0';
    return a;
}