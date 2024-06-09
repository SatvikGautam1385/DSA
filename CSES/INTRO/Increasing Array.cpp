//focus 
//debugging
//dry run

#include<iostream>
using namespace std;
 
int main()
{
	long long int p;
	cin >> p;
 
	const long long int n = p;
 
        int arr[n];
 
	for(long long int i = 0; i<n; i++)
	{
		cin >> arr[i];
	}
 
	long long int x = 0;
 
	for(long long int i = 1; i<n; i++)
	{
		if(arr[i] < arr[i-1])
		{
			x = x + ( arr[i-1] - arr[i] );
			arr[i] = arr[i-1];
		}
	}
 
	cout << x;
}
