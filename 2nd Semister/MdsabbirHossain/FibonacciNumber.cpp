//Md SAbbir Hossain
//BSSE1014



#include<iostream>

using namespace std;


void fibonacciNumber (int N1,int N2,int n,int &answer)
{
    if(n==2)
    {
        answer=N2;
        return;
    }

    else fibonacciNumber(N2,N1+N2,n-1,answer);

}


int main (void)
{
    int Number;
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

    int answer;
    fibonacciNumber(0,1,Number,answer);

    cout << answer << endl;

    return 0;
}
