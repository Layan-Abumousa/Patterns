#include <iostream>
using namespace std;

/* 

1           1
  2       2
3   3   3   3
  4   4   4
5   5   5   5
  6       6
7           7

*/
int main()
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (j - i <= 0 && i + j <= 6 || (j + i >= 6 && i - j <= 0))
			{
				if ((i % 2 == 0 && j % 2 == 0)||(j==3 &&i==3)|| (i % 2 == 1 && j % 2 == 1))
				{
					cout << i+1 <<" ";
				}
				else
					cout << "  ";

			}
			else

				cout << "  ";


		}
		cout << endl;
	}

    
}
