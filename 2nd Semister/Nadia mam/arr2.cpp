/* Name: Md Sabbir Hossain
    Roll:BSSE1014
    Submitted to Ndia mam

*/

#include <iostream>
#include<algorithm>

using namespace std ;


int *array;

void InitializeArray(int ArraySize , int *array)
{

	cout << "Enter Your Number: "  ;
	for(int i=0; i<ArraySize;i++)
	{
		cin >> array[i];
	}
}


void SpaceManager(int ArraySize, int & ArraySpace) //Function for checking space
{
    cout << "Current Element: " << ArraySize<< endl;
    cout << "Free Space: " << ArraySpace - ArraySize<< endl << endl;

    int Choice;

     cout << "Do you want to change Space ?" << endl ;
     cout << "1.Yes "<< endl << "2.NO "<< endl ;
     cout << "Enter Your Choice: " ;

     cin >> Choice ;

     if(Choice == 1)
     {
         cout << endl;
        int AgainChoice,Number; // Number=I want to Larger or decrease
        cout << "1.Enlarge" << endl << "2.Shring" << endl ;
        cout << "Enter Your Choice: " ;

        cin >> AgainChoice;

        if(AgainChoice ==1)
        {
        cout<< "Enter Your Amount of Space Increasing: " ;
        cin >> Number;
         ArraySpace=ArraySpace+Number;
         array= new int [ArraySpace];
         }
        else if(AgainChoice ==2)
        {
        	cout<< "Enter Your Amount of Space Decreasing: " ;
        cin >> Number;
         ArraySpace=ArraySpace-Number;
         array= new int [ArraySpace];
        }
     }
     else
     {
         return ;
     }
}



void PrintInformation(int *array,int &ArraySize)
{
    for(int i=0; i<ArraySize;i++)
	{
		cout << array[i] << endl;
	}
}



void DeleteAll(int *array,int &ArraySize)
{
    while(ArraySize!=0)
    {
        for(int i=0; i< ArraySize;i++)
        {
            array[i]=array[i+1];
        }
        ArraySize = ArraySize-1 ;
    }
}

void DeleteByIndex(int DeleteIndex,int *array,int &ArraySize)
{
	
		for(int i=DeleteIndex-1; i< ArraySize;i++)
		{
			array[i]=array[i+1];
		}
		ArraySize = ArraySize-1 ;
	
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
		int value;
		cout << "Enter Which Value You Want To DElete:";
		cin >> value ;
		
		for(int i=0;i<ArraySize;i++)
		{
			if(array[i]==value )
			{
				DeleteByIndex(i+1,array,ArraySize);
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



void Search(int *array,int ArraySize)
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
}


void Sort(int *array,int ArraySize)
{
	sort(array,array+ArraySize);

}



void Option(int *array,int &ArraySize,int &ArraySpace)
{


	int YourOption;

	while(true)
    {

     cout << endl << endl ;
	cout << "1.Sort" << endl << "2.Search" << endl << "3.Insert" << endl << "4.Delete" << endl << "5.Delete all" << endl << "6.Print All" << endl << "7.Check Current Space & Free Space" << endl << "8.Exit " << endl;
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
        SpaceManager(ArraySize,ArraySpace);
    }
     else if(YourOption==8)
        {
            break ;
        }
   else cout << "Wrong choice" << endl;   
    }
}   



void DeleteMemory(int *array , int ArraySpace)
{
	for(int i=0;i<ArraySpace;i++)
	{
		delete [] array ;
	}
}  
  
  
  
int main ()
{
	int ArraySize,ArraySpace=10;
	cout<< "Enter Your Array Size: " ;
	cin >> ArraySize;

	array= new int [ArraySpace];


	InitializeArray(ArraySize,array);

	Option(array,ArraySize,ArraySpace);

	DeleteMemory(array,ArraySpace);
	return 0;
}

