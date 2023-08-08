// #include<iostream>
// using namespace std;
// int main()
// {
//     int A[5];
//     A[0] = 10;
//     A[1] = 15;
//     A[2] = 20;
//     cout << A[1];
//     cout << A[2];
//     cout << A[0];
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int A[10] = {2,4,5,6,7,8,9,18};
//     cout << sizeof(A);
//     cout << A[9];
// }/
#include <iostream>
#include <string>
#include <locale>
#include <algorithm>

using namespace std;

class Person {
private:
    string name;
    int age;
    char gender;

public:
    void inputt() {
        cin.ignore();  // Clear the newline left in the buffer from previous input
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter gender (M/F): ";
        cin >> gender;
    }

    void displayInfo() {
        cout << "Name: " << toUpper(name) << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << toUpper(string(1, gender)) << endl;
    }

private:
    string toUpper(const string &str) {
        locale loc;
        string upperStr = str;
        transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
        return upperStr;
    }
};

int main() {
    Person person;
    person.inputt();
    person.displayInfo();
    return 0;
}