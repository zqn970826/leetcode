// c++ version
class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.size(), A = 0, B = 0;
        int s[10] = {0}, g[10] = {0};
        for (int i = 0; i < n; i++)
        {
            if (secret[i] == guess[i])
            {
                A++;
            }
            s[secret[i]-'0']++;
            g[guess[i]-'0']++;
        }
        for (int i = 0; i < 10; i++)
        {
            if (s[i] <= g[i])
            {
                B += s[i];
            }
            else
            {
                B += g[i];
            }
        }
        string res="";
        res+=to_string(A);
        res+='A';
        res+=to_string(B-A);
        res+='B';
        return res;
    }
};


// c
char *getHint(char * secret, char * guess){
    int n = strlen(secret), A = 0, B = 0;
    int s[10] = {0}, g[10] = {0};
    for (int i = 0; i < n; i++)
    {
        if (secret[i] == guess[i])
        {
            A++;
        }
        s[secret[i]-'0']++;
        g[guess[i]-'0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        B += s[i]<g[i]?s[i]:g[i];
    }
    char *a = (char *)malloc(100);
    memset(a, ' ', 100);
    int i = 99;
    B -= A;
    a[i--] = '\0';
    a[i--] = 'B';
    if (B == 0)
    {
        a[i--] = '0';
    }
    while (B)
    {
        a[i--] = B%10 + '0';
        B /= 10;
    }
    a[i--] = 'A';
    if (A == 0)
    {
        a[i--] = '0';
    }
    while (A)
    {
        a[i--] = A%10 + '0';
        A /= 10;
    }
    return a+i+1;
}

