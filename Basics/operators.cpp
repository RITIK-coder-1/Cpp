#include <iostream>

using namespace std;

int main(){
    // Assignment Operator

    int num1 = 2;
    int num2 = num1++; // it first assigns the value and then, increases
    int num3 = ++num1; // it first increases the value and then, assigns
    cout << num1 << "\n"; // 4
    cout << num2 << "\n"; // 2
    cout << num3 << "\n"; // 4
    return 0;
}