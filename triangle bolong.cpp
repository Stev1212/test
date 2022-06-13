#include<iostream>
using namespace std;

int main()
{
	int i,j;
	char x='o',blank =' ';
	
	for(i=0;i<10;i++)
	{
		for(j=10-1;j>=i;j--) 
		cout<<blank;
		for(j=0;j<2*i+1;j++)
		{
			if(i==0||i==10-1)
			cout<<x;
			else
			{
				if(j==0||j==2*i)
				cout<<x;
				else
				cout<<blank;
			}
		}
		cout<<blank;
	}
	return 0;
}
