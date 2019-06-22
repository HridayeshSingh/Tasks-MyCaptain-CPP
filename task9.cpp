#include<iostream>
using namespace std;
int main()
{
	int days,y,w,d;
	cout<<"Enter number of days:\n";
	cin>>days;
	y = days/365;
	days%=365;
	w = days/7;
	d = days%7;
	cout<<"Years: "<<y<<"\nweeks: "<<w<<"\nDays: "<<d;
}
