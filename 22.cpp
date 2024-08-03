#include <iostream>
using namespace std;

/* 

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
	  
*/
int main()
{
	int c = 1 ;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{

			
			if (j - i <= 0 || i + j >= 9)
			{
				if (i+j >=9)
				{

					cout << --c << " ";
				}
				else
				cout << c++ <<" ";
			}
			else
				cout << "  ";

		}
		cout << endl;
	}
}
