#include<iostream>
using namespace std;
int main()
{
int i,fact=1,no;

cout<<" enter a no<< endl;
cin>> no;

for(i=0;i<=no;i++)
{
fact = fact * i;
}

cout<<"factorial of " << no << "is" << fact<<endl;
return 0;
}
