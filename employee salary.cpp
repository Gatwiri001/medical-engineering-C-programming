//program to give employees bonus
#include<iostream>
using namespace std;
int main()
{
	int time;
	float salary,bonus;
	cout<<"input your salary\n";
	cin>>time;
	if(time>10){
		bonus=salary*10.0/100;
	}
	else if(time>=6&time<=10){
		bonus=salary*8.0/100.0;
	}
	else if(time<6 & time>=0){
		bonus =salary*5.0/100.0;
	}
	salary=salary+bonus;
	cout<<"your total salary is"<<salary;
	return 0;
	 
}