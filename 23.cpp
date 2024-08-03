#include <iostream>
using namespace std;

/* 

  	  	1
	    2   2
  	3   3   3
  4   4   4   4
5   5   5   5   5

*/
int main()
{
	int c = 1 ;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (i + j >= 4 && j - i <= 4)
			{
				if (i%2==0 && j%2==0)
				{
					cout << c << " ";
				}
				else if (i % 2 == 1 && j % 2 == 1)
				{
					cout << c << " ";
				}
				cout << " ";
			}
			else
				cout << "  ";
			

		}
		c++;
		cout << endl;
	}
}
