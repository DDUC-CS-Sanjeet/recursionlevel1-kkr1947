#include <iostream>
using namespace std;

int Power(int, int);

int main()
{
    int a, b, p;

    cout << "Enter base number: ";
    cin >> a;

    cout << "Enter power number(positive integer): ";
    cin >> b;

    p = Power(a,b);
    cout << a << "^" << b << " = " << p;

    return 0;
}

int Power(int a, int b)
{
    if (b != 0)
        return a*Power(a, (b-1));
    else
        return 1;
}