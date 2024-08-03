#include <iostream>
using namespace std;

/* 
 
0
0 1
0 1 2
0 1 2 3
	  
*/
int main()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j - i <= 0)
			{
				cout << j <<" ";

			}
			else
			
				cout << "  ";
			
			
		}
		cout << endl;
	}
}