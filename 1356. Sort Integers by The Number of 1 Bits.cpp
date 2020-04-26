class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int a[15][500] = {0}, count[15] = {0} , bit, temp;
        int size = arr.size();
        for (int i = 0; i < size; i++)
        {
            bit = 0;
            temp = arr[i];
            while (arr[i])
            {
                if (arr[i] & 1)
                {
                    bit++;
                }
                arr[i] = arr[i]>>1;
            }
            a[bit][count[bit]++] = temp;
        }
        bit = 0;
        for (int i = 0; i < 15; i++)
        {
            sort(a[i], a[i]+count[i]);
            for (int j = 0; j < count[i]; j++)
            {
                arr[bit++] = a[i][j];
            }
        }
        return arr;
    }
};