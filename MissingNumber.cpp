//Find the missing number
#include <bits/stdc++.h>
using namespace std;

int getMissingNo(int a[], int n)
{

	int total = (n + 1) * (n + 2) / 2;
	for (int i = 0; i < n; i++)
		total -= a[i];
	return total;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int miss = getMissingNo(arr, n);
	cout << miss;
}

