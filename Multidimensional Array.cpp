#include <iostream>
using namespace std;

int main()
{
    // initializing a 2D array (an array (size 4) of 1D arrays having size 2 )
    int arr2D[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // printing the array, and outer loop to determine the row number
    for (int i = 0; i < 2; i++)
    {
        // inner loop to determine the column number
        for (int j = 0; j < 3; j++)
        {
            // printing the element present at that specific row number and column number
            cout << "Element at arr2D[" << i << "][" << j << "] : " << arr2D[i][j]<<endl;
        }
    }

    return 0;
}

