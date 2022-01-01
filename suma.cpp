#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Podaj liczbe calkowita";
    cin >> n;
    int rob = abs(n); // w rob przechowujemy wartość bezwzględną z n
    //(ponieważ liczba mogła być ujemna, a suma cyfr jest liczbą dodatnią)
    int s = 0;      // w zmiennej s będziemy przechowywać sumę liczb
    while (rob > 0) // dopóki są jeszcze cyfry
    {
        s += rob % 10; // do sumy dodajemy ostatnią cyfrę liczby rob
        rob /= 10;     // liczbę rob dzielimy przez 10, skracamy w ten sposób ostatnia cyfrę
        cout << "Suma cyfr liczby " << n << "wynosi" << s << endl;
        system("PAUSE");
        return 0;
    }