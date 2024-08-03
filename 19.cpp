#include <iostream>
using namespace std;

/* 

*           *
* *       * *
* * *   * * *
* * * * * * *
* * *   * * *
* *       * *
*           *
	  
*/
int main()
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (j - i <= 0 && i + j <= 6 || (j + i >= 6 && i - j <= 0)) 
			{
				cout << "* " ;

			}
			else
			
				cout << "  ";
			
			
		}
		cout << endl;
	}
}
