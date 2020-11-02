//Md SAbbir Hossain
//BSSE1014



#include<iostream>

using namespace std;


int main (void)
{
    int n;
    cout << "Enter How many numbers to be sorted: " ;
    cin >> n;

    int arr[n];
    cout << "Enter your every number: " ;

    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {

            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }

     cout << "Sorted Array: " ;

    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << ' ';
    }

     cout << endl ;

    return 0;

}
