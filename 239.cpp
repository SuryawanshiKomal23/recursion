#include<iostream>
#include<stdio.h>

using namespace std;

int SterlenI(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"enter string\n";
	scanf("%[^''\n']s",Arr);
	
	iRet = SterlenI(Arr);
	
	cout<<"Length of sring is :"<<iRet<<"\n";
	return 0;
}
