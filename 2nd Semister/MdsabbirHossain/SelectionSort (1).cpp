//Md SAbbir Hossain
//BSSE1014


#include <iostream>

using namespace std;

int main()
{
    int n,minimum,index;

    cout << "Enter How many numbers to be sorted: " ;
    cin >> n;

    int arr[n];

	cout << "Enter your every number: " ;
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}

	//cout << endl;
    for(int i=0; i<n-1; i++)
    {
    	minimum = arr[i];

        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<minimum)
            {
            	minimum = arr[j];
            	index= j;
            }
        }

     	if(arr[i] != minimum)  swap(arr[index],arr[i]);

    }

	for(int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

    return 0;
}
