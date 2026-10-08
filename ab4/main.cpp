#include <windows.h>
#include <iostream>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

#include <iostream>
#include <clocale>

    using namespace std;

        double price;
        double discountPercent;
        double discountAmount;
        double finalPrice;

        cout << "Введите цену и скидку на товар: ";
        cin >> price >> discountPercent;

        // Расчет суммы скидки
        discountAmount = price * discountPercent / 100;

        // Расчет итоговой цены
        finalPrice = price - discountAmount;

        cout << "Размер скидки: " << discountAmount << "\n"
             << "Итоговая цена: " << finalPrice << endl;
    
    return 0;
}
