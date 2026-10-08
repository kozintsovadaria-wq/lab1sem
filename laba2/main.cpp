#include <windows.h>
#include <iostream>
using namespace std;
int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    //Задание 1.
    int age;
    double base_price;
    cout << "Введите возраст и стоимость билета: ";
    cin >> age >> base_price;
    if (age < 0 || base_price < 0) {
        cout << "Ошибка" << endl;
    } else {
        double final_price = 0;
        if (age < 7) {
            cout << "До 7 лет. ";
            final_price = 0;
        } else if (age >= 7 && age <= 17) {
            cout << "От 7 до 17 лет. ";
            final_price = base_price * 0.5;
        } else if (age >= 18 && age <= 64) {
            cout << "С 18 до 64 лет. ";
            final_price = base_price;
        } else {
            cout << "С 65 лет. ";
            final_price = base_price * 0.6;
        }
        cout << "Цена билета: " << final_price << endl;
    }
    //Задание 2.
    double speed, limit;
    int school_zone;
    cout << "Введите скорость, лимит и признак школьной зоны (0/1): ";
    cin >> speed >> limit >> school_zone;

    if (speed <= 0 || limit <= 0 || (school_zone != 0 && school_zone != 1)) {
        cout << "Ошибка" << endl;
    } else {
        double overspeed = speed - limit;
        if (overspeed <= 0) {
            cout << "Превышения нет. Величина превышения: 0. Штраф: 0" << endl;
        } else {
            double fine = 0;
            if (overspeed <= 10) fine = 20;
            else if (overspeed > 10 && overspeed <= 30) fine = 50;
            else fine = 100;

            if (school_zone == 1) fine *= 2;

            cout << "Величина превышения: " << overspeed << " км/ч. Штраф: " << fine << endl;
        }
    }

    //Задание 3.
    char transport_code;
    double distance;
    cout << "Введите код транспорта (B/M/T) и расстояние: ";
    cin >> transport_code >> distance;

    if (distance <= 0) {
        cout << "Ошибка" << endl;
    } else {
        double transport_cost = 0;
        bool code_ok = true;

        switch (transport_code) {
            case 'B': case 'b':
                cout << "Автобус. ";
                transport_cost = 1.2;
                break;
            case 'M': case 'm':
                cout << "Метро. ";
                transport_cost = 1.5;
                break;
            case 'T': case 't':
                cout << "Городской поезд. ";
                transport_cost = 0.08 * distance;
                if (transport_cost < 2.5) transport_cost = 2.5;
                break;
            default:
                code_ok = false;
        }

        if (!code_ok) cout << "Ошибка" << endl;
        else cout << "Стоимость: " << transport_cost << endl;
    }

    //Задание 4.
    char taxi_code;
    double taxi_dist;
    int is_night, is_holiday;
    cout << "Введите код тарифа (E/C/B), расстояние, ночь (0/1), праздник (0/1): ";
    cin >> taxi_code >> taxi_dist >> is_night >> is_holiday;

    if (taxi_dist <= 0 || (is_night != 0 && is_night != 1) || (is_holiday != 0 && is_holiday != 1)) {
        cout << "Ошибка" << endl;
    } else {
        double posadka = 0, price_per_km = 0, min_allowed = 0;
        bool tariff_ok = true;

        switch (taxi_code) {
            case 'E': case 'e': posadka = 2; price_per_km = 0.8; min_allowed = 4; break;
            case 'C': case 'c': posadka = 3; price_per_km = 1.1; min_allowed = 6; break;
            case 'B': case 'b': posadka = 5; price_per_km = 1.8; min_allowed = 10; break;
            default: tariff_ok = false;
        }

        if (!tariff_ok) {
            cout << "Ошибка" << endl;
        } else {
            double total_taxi = posadka + (price_per_km * taxi_dist);
            if (is_night == 1) total_taxi *= 1.2;
            if (is_holiday == 1) total_taxi *= 1.25;
            if (total_taxi < min_allowed) total_taxi = min_allowed;

            cout << "Итоговая цена такси: " << total_taxi << endl;
        }
    }
    return 0;
}
