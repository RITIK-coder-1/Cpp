#include <iostream>

using namespace std;

int main(){

    int age = 19;
    int &anotherAge = age; // reference variable // alternative name of age

    cout << age << endl; // 19
    cout << anotherAge << endl; // 19

    age = 20;

    cout << age << endl; // 20
    cout << anotherAge << endl; // 20

    anotherAge = 30;

    cout << anotherAge << endl;
    cout << age << endl;

    return 0;
}
