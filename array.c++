#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    int a[10000], b[10000], c[20000];

    cout << "Enter the size of first array : ";
    cin >> n1;
    cout << "Enter the array elements: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the size of second array : ";
    cin >> n2;
    cout << "Enter the array elements : ";
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    n3 = n1 + n2;
    for (int i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        c[i + n1] = b[i];
    }
    cout << "\nThe Merged array : ";
    for (int i = 0; i < n3; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}