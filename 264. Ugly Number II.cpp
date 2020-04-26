// DP
class Solution {
public:
    int nthUglyNumber(int n) {
        if(n <= 0) return 0;
        if(n == 1) return 1;
        int t2 = 0, t3 = 0, t5 = 0;
        int k[n];
        k[0] = 1;
        for(int i  = 1; i < n ; i ++)
        {
            k[i] = min(k[t2]*2,min(k[t3]*3,k[t5]*5));
            if(k[i] == k[t2]*2) t2++;
            if(k[i] == k[t3]*3) t3++;
            if(k[i] == k[t5]*5) t5++;
        }
        return k[n-1];
    }
};


int nthUglyNumber(int n) {
    int lists[n];
    memset(lists, 0, n*sizeof(int));
    int a,b,c;
    a = b = c = 0;
    lists[0] = 1;
    int tempa, tempb, tempc;
    for(int i = 1; i < n; i ++){
        tempa = lists[a] * 2;
        tempb = lists[b] * 3;
        tempc = lists[c] * 5;
        if(tempa < tempb){
            if(tempa < tempc){
                lists[i] = tempa;
                a ++;
            }else if(tempa > tempc){
                lists[i] = tempc;
                c ++;
            }else{
                lists[i] = tempc;
                a ++;
                c ++;
            }
        }else if(tempa > tempb){
            if(tempb < tempc){
                lists[i] = tempb;
                b ++;
            }else if(tempb > tempc){
                lists[i] = tempc;
                c ++;
            }else{
                lists[i] = tempc;
                b ++;
                c ++;
            }
        }else{
            if(tempc > tempa){
                lists[i] = tempb;
                a ++;
                b ++;
            }else if(tempc < tempa){
                lists[i] = tempc;
                c ++;
            }else{
                lists[i] = tempc;
                a ++;
                b ++;
                c ++;
            }
        }
    }
    return lists[n - 1];
}