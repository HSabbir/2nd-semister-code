#include<iostream>
using namespace std;

int* arrFunction(int n)
{
	int *arr;
	arr = new int[n]; 

	for(int i=0;i<n;i++) cin >> arr[i] ;
	
   return arr;
	
}

int main()
{
	int n;
	cin >> n ;
	int *arr;
	arr=arrFunction(n);
	for(int i=0;i<n;i++) cout << arr[i] << endl ;
	return 0;
}
