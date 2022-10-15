#include<iostream>
using namespace std;
main()
{
	char  s;
	cout<<"Enter the Character: ";
	cin>>s;
	if(s>='0' && s<='9')
	{
		cout<<"Digit";
	}
	else 
	{
		cout<<"Not Digit";
	}
}
