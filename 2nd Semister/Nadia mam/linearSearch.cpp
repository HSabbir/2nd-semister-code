//linear search

#include <iostream>
using namespace std ;

int main ()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++) cin >> arr[i];
	
	cout << "Enter which number you want to search: " ;
	int number;
	cin >> number;
	
	for (int i=0;i<n;i++)
	{
		if(arr[i]==number)
		{
			cout << "YES" << endl;
			break;
		}
	}
	
	return 0;
}
