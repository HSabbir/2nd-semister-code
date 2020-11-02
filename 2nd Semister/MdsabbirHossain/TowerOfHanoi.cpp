//Md SAbbir Hossain
//BSSE1014



#include<iostream>

using namespace std;

int Step=0;

void HanoiFunction(int n, char from, char to, char by)
{
    if (n == 1)
    {
        cout << "Move disk " << n << " : " << from << " --> " << to << endl;
        Step++;
        return;
    }

    HanoiFunction(n-1, from, by, to);

    cout << "Move disk " << n << " : " << from << " --> " << to << endl;
    Step++;
    HanoiFunction(n-1, by, to, from);
  
}

int main(void)
{
    int n ;

    cout << "Enter the number of disk : ";
    cin >> n ;


    HanoiFunction(n, 'A', 'C', 'B');

    cout << "Step : " << Step << endl;

    return 0;
}

