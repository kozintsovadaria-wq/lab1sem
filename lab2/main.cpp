#include <windows.h>
#include <iostream>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
#include <iostream>
#include <clocale>
    using namespace std;

        double price, discount_percent, discount_amount, final_price;

        cout << "Введите цену и скидку на товар: ";
        cin >> price >> discount_percent;

        discount_amount = price * discount_percent / 100;

        final_price = price - discount_amount;

        cout << "Размер скидки: " << discount_amount << "\n"
             << "Итоговая цена: " << final_price << endl;
    
    return 0;
}
