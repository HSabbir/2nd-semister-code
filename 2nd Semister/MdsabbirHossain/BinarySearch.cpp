//Md SAbbir Hossain
//BSSE1014


#include<iostream>
#include <algorithm>

using namespace std ;

int main (void)
{
    int n,number;
    cout << "Enter How many numbers to be sorted: " ;

    cin >> n;

    int high=n-1,low=0;

    int arr[n];
    cout << "Enter your every number: " ;
    for(int i=0;i<n;i++) cin >> arr[i];

    sort(arr,arr+n);
    for(int i=0;i<n;i++) cout << arr[i] << endl;

    cout << "Enter the Searching number : " ;
    cin >> number;

    while(low<=high)
    {
        int mid=(high+low)/2;
        if(arr[mid]==number)
        {
            cout << "Yes....Found!" << endl;
            return 0;
        }

        else if(arr[mid]>number)
        {
            high=mid-1;
        }

        else
        {
            low=mid+1;
        }


    }

     cout << "Unfortunately.......Not found!" << endl;

    return 0;
}

