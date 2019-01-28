#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the array size\n";
	int n;
	cin >> n;
	cout << "Enter the array elements with ascendingly sorted\n";
	int a[n],start,end,mid,num;
    for (int i = 0; i < n; ++i)
    	cin >> a[i];
	cout << "Enter the element you want to search\n";
	cin >> num;
	start=0;
	end=n-1;
	while(1)
	{
		mid = (start + end)/2;
		if(a[mid]>num)
		{
			end = mid-1;
		}
		else if(a[mid]<num)
		{
			start = mid+1;
		}
		else if(a[mid]==num)
		{
			cout <<"position of searched element is "<< mid+1 << "\n";
			break;
		}
	}



}