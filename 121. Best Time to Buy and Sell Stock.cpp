// Easy
// 贪心
// 一次股票交易包含买入和卖出，只进行一次交易，求最大收益。
// 只要记录前面的最小价格，将这个最小价格作为买入价格，然后将当前的价格作为售出价格，查看当前收益是不是最大收益。
int maxProfit(int* prices, int pricesSize){
    int min = 0, prof = 0;
    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[min] > prices[i])
        {
            min = i;
        }
        if (prof < prices[i]-prices[min])
        {
            prof = prices[i]-prices[min];
        }
    }
    return prof;
}