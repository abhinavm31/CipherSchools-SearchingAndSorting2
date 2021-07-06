//Merge two sorted arrays
#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int a[], int b[], int n, int m)
{
	map<int, bool> mp;
	
	for(int i = 0; i < n; i++)
		mp[a[i]] = true;
	
	for(int i = 0;i < m;i++)
		mp[b[i]] = true;
	

	for(auto i: mp)
		cout<< i.first <<" ";
}

int main()
{
	int size,size1;
	cin>>size>>size1;
	int a[size],b[size1];
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<size1;i++)
	{
		cin>>b[i];
	}
	mergeArrays(a, b, size, size1);
	return 0;
}


