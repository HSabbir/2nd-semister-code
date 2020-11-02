#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream iFile;
	iFile.open("7.txt");
	
	if(iFile.is_open())
	{
		int n;
		string s,faltu;
		ofstream oFile;
		oFile.open("8.txt");
		if(oFile.is_open())
		{

		iFile >> n;
		getline(iFile,faltu);
		for(int i=1;i<=n;i++)
			{
				getline(iFile,s);

				oFile << s << endl;
			}	
				oFile.close();

			}
			iFile.close();
				//cout << endl ; 
	}
	return 0;
}
