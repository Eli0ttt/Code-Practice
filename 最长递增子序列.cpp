#include<iostream>
using namespace std;
//dp[i]����ʾ��[0,i]����������ȡԪ�أ���nums[i]��β������������еĳ���Ϊdp[i]��
//if(nums[i] > nums[j])dp[i] = max{ dp[j] + 1,dp[i] };jҪ��������С��i������
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