// 栈：括号匹配
bool isValid(char * s){
    int n = strlen(s);
	char str[n+1];  // 栈
	//memset(str, '0', n);

	int j = 0;
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
				j = 1;
				break;
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
				j = 1;
				break;
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
				j = 1;
				break;
			}
		}
	}
	if(j != 0)
	{
        return false;
	}
	else
	{
        return true;
	}
}