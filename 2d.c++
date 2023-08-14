#include <iostream>
using namespace std;

int main()
{
    int op1[3][2] = {{2, 6}, {4, 9}, {9, 1}};
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "output" << i << "[" << j << "] " << op1[i][j] << endl;
        }
    }

    return 0;
}