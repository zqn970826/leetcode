// Medium
// 注意：得将待比较组比较完才有资格作为最终的最长子串
char * findLongestWord(char *s, char **d, int size){
    int max = 0, index = 0, count;
    char *p, *q;
    for (int i = 0; i < size; i++)
    {
        count = 0, p = s, q = d[i];
        while (*p != '\0' && *q != '\0')
        {
            if (*p == *q)
            {
                count++;
                p++;
                q++;
            }
            else
            {
                p++;
            }
        }
        if (count < strlen(d[i]))
        {
            continue;
        }
        if (max < count)
        {
            max = count;
            index = i;
        }
        else if (max == count)
        {
            index = strcmp(d[i], d[index]) < 0 ? i:index;
        }
    }
    return 0 == max ? "":d[index];
}