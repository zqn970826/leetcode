// Medium
// 重叠子区间
// 贪心
bool compare(vector<int>& v1, vector<int>& v2)
{
	return v1[1] < v2[1];
}

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        if (0 == n) return 0;
        sort(points.begin(), points.end(), compare);
        int count = 1, j = 0;
        for (int i = 0; i < points.size(); i++)
        {
            if (points[j][1] < points[i][0])
            {
                j = i;
                count++;
            }
        }
        return count;
    }
};