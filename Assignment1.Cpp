#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    string rollNo;
    float height;
    char grade;
    int num1, num2;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Height: ";
    cin >> height;

    cout << "Enter Grade: ";
    cin >> grade;

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;

    int sum = num1 + num2;

    cout << "\nStudent Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Roll Number: " << rollNo << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}