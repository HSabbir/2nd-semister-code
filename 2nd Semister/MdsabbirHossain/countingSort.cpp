//Md SAbbir Hossain
//BSSE1014



#include <iostream>

using namespace std ;

int main ()
{
    int r,max=0,min=1000000,var,count=0;//r=Number of My value....max=Maximum value of my array...
    cout << "Enter Your array size: ";
    cin >> r;
    int arr[r],arr4[r];//arr=Initial taking array....arr4=Final sorting array

    for(int i=0; i<r ;i++)
    {
        cin >> arr[i];
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    //cout << max << endl << min << endl ;
    int arr2[max-min+1];
    for(int i=0; i<max-min+1 ;i++)  arr2[i]=0;



     for(int i=0; i<r ;i++)
     {

        var=arr[i]-min;
         if(arr2[var] ==0) arr2[var]=1;
        else if(arr2[var]!=0)
        {


            arr2[var]=arr2[var]+1;
        }


     }
        // int temp;
    int arr3[max-min+1];
    for(int i=0; i<max-min+1 ;i++)
    {
        count=arr2[i]+count;
        arr3[i]=count;
    }
    for(int i=0; i<r ;i++)
    {
        int temp;
        temp=arr3[arr[i]-min];
        arr4[temp-1]=arr[i];
        arr3[arr[i]-min]=arr3[arr[i]-min]-1;
    }
    for(int i=0; i<r ;i++) cout << arr4[i] << endl ;

    return 0;
}
