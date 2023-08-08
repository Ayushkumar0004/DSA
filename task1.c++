#include<iostream>
using namespace std;

int main()
{
    int values[8];
    cout << "Enter the values of 8 integers array: ";
    for(int i = 0; i < 8; ++i)
    {
        cin >> values[i];
    }   
    cout << "Displaying integers in the form of output: ";
    for(int i = 0; i < 8; ++i)
    {
        cout << values[i] << " ";
    }
    return 0;
}