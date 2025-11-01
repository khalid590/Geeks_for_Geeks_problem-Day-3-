#include<bits/stdc++.h>

using namespace std;
int main()
{
	
	int n;
	cin >> n;
	
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	
	int sum = 0;
	
	for(int i=0; i<n-1; i++)
	{
		sum = sum + a[i];
	}
	
	int sum2 = n*(n+1)/2;
	
	int ans = sum2 - sum;
	
	cout << ans << endl;
	
}
