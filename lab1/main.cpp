#include <windows.h>
#include <iostream>
int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int x;
    std::cout << "Vedite chislo: ";
    std::cin >> x;

    if (x>0) {
        std::cout << "Chislo pologitelnoe: " << x << std::endl;
    }

    else  if (x<0) {
        std::cout << "Chislo otricatelnoe: " << x << std::endl;
    }
    else {
        std::cout << "Chislo 0" << x << std::endl;
    }
    return 0;
}