//Stock Buy Sell to Maximize Profit
#include <bits/stdc++.h>
using namespace std;

int maxProfit(int prices[], int N)
{
	int n = N;
	int cost = 0;
	int maxCost = 0;

	if (n == 0)
	{
		return 0;
	}
	int min_price = prices[0];

	for(int i = 0; i < n; i++)
	{
		min_price = min(min_price, prices[i]);
		cost = prices[i] - min_price;

		maxCost = max(maxCost, cost);
	}
	return maxCost;
}

int main()
{
	int N;
	cin>>N;
	int prices[N];
	for(int i=0;i<N;i++)
	{
		cin>>prices[i];
	}
	cout << maxProfit(prices, N);

	return 0;
}


