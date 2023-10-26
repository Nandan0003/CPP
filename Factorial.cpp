
#include<iostream>
using namespace std;
int main()
{
int i,no;
int fact=1;

cout<<" enter a no"<< endl;
cin>> no;
  
/* look untilmth no */
  
for(i=0;i<=no;i++)
  
{
  fact = fact * i;
}

cout<<"factorial of " << no << "is" << fact <<endl;
return 0;
}

























