#include<iostream>
using namespace std;

int main()
{
    long long int a, b;
    
    cin >> a >> b;
    
    if(a >= b)
    {
        cout << a - b << endl;
    }
    else
    {
        cout << b - a << endl;
    }
}