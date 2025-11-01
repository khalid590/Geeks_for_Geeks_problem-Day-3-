//input different array element and print the second largest element of that array element (Geeks_for_Geeks question)

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
	
	int largest_num = -1;
	
	for(int i=0; i<n; i++)
	{
		if(a[i] > largest_num)
		{
			largest_num = a[i];
		}
	}
	
	int second_largest_num = -1;
	
	for(int i=0; i<n; i++)
	{
		if(a[i] != largest_num)
		{
			second_largest_num = max(second_largest_num, a[i]);
		}
	}
	
	cout << second_largest_num << endl;
}
