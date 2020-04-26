// 动态规划
// https://leetcode.com/problems/maximum-subarray/
int maxSubArray(int* nums, int numsSize){
    int max = nums[0], s = 0, i = numsSize, j = numsSize;
	while (0 < i--){
		s += nums[i];
		if (max < s){
			max = s;
		}
		if (s <= 0){
			s = 0;
            j = i;
		}
	}
    return max;
}
