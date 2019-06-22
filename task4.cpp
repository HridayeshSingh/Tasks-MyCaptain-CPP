#include<iostream>
using namespace std;
int main()
{
	int ar[10],sum,i;
	cout<<"Enter 10 numbers:\n";
	for(i=0;i<10;i++)
	{
		cin>>ar[i];
		sum+=ar[i];
	}
	cout<<"Sum of the entered numbers is = "<<sum;
}
