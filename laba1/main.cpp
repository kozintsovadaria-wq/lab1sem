#include <windows.h>
#include <iostream>

using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    //Задание 1
    int x;
    cout << "Vedite chislo: ";
    cin >> x;

    if (x > 0) {
        cout << "Chislo pologitelnoe: " << x << endl;
    }
    else if (x < 0) {
        cout << "Chislo otricatelnoe: " << x << endl;
    }
    else {
        cout << "Chislo 0" << x << endl;
    }

    //Задание 2
    double price, discount_percent, discount_amount, final_price;

    cout << "Введите цену и скидку на товар: ";
    cin >> price >> discount_percent;

    discount_amount = price * discount_percent / 100;
    final_price = price - discount_amount;

    cout << "Размер скидки: " << discount_amount << "\n"
         << "Итоговая цена: " << final_price << endl;

    //Задание 3
    int age, price2;
    cout << "Please enter your age: ";
    cin >> age;
    if (age <= 0) {
        cout << "Error" << endl;
        return 0;
    }
    cout << "Please enter price: ";
    cin >> price2;

    if (age < 7) {
        cout << "price 0" << endl;
    }
    else if (age < 18) {
        cout << "price " << price2 / 2 << endl;
    }
    else {
        cout << price2 << endl;
    }

    return 0;
}