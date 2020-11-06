#include <cstdio>
#include <stack>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    stack<int> S;
    char s[10] = "12+34-*";
    int a, b;
    for (int i = 0; i < 7; i++) {
        if ('+' == s[i]) {
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            S.push(a + b);
        } else if ('-' == s[i]) {
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            S.push(b - a);
        } else if ('*' == s[i]) {
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            S.push(a * b);
        } else {
            S.push(s[i]-'0');
        }
    }
    cout << S.top() << endl;
    return 0;
}