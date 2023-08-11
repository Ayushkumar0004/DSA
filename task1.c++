// #include<iostream>
// using namespace std;

// int main()
// {
//     int values[8];
//     cout << "Enter the values of 8 integers array: ";
//     for(int i = 0; i < 8; ++i)
//     {
//         cin >> values[i];
//     }   
//     cout << "Displaying integers in the form of output: ";
//     for(int i = 0; i < 8; ++i)
//     {
//         cout << values[i] << " ";
//     }
//     return 0;
// }/
// #include <iostream>
// #include <string>
// using namespace std;

// union Customers
// {
//     string name;
//     int balance;
// };

// void increment_balance(Customers c[], int n)
// {
//     if (c[n].balance > 1000)
//     {
//         c[n].balance += 100;
//     }
// }

// int main()
// {
//     int i;
//     const int numCustomer = 5;
//     Customers customer[numCustomer];
//     for (i = 0; i < numCustomer; ++i)
//     {
//         cout << i + 1 << ": ";
//         cin >> customer[i].name;
//         cin >> customer[i].balance;
//     }
//     for (i = 0; i < numCustomer; ++i)
//     {
//         increment_balance(customer, i);
//     }
//     for (i = 0; i < numCustomer; ++i)
//     {
//         cout << customer[i].name << ":" << customer[i].balance << endl;
//     }
//     return 0;
// }
#include<iostream>
#include<string>
using namespace std;

union Customers
{
    char name[50];
    int accountNumber;
    double balance;
};

void increment_balance(Customers customers[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (customers[i].balance > 1000)
        {
            customers[i].balance += 100;
            cout << customers[i].name << " " << customers[i].accountNumber << " " << customers[i].balance << endl;
        }
    }
}

int main()
{
    int i;
    const int numCustomer = 3;
    Customers customer[numCustomer];
    
    for (i = 0; i < numCustomer; ++i)
    {
        cout << "Enter name, account number, and balance for customer " << i + 1 << ": ";
        cin >> customer[i].name;
        cin >> customer[i].accountNumber;
        cin >> customer[i].balance;
    }
    
    increment_balance(customer, numCustomer);
    return 0;
}
