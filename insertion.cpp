#include <iostream>
using namespace std;
int main()
{
	int a[11] = {1,2,3,4,6,7,8,9,10,11},y;
	cin >> y;
	for (int i = 9; i>=0 ; i=i-1)
	{
		if(a[i]>y)
		a[i+1] = a[i];
		else
		{
			a[i+1] = y;
			break;
		}
	}
	for (int i = 0; i < 11; ++i)
	{
		cout << a[i];
	}
}