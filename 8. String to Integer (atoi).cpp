int myAtoi(char * str){
    int n = strlen(str), i = 0, flag = 0;
    long sum = 0;
    while (i < n && str[i] == ' ') {
        i++;
    }
    if (i < n && str[i] == '-') {
        flag = 1;
        i++;
    }
    else if (i < n && str[i] == '+') {
        i++;
    }
    while (i < n) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum = sum*10 + str[i] - '0';
            if (sum > INT_MAX) {
                break;
            }
        }
        else {
            break;
        }
        i++;
    }

    if (sum > INT_MAX) {
        return flag == 1 ? INT_MIN : INT_MAX;
    }
    return flag == 1 ? -sum:sum;
}