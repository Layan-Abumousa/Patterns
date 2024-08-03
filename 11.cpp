#include <iostream>
using namespace std;

/* 

A
A B
A B C
A B C D
	  
*/
int main()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j - i <= 0)
			{
				cout << (char)('A'+j) << " ";

			}
			else
			
				cout << "  ";
			
			
		}
		cout << endl;
	}
}