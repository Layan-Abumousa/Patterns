#include <iostream>
using namespace std;

/* 

      *
    *   *
  *       *
* * * * * * *

	  
*/
int main()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (i==3 || j+i==3 || j - i == 3)
			{
				cout << "* " ;

			}
			else
			
				cout << "  ";
			
			
		}
		cout << endl;
	}
}
