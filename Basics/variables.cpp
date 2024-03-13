#include <iostream>

using namespace std;

int main(){
    int num1; // initialization of an integer variable named num1
    num1 = 2; // assignment of value

    int num2 = 23; // initialisation and assignment simlutaneously

    num1 = 10; // the variable can be reassigned

    const int num3 = 19;
    // num3 = 22; it can not be reassigned as it is a constant
    cout << num1 << "\n";
    cout << num2 << "\n";
    cout << num1 + num2 << "\n";

    int num4 = 43;
    int num5 = num4;
    int &num6 = num4; // reference variable
    num5 = num1; // it can be reassigned to a different variable
    cout << "num4: " << num4 << "\n"; // unchanged // 43
    cout << "num5: " << num5 << "\n";
    num6 = 10;
    // num6 = num5; it can not be reassigned to a different variable
    cout << "num4: " << num6 << "\n"; // changed // 10

    string name = "ritik";
    string &newName = name;
    cout << name << "\n";
    newName = "RITIK";
    cout << name << "\n";
    return 0;
} 