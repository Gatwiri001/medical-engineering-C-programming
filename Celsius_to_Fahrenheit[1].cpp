//convert Celsius to Fahrenheit 
//scale to Celsius scale
#include<iostream>
using namespace std;

float conversion (float n)
{
return (n-32.0)*5.0/9.0;
}
int main()
{
float n=40;
cout<<conversion (n);
return 0;
}