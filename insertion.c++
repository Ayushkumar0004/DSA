#include<iostream>
using namespace std;
int main()
{
    int arr[100] = {0};
    int i,x,pos,n=10;
    for(i=0;i<10;i++)
    {
        arr[i] = i+1;

    }
    for(i=0;i<n; i++)
    {
        cout<<arr[i];
        cout<<"\n";
    }
    x = 50;
    pos = 5;
    n++;
    for(i=n-1; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = x;
    for(i=0; i<n; i++)
    {
        cout << arr[i];
        cout << "\n";
    }
}