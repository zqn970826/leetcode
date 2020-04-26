class Solution {
public:
    bool isUgly(int num) {
        if(0 == num)
        {
            return 0;
        }
        int a[3] = {2,3,5};
        for(int i = 0; i < 3; i++)
        {
            while(0 == num%a[i])
            {
                num/=a[i];
            }
        }
        return 1 == num ? 1:0;
    }
};