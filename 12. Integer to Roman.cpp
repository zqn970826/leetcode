

char *intToRoman(int num){
    char *s = (char *)malloc(sizeof(char)*500);
    *s = '\0';
    char c[][3] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int v[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    for (int i = 12; i >= 0; i--)
    {
        while (num >= v[i])
        {
            strcat(s, c[i]);
            num -= v[i];
        }
    }
    return s;
}