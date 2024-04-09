#include<iostream>
using namespace std;
//dp[i]：表示从[0,i]的子数组中取元素，以nums[i]结尾的最长递增子序列的长度为dp[i]。
//if(nums[i] > nums[j])dp[i] = max{ dp[j] + 1,dp[i] };j要遍历所有小于i的数字
int f(int nums[], int len) {
	int* dp = new int[len];
	int i, j;
	for (i = 0; i < len; i++)dp[i] = 1;
	int res = 1;
	for (i = 1; i < len; i++) {
		for (j = 0; j < i; j++) {
			if (nums[i] > nums[j]) {
				dp[i] = max(dp[j] + 1, dp[i]);
			}
		}
		if (dp[i] > res)res = dp[i];
	}
	return res;
}