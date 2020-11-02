#include<iostream>
#include <sstream>
using namespace std;

int main()

{
	string s;
	getline(cin,s);
	istringstream bss(s);

	string word;
	int count=0;

	while(bss >> word)
	{
		count ++ ;
		cout << word << endl ;
	}

	cout << count << endl;
	return 0;

}
