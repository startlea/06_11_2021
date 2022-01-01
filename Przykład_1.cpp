#include <iostream>

#include <cstdio>
using namespace std;

int main()
{
    float bok;
    do // rób...
    {
        cout << "Podaj dodatnia dlugosc boku! ";
        cin >> bok; // zmiennej bok została przypisana wartość

        if (bok <= 0)
            cout << "Niepoprawna dlugosc boku - podaj jeszcze raz!" << endl;
    }

    while (bok <= 0); // ...dopóki bok nie jest wartością dodatnią

    cout << "Pole kwadratu wynosi: " << bok * bok;
    cin.ignore();
    cin.get();
    return 0;
}