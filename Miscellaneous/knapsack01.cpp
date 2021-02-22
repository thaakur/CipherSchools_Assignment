#include<iostream>
#include<stdio.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

int knapsack(int w[], int v[], int c, int n)
{
    int dp[n+1][c+1];
    memset(dp, -1, sizeof(dp));
	if (c == 0 || n == 0)
		return 0;
	if (dp[n][c] != -1)
		return dp[n][c];
	if (w[n - 1] <= c)
		return dp[n][c] = max(v[n - 1] + knapsack(w, v, c - w[n - 1], n - 1), knapsack(w, v, c, n - 1));
	else if (w[n - 1] > c)
		return dp[n][c] = knapsack(w, v, c, n - 1);
}
int main()
{
	int w[] = {1, 2, 3, 4, 5};
	int v[] = {2, 3, 4, 5, 7};
	int c = 7;
	cout << knapsack(w, v, c, 5);
}
