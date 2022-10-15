#include<iostream>
using namespace std;
main ()
{
	double num,end,mid,str;
	cout<<"Enter Number:- "<<endl;
	cin>>num;	
	str=0 ,end=num;
	while((end - str)>=0.000001){
		mid = (str + end)/2;
		if(mid*mid < num)
			str = mid;
		if(mid*mid >= num)
			end = mid;
	}
	cout<<mid;
} 
