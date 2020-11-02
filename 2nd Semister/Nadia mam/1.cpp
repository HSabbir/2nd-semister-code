#include <iostream>

using namespace std ;

int main (void)
{
	int k=0;
	int loc=0;
	int N;
	cin >> N ;

	
	int Data[N];

	for(int i=0;i<N;i++) cin >> Data[i] ;
	int Max=Data[0];
	
	while(k<=N)
	{
		if(Max<Data[k])
		{
			loc=k+1;
			Max=Data[k];
		}
		k=k+1;
	}
	
	cout << Max << endl;
	cout << loc << endl ;	

return 0;
}
