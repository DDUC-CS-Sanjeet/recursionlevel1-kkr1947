#include<iostream>
using namespace std;
int fact(int n);
main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	int f;
	f=fact(n);
	cout<<"The factorial="<<f<<endl;
	return 0;
}
int fact(int n)
{
	
if(n==0)
return 1;
else
return n * fact(n - 1);

}