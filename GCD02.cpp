#include <iostream>
using namespace std;
int main()
{
   int n1, n2,t;

   cout << "Enter two positive integers: ";
   cin >> n1 >> n2;
   while(n2 != 0)
	{
	t=n1%n2;
	n1=n2;
	n2=t;
	}
   cout << "G.C.D is: " <<n1;
   return 0;
}
