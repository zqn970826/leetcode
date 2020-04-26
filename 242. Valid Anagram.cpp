

bool isAnagram(char * s, char * t){
    int n = strlen(s), m = strlen(t), a[26] = {0};
    if (n != m)
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        a[s[i]-'a']++;
        a[t[i]-'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}

