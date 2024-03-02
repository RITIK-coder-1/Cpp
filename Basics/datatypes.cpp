#include <iostream>

using namespace std;

int main(){

    // Primitive Data Types --->

    int num = 19; // integer 
    float num2 = 3.14; // floating point number
    double num3 = 12.22223; // double type
    string name = "ritik"; // string
    bool male = true; // boolean true
    bool female = false; // boolean false
    char letter = 'R'; // character type

    // Derived Data Types --->

    int array[4] = {1, 2, 3, 4}; // array type
    int* ptr = &num; // pointer type
    int &ref = num; // reference type

    // User Defined Data Types --->

    struct point { // structure
        int x;
        int y;
    };
    point myPoint = {3, 7};

    union myUnion { // union
        int intValue;
        float floatValue;
    };

    class myClass { // class
        int num;
    };
    
    return 0;

}