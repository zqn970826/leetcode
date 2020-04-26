
int compare(void *a, void *b) {
    return *(int *)a - *(int *)b;
}

int findContentChildren(int* g, int gSize, int* s, int sSize){
    qsort(g, gSize, sizeof(g[0]), compare);
    qsort(s, sSize, sizeof(s[0]), compare);
    int i = 0, j = 0;
    while (i < gSize && j < sSize)
    {
        if(g[i] <= s[j])
        {
            i++;
        }
        j++;
    }
    return i;
}