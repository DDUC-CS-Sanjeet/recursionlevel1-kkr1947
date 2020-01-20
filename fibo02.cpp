#include <iostream>
using namespace std;
int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : "<<endl;
   cin >> x;
   int a=0;
   int b=1;
   cout << "Fibonnaci Series : \n";
   cout<<a<<endl;
   cout<<b<<endl;
   int c;
   while(i+2< x) 
   {
   	c=a+b;
   	cout<<c<<endl;
      a=b;
      b=c;
      i++;
   }
   return 0;
}
