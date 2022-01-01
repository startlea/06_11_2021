#include <iostream>

#include <cstdlib>

#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    float a;

    cout << "Program oblicza pierwiastek kwadratowy z danej liczby.\n";

    cout << "Podaj liczbę a=";

    cin >> a;

    while (a < 0)

    {

        cout << "Liczba nie może być ujemna!\n\n";

        cout << "Podaj liczbę a=";

        cin >> a;
    }

    cout << "\n\nPierwiastek kwadratowy z " << a << " wynosi "

         << sqrt(a) << "." << endl
         << endl;

    system("PAUSE");

    return 0;
}