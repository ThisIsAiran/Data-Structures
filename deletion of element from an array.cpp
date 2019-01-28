#include <iostream>
using namespace std;
int main()
{
	int a[11] = {1,2,3,4,5,6,7,8,9,10},y,temp,l;
	cout << "Enter the element you want to delete from array from 1 to 10\n";
	cin >> y;
	for (int i=9; i>=0 ; i=i-1)
	{
		if(a[i]!=y)
		{	
			temp = a[i-1];
			a[i-1] = a[9];
			a[9] = temp;
		}
		else
		{
			l = a[i];
			a[i] = temp;
			break;
		}
	}
	for (int i = 0; i < 9; ++i)
	{
		cout << a[i] << " ";
	}

}