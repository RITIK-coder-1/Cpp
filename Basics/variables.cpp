#include <iostream>

using namespace std;

int main(){

    // variable declaration -->

    int num; // variable declaration

    num = 23; // initialisation of the declared variable by assighning a value

    cout << num << endl; // 23

    num = 25; // reassighning a value to a variable

    cout << num << endl; // 25 // value has been changed

    // int num = 22; // a variable can't be redeclared else it will throw an error

    int num2 = 30; // the variable declaration and initialisation can be done at the same time

    int num3, num4; // multiple variables can be declared simultaneously

    int num5 = 19; // int specifies the type of data to be stored is an integer
    int num6 = 19.56;

    cout << num6 << endl; // 19 // integer can't contain a decimal number, only the whole part of the decimal number will be taken into the consideration

    float num7 = 19.6; // float includes decimal numbers with 4 bytes of memory
    float num8 = 23.56778;  // it can have precision from 6-9 decimal places when specified

    cout << num8 << endl; // 23.5678

    double num9 = 24.55555666666; // double also includes decimal number but with 8 byte of memory, usually double the preicision of float // it can have precision from 15-16 decimal places when specified

    cout << num9 << endl; // 24.5556

    return 0;
}
