#include <iostream>
using namespace std;

/*  

      0
    1 0 1
  2 2 0 2 2
3 3 3 0 3 3 3

*/
int main()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (j + i >= 3 && j - i <= 3)
			{
				if (j == 3)
				{
					cout << 0<<" ";
				}
				else
					cout << i<<" ";

			}
			else

				cout << "  ";


		}
		cout << endl;
	}

    
}
