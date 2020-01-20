#include <iostream>
using namespace std;
int main()
{
    int a, b, p=1;

    cout << "Enter base number: ";
    cin >> a;

    cout << "Enter power number(positive integer): ";
    cin >> b;
	for(int i=1;i<=b;i++)
	{
    p*=a;
    }
	cout << a << "^" << b << " = " << p;

    return 0;
}

