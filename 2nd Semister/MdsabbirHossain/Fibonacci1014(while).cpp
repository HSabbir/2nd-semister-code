#include <iostream>

using namespace std ;

int main ()
{
	int n1=0,n2=1,Number,answer;
	 cout << "Enter the N th Fibonacci number : ";
	cin >> Number;
	
	if(Number==0) 
	{
		cout << "Impossible" << endl;
		return 0;
	}
	
	 if(Number==1)
    {
        cout << 0 << endl;
        return 0;
    }
    
    cout << 0 << ' ';
    

    
    while(Number!=1)
    {
    	//n2=n1+n2;
    	int temp;
   		answer = n2;
   		
   		cout << answer << ' ';
   		temp=n2;
   		n2=n1+n2;
   		n1=temp;
   		Number=Number-1;
    
    }

	cout << endl ;
	return 0;
}
