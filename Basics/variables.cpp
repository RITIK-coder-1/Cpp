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

    float num7 = 19.6; // float includes decimal numbers upto two decimal places
    float num8 = 23.56778;

    cout << num8 << endl;

    return 0;
}
