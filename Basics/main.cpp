#include <iostream> // it is used to include the input output library of C++ to let take inputs and give outputs from and to the terminal respectively

int main(){ // it is the main function of the C++ program within which everything is executed
    std::cout << "HELLO WORLD!"; // std is the name space, cout is the output stream
    std::cout << " RITIK\n"; // in order to add a new line, we need to include "\n"
    std::cout << "RITIK" << std::endl; // we can also add new line stream "endl" to include a new line
    std::cout << "New Line" << std::endl;
    puts("HEYY"); // it can also be used to print statements. It adds a new line automatically.
    return 0; // return 0 makes sure that the program has been executed successfully
    puts("null"); // nothing gets executed after returning something.
}