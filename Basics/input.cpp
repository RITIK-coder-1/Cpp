#include <iostream>

using namespace std;

int main(){
    const int num = 19; // integer constant // constant values can't be reassigned a new value, they remain constant throughout the program

    // num = 20; // it can't be reassigned as it is a constant

    cout << num << endl;

    string name;
    string surname;

    cout << "Enter Your Name: ";
    cin >> name;

    cout << "Enter Your Surname: ";
    cin >> surname;

    cout << "Your Full Name is: " + name + " " + surname << endl;

    return 0;
}