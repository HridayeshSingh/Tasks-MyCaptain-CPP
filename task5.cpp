#include<iostream>
using namespace std;
int main()
{
	int ar[10],i;
	cout<<"Enter 10 numbers:\n";
	for(i=0;i<10;i++)
		cin>>ar[i];
	int min=ar[0],max=0;
	for(i=0;i<10;i++)
	{
		if(ar[i]<min)
			min=ar[i];
		else
			if(ar[i]>max)
				max=ar[i];
	}
	cout<<"Largest number is = "<<max;
	cout<<"\nSmallest number is = "<<min;
}
