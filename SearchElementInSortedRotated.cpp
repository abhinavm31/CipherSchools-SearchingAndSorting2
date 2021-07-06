//Search an element in sorted and rotated array
#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int l, int h, int ele)
{
	if (l > h)
		return -1;

	int mid = (l + h) / 2;
	if (arr[mid] == ele)
		return mid;

	if (arr[l] <= arr[mid]) 
	{
		if (ele >= arr[l] && ele <= arr[mid])
			return search(arr, l, mid - 1, ele);

		return search(arr, mid + 1, h, ele);
	}

	if (ele >= arr[mid] && ele <= arr[h])
		return search(arr, mid + 1, h, ele);

	return search(arr, l, mid - 1, ele);
}

int main()
{
	int n,ele;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cin>>ele;
	int i = search(arr, 0, n - 1, ele);

	if (i != -1)
		cout << i << endl;
	else
		cout << "Element not found";
}

