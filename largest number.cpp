//program to check the largest number of three numbers
#include<iostream>
using namespace std;
int main()
{
int num1,num2,num3;
cout<<"enter three numbers\n";
cin>>num1>>num2>>num3;
if(num1>num2&num1>num3){
	cout<<"num1 is the largest\n";}
	else if(num2>num1&num2>num3)
	{
		cout<<"num2 is the largest\endl";}
		else
		{
			cout<<"num3 is the largest";
		}
		return 0;
	
}