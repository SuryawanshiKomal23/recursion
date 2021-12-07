#include<iostream>
using namespace std;

void DisplayI() //I for iteration
{
	int iCnt = 1;
	
	while(iCnt <= 4)
	{
		cout<<"Marvelluos\n";
		iCnt++;
	}
}

void DisplayR()  //R for recursion
{
	static int iCnt = 1;
	
	if(iCnt <= 4)
	{
		cout<<"Marvelluos\n";
		iCnt++;
		DisplayR();
	}
	
}

int main()
{
	int i = 0;
	DisplayR();
	
	return 0;
}
