#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream iFile;
	iFile.open("abc.bmp");

	ofstream oFile;
	oFile.open("new3.bmp",ios::binary);

	if(iFile.is_open() && oFile.is_open())
	{
		char ch;
		iFile.get(ch);

		while(!iFile.eof())
		{
			oFile << ch;
			iFile.get(ch);
		}
	}
	else
	cout << "File could not creat" << endl;
	return 0;

}
