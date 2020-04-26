// 注意最大最小值
int divide(int dividend, int divisor){
    long long x = dividend, y = divisor;
    return x/y < INT_MIN || x/y > INT_MAX ? INT_MAX:x/y;
}