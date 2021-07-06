//Matrix in Spiral Form

#include <bits/stdc++.h>
#define R 3
#define C 6
using namespace std;

void spiralPrint(int m, int n, int a[R][C])
{
	int i, k = 0, l = 0;

	while (k < m && l < n) 
	{
		for (i = l; i < n; ++i) 
		{
			cout << a[k][i] << " ";
		}
		k++;

		for (i = k; i < m; ++i) 
		{
			cout << a[i][n - 1] << " ";
		}
		n--;

		if (k < m) 
		{
			for (i = n - 1; i >= l; --i) 
			{
				cout << a[m - 1][i] << " ";
			}
			m--;
		}

		if (l < n) 
		{
			for (i = m - 1; i >= k; --i) 
			{
				cout << a[i][l] << " ";
			}
			l++;
		}
	}
}

int main()
{
	int a[R][C] = { { 10, 20, 30, 40, 50, 60 },
					{ 70, 80, 90, 100, 110, 120 },
					{ 130, 140, 150, 160, 170, 180 } };

	spiralPrint(R, C, a);
	return 0;
}


