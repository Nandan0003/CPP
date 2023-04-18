#include <iostream.h>
#include <stdio.h>
using namespace std;
int main ()
{
int a,b,temp;

cout<<"enter value of a"<<endl;
cin>> a ;
cout<<" enter value of b"<<endl;
cin>> b;

cout << "values  of a and b before swap"<<endl:
cout << a << "&" << b << endl;

temp = a;
a = b ;
b = temp;

cout << " Values of a and b after swapping" << endl;
cout << a << "&" << b << endl;
return ()
}
