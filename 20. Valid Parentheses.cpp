// Easy
// 栈：括号匹配
// 思路：左边的括号入栈，匹配到右边的括号出栈
bool isValid(char * s){
    int n = strlen(s), j = 0;
	char str[n+1];  // 栈
	for (int i = 0; i < n; i++) {
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
			str[++j] = s[i]; // 左边入栈
		}
		else {
            if (0 == j) return false;
            if (s[i] == ')' && str[j] != '(') return false;
            if (s[i] == ']' && str[j] != '[') return false;
            if (s[i] == '}' && str[j] != '{') return false;
            str[j--] = '0'; // 右边出栈
        }
	}
    return 0 == j;
}


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0 ; i < s.size() ; ++i) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            	st.push(s[i]);
            }
            else {
                if(st.empty()) return false;
                if(s[i] == ')' && st.top() != '(') return false;
                if(s[i] == ']' && st.top() != '[') return false;
                if(s[i] == '}' && st.top() != '{') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};