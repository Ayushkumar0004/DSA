#include<iostream>
using namespace std;

void print(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void bubble(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if(a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;  
            }
        }
    }
}
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Original array: " << endl;
    print(arr, n);
    bubble(arr, n);
    cout << endl;
    cout << "Sorted array: " << endl;
    print(arr , n);
    return 0;
}