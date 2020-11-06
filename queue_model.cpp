#include <cstdio>
#include <queue>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    queue<int> Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);

    printf("%ld\n", Q.size());
    printf("%d\n", Q.front());
    Q.pop();
    printf("%d\n", Q.front());
    Q.pop();
    printf("%d\n", Q.front());
    Q.pop();
    printf("%d\n", Q.front());
    Q.pop();
    printf("%d\n", Q.empty());
    return 0;
}