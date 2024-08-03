#include <iostream>
using namespace std;

/* 

*
* *
*   *
*     *
*   *
* *
*
	  
*/
int main()
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i+j == 6 || j==0 || j-i ==0)
			{
				cout << "* " ;

			}
			else
			
				cout << "  ";
			
			
		}
		cout << endl;
	}
}
