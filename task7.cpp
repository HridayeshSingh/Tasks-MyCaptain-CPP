#include<iostream>
using namespace std;
void swap(int *a,int *b);
int main()
{
	int a,b;
	cout<<"Enter 2 numbers:\n";
	cin>>a>>b;
	cout<<"Before swapping,\na = "<<a<<"\nb = "<<b;
	swap(&a,&b);
	cout<<"\nAfter swapping,\na = "<<a<<"\nb = "<<b;
}

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
