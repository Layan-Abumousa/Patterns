#include <iostream>
using namespace std;

/* 

			1
		  2   3
		4 5 6 7 8
	  9           1
	2 3 4 5 6 7 8 9 1
  2                   3
4 5 6 7 8 9 1 2 3 4 5 6 7
	  
*/
int main()
{
	int c = 1;

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			if (c==10)
			{
				c = 1;
			}
			if (i + j >= 6 && j - i <= 6) {
				if (i % 2 != 0 && (i + j == 6 || j - i == 6))
				{
					cout << c++ << " ";
				}
				else if (i % 2 == 0)
				{
					cout << c++ << " ";

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
