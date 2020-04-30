// Easy
// 对二维数组操作
char * longestCommonPrefix(char ** strs, int size){
    char *s = (char *)malloc(sizeof(char)*500);
    int i = 0;
    while (size && i < strlen(strs[0]))
    {
        for (int j = 1; j < size; j++)
        {
            if (strlen(strs[j]) < i || strs[0][i] != strs[j][i])
            {
                s[i] = '\0';
                return s;
            }
        }
        s[i] = strs[0][i];
        i++;
    }
    s[i] = '\0';
    return s;
}