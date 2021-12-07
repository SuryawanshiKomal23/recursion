#include<iostream>
using namespace std;

void DisplayI(int iNo) //I for iteration
{
	int iCnt = 1;
	
	while(iCnt <= iNo)
	{
		cout<<"Marvelluos\n";
		iCnt++;
	}
}

void DisplayR(int iNo) //I for iteration
{
	static int iCnt = 1;
	
	if(iCnt <= iNo)
	{
		cout<<"Marvelluos\n";
		iCnt++;
		DisplayR(iNo);
	}
}
	
int main()
{
	int i = 5;
	
	//DisplayI();
	
	DisplayR(i);
	
	return 0;
}
