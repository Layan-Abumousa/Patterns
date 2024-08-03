#include <iostream>
using namespace std;

/* 

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

*/
int main()
{
    
    for (int i = 0; i <  5; i++) {
        int c = 1; 
        for (int j = 0; j <  5; j++) {

            if (j - i <= 0)
            {
                cout << c << " ";
                c = c * (i - j) / (j+1);
            }
            
        }
        cout << "\n";
    }


    
}
