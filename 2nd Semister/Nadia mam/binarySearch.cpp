//Binary Search

#include <iostream>
#include <algorithm>

using namespace std ;

int main ()
{
	int n,previous,mid,last,temp=0;
	cin >> n;
	int arr[n];
	for (int i=0;i<n;i++) cin >> arr[i];
	sort(arr,arr+n);
	for (int i=0;i<n;i++) cout << arr[i] << endl ;
	previous=0;
	last=n-1;
	mid=(previous+last)/2;
	
	cout << "Enter Which Number You Want to search: " ;
	int number;
	cin >> number;
	while(previous>last)
	{
		if(number==arr[mid])	
		{
			temp=1;
			break;
		}
		else if(number>arr[mid])
		{
			previous=mid+1;
			last=last;
			mid=(previous+last)/2;
		}
		else
		{
			previous=previous;
			last=mid-1;
			mid=(previous+last)/2;
		}
	}
	if(temp==1) cout << "Yes" << endl ;
	else cout << "No" << endl ;
	
	return 0;
}
