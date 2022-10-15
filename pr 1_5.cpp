#include<iostream>
using namespace std;
main ()

{

int z[5],i,s;
for(i=0;i<=4;i++)
{
  	cout << "Enter number :-";
  	cin>>z[i];
}
for(i=0;i<=4;i++)
{
	s=z[i]*z[i]*z[i];
	cout<<s<<endl;
}


  
}
