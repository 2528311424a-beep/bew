#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Please enter your name: ";
    getline(std::cin, name);

    cout << "Hello, " << name << "!" << std::endl;
    cout << "Welcome to my first C++ GitHub project." << std::endl;

    return 0;
}
