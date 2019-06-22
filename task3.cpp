#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter a year:\n";
	cin>>year;
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
				cout<<"It is a LEAP YEAR.";
			else
				cout<<"It is a NOT a leap year.";
		}
		else
			cout<<"It is a LEAP YEAR.";
	}
	else
		cout<<"It is NOT a leap year.";
}
