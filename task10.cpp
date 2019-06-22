#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[30];
	cout<<"Enter a string:\n";
	gets(str);
	for(int i=0;i<strlen(str);i++)
		if(str[i]>=65 && str[i]<=90)
			str[i]+=32;
	cout<<"The entered string in lowercase is:\n"<<str;
}
