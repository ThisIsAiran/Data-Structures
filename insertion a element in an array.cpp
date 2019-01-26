#include <iostream>
using namespace std;
int main()
{
	int a[11] = {1,2,3,4,6,7,8,9,10,11},y,z,temp;
	cout << "Enter the number you want to insert\n";
	cin >> y;
	cout << "Enter the element after which you want to insert the number\n";
	cin >> z;
	a[10] = y;
	for (int i = 9;i>=0;i=i-1)
	{
		if(a[i]!=z)
		{
		temp = a[i+1];
		a[i+1] = a[i];
		a[i] = temp;
		}
		else
		{
			break;
		}
	}
	for (int i = 0; i < 11; ++i)
	{
		cout << a[i] << " ";
	}
}