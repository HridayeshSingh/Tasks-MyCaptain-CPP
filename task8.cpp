#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[20], str2[20];
	cout<<"Enter two strings:\n";
	gets(str1);
	gets(str2);
	int a = strlen(str1);
	int b = strlen(str2);
	if(a!=b)
		cout<<str1<<" and "<<str2<<" are NOT Anagram";
	else
	{
		int i=0, flag=0, count[256] = {0};
		for(i=0; str1[i] && str2[i]; i++)
		{
			 count[str1[i]]++;
			 count[str2[i]]--;
		}
		for(i=0;i<256;i++)
			if(count[i]!=0)
				flag=1;
		if(flag==0)
			cout<<str1<<" and "<<str2<<" are Anagram";
		else
			cout<<str1<<" and "<<str2<<" are NOT Anagram";
	}
}
