#include<iostream>
using namespace std;
int main()
{
	int ar[10],i,j;
	cout<<"Enter 10 numbers:\n";
	for(i=0;i<10;i++)
		cin>>ar[i];
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(ar[j]<ar[i])
			{
					int temp = ar[i];
					ar[i] = ar[j];
					ar[j] = temp;
			}		
		}
	}
	cout<<"The numbers in ascending order are:\n";
	for(i=0;i<10;i++)
		cout<<ar[i]<<"\n";
}
