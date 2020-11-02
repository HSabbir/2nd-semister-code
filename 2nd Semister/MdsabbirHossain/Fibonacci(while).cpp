#include <iostream>

using namespace std ;

int main ()
{
	int n1=0,n2=1,Number,answer;
	 cout << "Enter the N th Fibonacci number : ";
	cin >> Number;
	
	 if(Number==1)
    {
        cout << 0 << endl;
        return 0;
    }
    if(Number==2)
    {
        cout << 1 << endl;
        return 0;
    }
    int temp;
    temp=n2;
   		n2=n1+n2;
   		n1=temp;
    
    while(true)
    {
    	if(Number==2)
    	{
        answer=n2+n1;
        break;
   		 
   		 }
    
    	
   		
   		
   		
   		temp=n2;
   		n2=n1+n2;
   		n1=temp;
   		
   		Number=Number-1;
   		
    
    }

	cout << answer << endl ;
	return 0;
}
