#include <iostream> // "include" is a preprocessor directive that includes libraries within a program. <iostream> is a library of input output operations that lets the program to get input from the console and display output to the console.

using namespace std; // this line tells the program to use the "standard" namespace, it contains all the standard C++ library objects and functions. By including it, we don't need to specify the "std" prefix everytime use the standard library functions and objects.

int main(){ // main() is the main function that contains the actual code of the C++ file, the program starts and ends with it. C++ files can't be written without the main function. The "int" keyword tells the compiler that the main function returns an integer value. 

    cout << "Hello World!"; // cout stands for character out, it is a standard output stream, used to print characters onto the console. "<<" operator injects data to the cout stream. 

    return 0; // It is a convention to denote the exit status in a C++ program. Returning 0 means the program is executed successfully.
}