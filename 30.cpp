#include <iostream>
using namespace std;
/* 
  1 ***************** 1
   2 *************** 2
    3 ************* 3
     4 *********** 4
      5 ********* 5
       6 ******* 6
        7 ***** 7
         8 *** 8
          9 * 9

  */
int main()
{
	int rows = 9;
	cout << "enter rows  ";
	cin >> rows;
	int c = rows * 2;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i - j <= 0 && j + i <= c-1 )
			{
				if (i - j == 0 || i+j ==c-1 )
				{
					
					cout << " " << i + 1 << " ";


				}
				 
				if (i - j <= 0 &&  j + i <= c - 2 )
				{
					cout << "*";
				}
				
			}
			else cout << " ";
		}
		cout << endl;
	}





}
