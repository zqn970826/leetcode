// Easy
int compare(void *a, void *b) {
    return *(int *)a - *(int *)b;
}

int findContentChildren(int* g, int gSize, int* s, int sSize){
    //给小孩胃口和饼干尺寸排序
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

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, j = 0;
        while(i < g.size() && j < s.size()){
            if(g[i] <= s[j])
            {
                i++;
            }
            j++;
        }
        return i;
    }
};