// 找规律
char * convert(char * s, int numRows) {
    if (1 == numRows) {
        return s;
    }
    int n = strlen(s);
    int i = 0; // 行
    int j = 0; // 列
    int count = 0;
    char a[numRows][n+1];
    memset(a, ' ', numRows*(n+1));
    while (count < n) {
        while (i < numRows && count < n) {
            a[i++][j] = s[count++];
        }
        --i;
        while (i != 0 && count < n) {
            a[--i][++j] = s[count++];
        }
        ++i;
    }
    count = 0;
    for (i = 0; i < numRows; i++) {
        for (j = 0; j < n+1; j++) {
            if (a[i][j] != ' ') {
                s[count++] = a[i][j];
            }
        }
    }
    return s;
}