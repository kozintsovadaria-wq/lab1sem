
#include <iostream>
#include <windows.h>
using namespace std;

int ticketsCost(int price, int tickets) {
    return price * tickets;
}

void sellTicket(int& seats) {
    if (seats > 0) {
        seats--;
    }
}

int tickets(int adult, int child) {
    return adult + child;
}

int tickets(int adult, int child, int student) {
    return adult + child + student;
}

void printHall(int hall, int floor = 1) {
    cout << "Зал: " << hall << endl;
    cout << "Этаж: " << floor << endl;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    cout << "Задание 1" << endl;

    cout << ticketsCost(8, 3) << endl;
    cout << ticketsCost(10, 5) << endl;


    cout << endl << "Задание 2" << endl;

    int seats = 20;

    cout << "Мест до продажи: " << seats << endl;
    sellTicket(seats);
    cout << "Мест после продажи: " << seats << endl;


    cout << endl << "Задание 3" << endl;

    cout << "Взрослые и дети: " << tickets(2, 3) << endl;
    cout << "Взрослые, дети и студенты: " << tickets(2, 3, 4) << endl;


    cout << endl << "Задание 4" << endl;

    printHall(2);
    cout << endl;
    printHall(3, 2);

    return 0;
}
