//Md SAbbir Hossain
//BSSE1014



#include<iostream>
#include<algorithm>

using namespace std;


void Search(int *array,int low,int high,int number)
{
    int mid=(low+high)/2;

    if(low<=high)
    {
        if(array[mid]==number)
        {
            cout << "Yes....Found!" << endl;
            return;
        }

        if(array[mid]>number) Search(array,low,mid-1,number);

        if(array[mid]<number) Search(array,mid+1,high,number);
    }

    else cout << "Unfortunately.......Not found!" << endl;
}


int main (void)
{
    int n,number;
     cout << "Enter How many numbers to be sorted: " ;

    cin >> n;
    int array[n];

    cout << "Enter your every number: " ;
    for(int i=0;i<n;i++) cin >> array[i];

    sort(array,array+n);
    cout << "Enter the number : " ;
    cin >> number;

    int low=0,high=n-1;

    Search(array,low,high,number);


    return 0;
}

