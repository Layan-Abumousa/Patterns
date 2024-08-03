#include <iostream>
using namespace std;

/* 
 
      A
    A B A
  A B C B A
A B C D C B A

*/
int main()
{
	int c = 1;
	for (int i = 0; i < 4; i++)
	{
		c = -1;
		for (int j = 0; j < 7; j++)
		{
			if (j + i >= 3 && j - i <= 3)
			{
				if (j > 3)
				{
					cout<< (char)('A'+ (--c) )<< " ";
				}
				else
					cout << (char)('A' + (++c)) <<" ";

			}
			else

				cout << "  ";


		}
		cout << endl;
	}

    
}
