
// 
int maxProfit(int* prices, int pricesSize){
    int min = 0, prof = 0;
    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[min] > prices[i])
        {
            min = i;
        }
        if (i > min && prof < prices[i]-prices[min])
        {
            prof = prices[i]-prices[min];
        }
    }
    return prof;
}