#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
    std:: string name;

    std::cout << "Please, enter your full name: ";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "! \n" ;

    return 0;
}

