#include <iostream>
using namespace std;

/*

* # * # *
# * # * #
* # * # *

*/
int main()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if ((i%2==1 && j%2==0) || (j % 2 == 1 && i % 2 == 0))
			{
				cout << "# ";

			}
			else
			cout << "* ";
		}
		cout << endl;
	}
}