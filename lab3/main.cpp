#include <windows.h>
#include <iostream>
int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int age, price;
    std::cout << "Please enter your age: ";
    std::cin >> age;
    if (age<=0) {
        std::cout << "Error" << std::endl;
        return 0;
    }
    std::cout << "Please enter price: ";
    std::cin >> price;

    if (age<7) {
        std::cout << "price 0" << std::endl;
    }
    else if (age<18) {
        std::cout << "price " << price/2 << std::endl;
    }
    else {
        std::cout << price  << std::endl;
    }
    return 0;
}
