#include <iostream>

using namespace std;

int main()
{
	int c[5];

	for(int i = 0; i< 12 ;i++)
	{
		c[i] = i;
	}

	for (int i = 0; i<12 ;i++)
	{
		cout<<*(c+i)<<endl;
	}

	

	system("pause");
	return 0;
}