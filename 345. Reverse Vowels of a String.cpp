// 双指针
bool isVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return true;
    }
    return false;
}

char * reverseVowels(char * s){
    int n = strlen(s);
    if (n == 0)
    {
        return "";
    }
    char *p = s, *q = s+n-1, c;
    while (p < q)
    {
        while (p < q && !isVowel(*p))
        {
            p++;
        }
        while (p < q && !isVowel(*q))
        {
            q--;
        }
        c = *p;
        *p = *q;
        *q = c;
        p++;
        q--;
    }
    return s;
}