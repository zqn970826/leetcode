// Easy
// 栈：括号匹配
bool isValid(char * s){
    int n = strlen(s), j = 0;
	char str[n+1];  // 栈
	for (int i = 0; i <= n; i++)
	{
		if (s[i] == '(')
		{
			str[++j] = '(';
		}
		else if (s[i] == '[')
		{
			str[++j] = '[';
		}
		else if (s[i] == '{')
		{
			str[++j] = '{';
		}
		else if (s[i] == ')')
		{
			if (str[j] == '(')  // 匹配出栈
			{
				str[j--] = '0';
			}
			else
			{
                return false;
			}
		}
		else if (s[i] == ']')
		{
			if (str[j] == '[')  // 匹配出栈
			{
				str[j--] = '0';
			}
			else
			{
                return false;
			}
		}
		else if (s[i] == '}')
		{
			if (str[j] == '{')  // 匹配出栈
			{
				str[j--] = '0';
			}
			else
			{
                return false;
			}
		}
	}
    return 0 == j;
}