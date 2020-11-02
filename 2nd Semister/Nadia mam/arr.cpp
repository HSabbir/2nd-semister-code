#include <iostream>//enlarge,shring
#include<algorithm>

using namespace std ;

void InitializeArray(int ArraySize , int *array)
{

	cout << "Enter Your Number: "  ;
	for(int i=0; i<ArraySize;i++)
	{
		cin >> array[i];
	}
}

void PrintInformation(int *array,int &ArraySize)
{
    for(int i=0; i<ArraySize;i++)
	{
		cout << array[i] << '\t';
	}
	cout << endl ;
}


int* DeleteByIndex(int DeleteIndex,int *array,int &ArraySize)
{
	
		for(int i=DeleteIndex-1; i<=ArraySize;i++)
		{
			array[i]=array[i+1];
		}
		ArraySize = ArraySize-1 ;
	return array;
}

void DeleteAll(int *array,int &ArraySize)
{
    while(ArraySize!=0)
    {
        for(int i=0; i<ArraySize;i++)
        {
            array[i]=array[i+1];
        }
        ArraySize = ArraySize-1 ;
    }
}
void Delete(int *array,int &ArraySize)
{
	int choice;
	cout << "1.Delete by Index" << endl << "2.Delete by Value" << endl;
	cout << "Enter Your Choice: " ;
	cin >> choice;
	
	if(choice==1)
	{
		cout << "Enter Your Deleteing Index: " << endl;
		int DeleteIndex;
		cin >> DeleteIndex ;

		DeleteByIndex(DeleteIndex,array,ArraySize);
	}
	else if(choice==2)
	{
		int value,count=0;
		cout << "Enter Which Value You Want To DElete:";
		cin >> value ;
		
		for(int i=0;i<ArraySize;i++)
		{
			if(array[i]==value )
			{
				count=i+1;
				array=DeleteByIndex(count,array,ArraySize);
				count=count-1;
			}
		}
	}
	
}
void Insert(int *array,int &ArraySize)
{

	cout << "Enter Your Inserting Index: " << endl;
	int IndexOfInsert,InsertNumber;
	//int brr[ArraySize-IndexOfInsert];

	cin >> IndexOfInsert;

	for(int i=ArraySize; i>=IndexOfInsert-1;i--)
	{
		array[i]=array[i-1];
	}
	cout << "Enter Your Inserting Number: " << endl;
	cin >> InsertNumber;

	array[IndexOfInsert-1]= InsertNumber ;
	ArraySize=ArraySize+1;


}

int* Search(int *array,int ArraySize)
{
	cout << "Enter Your number want to search: " ;
	int YourNumber,Index,i,emni=0,j;   // I want To search
	cin >> YourNumber;
	int brr[100],count=0;
	
	for(i=0;i<ArraySize;i++)
	{
		if(array[i]==YourNumber)
		{
			Index=i+1;
			emni=1;
			
			brr[count]=Index;
			count++;
			
		}
	}
	if(emni=1)
	{
		cout << "YES" << endl << "Your Index is: " ;
		
		for(j=0;j<count;j++) cout << brr[j] << ' ' ;
		
		cout << endl;
	}
	else cout << "No" << endl ;
	
	return brr;
}

void Sort(int *array,int ArraySize)
{
	sort(array,array+ArraySize);

}

void Option(int *array,int &ArraySize)
{


	int YourOption;

	while(true)
    {
	cout << endl;
	cout << "1.Sort" << endl << "2.Search" << endl << "3.Insert" << endl << "4.Delete" << endl << "5.Delete all" << endl << "6.Print All" << endl << "7.Exit " << endl;
	cout << "Enter Your choice: "  ;
	//cout << "Your choice is: " << endl ;

	cin >> YourOption;

	if(YourOption==1)
	{
		Sort(array,ArraySize);
	}

	else if(YourOption==2)
	{
		Search(array,ArraySize);
	}

	else if(YourOption==3)
	{
		Insert(array,ArraySize);
	}

	else if(YourOption==4)
	{
		Delete(array,ArraySize);
	}

	else if(YourOption==5)
	{
		DeleteAll(array,ArraySize);
	}
	else if(YourOption==6)
    {
        PrintInformation(array,ArraySize);
    }
   else if(YourOption==7)
        {
            break ;
        }
    
    else cout << "Wrong choice" << endl;
   }
}
int main ()
{
	int ArraySize;
	cout<< "Enter Your Array Size: " ;
	cin >> ArraySize;
	int array[100];
	

	InitializeArray(ArraySize,array);

	Option(array,ArraySize);


	return 0;
}/* */
