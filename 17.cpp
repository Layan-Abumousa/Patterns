#include <iostream>
using namespace std;
/* 

	  *
	* *
     *    *
  *       *
     *    *
	* *
	  *
	  
*/
int main()
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i+j == 3 || j==3 || i-j == 3)
			{
				cout << "* " ;

			}
			else
			
				cout << "  ";
			
			
		}
		cout << endl;
	}
}
