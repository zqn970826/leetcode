// Medium
// 无重叠区间
// 贪心
bool compare(vector<int>& v1, vector<int>& v2)
{
        return v1[1] < v2[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if (0 == n)
        {
        	return 0;
        }
        sort(intervals.begin(), intervals.end(), compare);
        int count = 0, j = 0;
        for (int i = 0; i < intervals.size(); i++)
        {
            if (intervals[j][1] <= intervals[i][0])
            {
                count++;
                j = i;
            }
        }
        return intervals.size()-count-1;
    }
};