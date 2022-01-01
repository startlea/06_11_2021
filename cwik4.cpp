// ilosc cyfr w liczbie

#include <iostream>

#include <cmath>

using namespace std;

int main()

{

    int a, b = 1, i = 0;

    cout << "Podaj liczbe: ";

    cin >> a;

    // mnożymy zmienna b=1 przez 10 dopóki nie będzie większa od liczby a, ilość iteracji da nam odpowiedź ile cyfr jest w liczbie a

    while (a >= b)
    {

        b = b * 10;

        i++;
    }

    cout << "Ilosc cyfr w liczbie wynosi: " << i << endl;

    return 0;
}