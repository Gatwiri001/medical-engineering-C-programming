//area of a circle
#include<iostream>
using namespace std;
float circle(int r);//function prototype

int main(){
int radius;
float Area;
cout<<"enter radius"<<endl;
cin>>radius;
Area=circle(radius);
cout<<"The Area is"<<Area<<endl;
return 0;
}
float circle(int r){
float area=3.142*r*r;
return area;
}