#include<iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n,word=0;
	getline(cin,s);
	n=s.length();
	
	for(int i=0;i<n;i++)
	{
		if(s[i]==' ') word++ ;
	}

	cout << word+1 << endl ;
	for(int i=0;i<n;i++)
	{
		cout << s[i] ;
		if(s[i]== ' ') 
		cout << endl ;
	}
	cout << endl ;
	return 0;

}
