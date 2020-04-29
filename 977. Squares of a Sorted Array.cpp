// easy
// 双指针
int* sortedSquares(int* A, int size, int* returnSize){
    int *res = (int *)malloc(size*sizeof(int));
    *returnSize = size;
    int l = 0, r = size-1, templ, tempr, c = size-1;
    while (l <= r)
    {
        templ = A[l]*A[l];
        tempr =  A[r]*A[r];
        if (templ < tempr)
        {
            res[c--] = tempr;
            r--;
        }
        else
        {
            res[c--] = templ;
            l++;
        }
    }
    return res;
}

// 排序
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for (auto &i:A)
        {
            i *= i;
        }
        sort(A.begin(), A.end());
        return A;
    }
};