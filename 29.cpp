#include <iostream>
using namespace std;

/* 
  
          * * * * *
        *       *
      *       *
    *       *
  *       *
* * * * *

*/
int main()
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i+j ==5 || i+j==9 || (j>=5 && j <=9 && i==0)|| (j >= 0 && j <= 4 && i == 5))
			{
				cout << "* ";

			}
			else
				cout << "  ";


		}
		cout << endl;
	}

    
}
