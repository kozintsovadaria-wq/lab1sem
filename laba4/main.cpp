
#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    cout << "Задание 1" << endl;
    cout << "Введите количество сеансов: ";
    cin >> n;

    int tickets;
    int sum = 0;
    int max = -1;
    int maxNum = 0;

    for (int i = 1; i <= n; i++) {
        cout << "Продано билетов на сеансе " << i << ": ";
        cin >> tickets;

        int money;

        if (i % 2 == 1) {
            money = tickets * 8;
        } else {
            money = tickets * 10;
        }

        cout << "Выручка: " << money << endl;

        sum += money;

        if (money > max) {
            max = money;
            maxNum = i;
        }
    }

    cout << "Общая выручка: " << sum << endl;
    cout << "Самая большая выручка была на сеансе: " << maxNum << endl;


    cout << endl << "Задание 2" << endl;

    int N;
    cout << "Введите количество мест: ";
    cin >> N;

    int place;
    int count = 0;
    int repeat = 0;
    int prev = -1;

    cout << "Введите номера мест (0 - конец): " << endl;

    while (true) {
        cin >> place;

        if (place == 0) {
            break;
        }

        if (place < 1 || place > N) {
            continue;
        }

        count++;

        if (place == prev) {
            repeat++;
        }

        prev = place;
    }

    cout << "Количество принятых записей: " << count << endl;
    cout << "Повторений соседних мест: " << repeat << endl;


    cout << endl << "Задание 3" << endl;

    int row;
    int seat;

    do {
        cout << "Введите ряд и место: ";
        cin >> row >> seat;
    } while (row < 1 || row > 12 || seat < 1 || seat > 20);

    int price;

    if (row <= 4) {
        price = 7;
    } else if (row <= 8) {
        price = 9;
    } else {
        price = 11;
    }

    if (seat >= 8 && seat <= 13) {
        price += 2;
    }

    cout << "Ряд: " << row << endl;
    cout << "Место: " << seat << endl;
    cout << "Цена билета: " << price << endl;


    cout << endl << "Задание 4" << endl;

    int r;
    int h;

    cout << "Введите количество рядов: ";
    cin >> r;

    cout << "Введите количество мест в половине ряда: ";
    cin >> h;

    int x = 0;

    cout << endl << "План зала:" << endl;

    for (int i = 1; i <= r; i++) {
        cout << "Ряд " << i << ": ";

        for (int j = 1; j <= 2 * h; j++) {
            if (j == h + 1) {
                cout << "|| ";
            }

            if ((i + j) % 3 == 0) {
                cout << "X ";
                x++;
            } else {
                cout << ". ";
            }
        }

        cout << endl;
    }

    cout << "Всего мест с X: " << x << endl;

    return 0;
}
