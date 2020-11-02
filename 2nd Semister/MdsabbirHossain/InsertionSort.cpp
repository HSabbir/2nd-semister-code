//Md SAbbir Hossain
//BSSE1014



#include<iostream>

using namespace std;

void insertionSort(int *array,int numberOfInput)
{
    int temp;

    for(int i=1 ; i <numberOfInput ; i++)
    {
        temp = array[i];

        for(int j=i-1 ; j>=0 ; j-- )
        {
            if(array[j]>temp)
            {
               swap(array[j],temp);

            }

            else break;
        }
    }

}

int main(void)
{
    int numberOfInput;
    cout << "Enter the number of element : " ;
    cin >> numberOfInput;

    int array[numberOfInput];
    cout << "Enter the elements : " ;

    for(int i=0 ; i<numberOfInput ; i++)
    {
        cin >> array[i];
    }

    insertionSort(array,numberOfInput);

    cout << "After sorting : " ;

    for(int i=0 ; i<numberOfInput ; i++)
    {
        cout << array[i] << ' ';
    }

    return 0;
}
