
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Daj colichestvo radov (1..20): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int price;

        if (i <= 5)
            price = 8;
        else
            price = 10;

        cout << "Rad " << i << " - " << price << endl;
        sum += price;
    }

    cout << "Stoimost: " << sum << endl;

    int age;
    int children = 0, adults = 0;

    cout << "Daj vozrast: ";
    cin >> age;

    while (age != -1) {
        if (age >= 0 && age < 18)
            children++;
        else if (age >= 18)
            adults++;

        cout << "Daj vozrats: ";
        cin >> age;
    }

    cout << "Colichestvo detej: " << children << endl;
    cout << "Colichestvo vzroslyh: " << adults << endl;

    int seat;

    do {
        cout << "Nomer mesta(1..30): ";
        cin >> seat;
    } while (seat < 1 || seat > 30);

    if (seat <= 15)
        cout << "Levaja polovina zala" << endl;
    else
        cout << "Pravaja polovina zala" << endl;

    int rows, seats;

    cout << "Daj colichestvo radov (1..10): ";
    cin >> rows;

    cout << "Daj colichestvo mest(1..10): ";
    cin >> seats;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= seats; j++) {
            cout << "[" << i << ":" << j << "] ";
        }
        cout << endl;
    }

    return 0;
}
